/* Author Vineeth Kartha
Date: 04-11-14
Description: Server code for Petalinux*/
#include<stdio.h>
#include<string.h>
#include<sys/types.h>
#include<sys/socket.h>
#include<netinet/in.h>
#include<arpa/inet.h>


#include <stdlib.h>
#include <unistd.h>
#include <sys/mman.h>
#include <fcntl.h>

/* The accelerometer controller address*/
#define ACCEL_ADDR 0x62C00000  	// Base Address
#define REG1_OFFSET 0			// Register to enable the controller
#define REG2_OFFSET 4			// Register to give address to the controller
#define REG3_OFFSET 8			// Output register

void i2s(int num,char *str )
{
  int dig=0,i=0,j;
  int negflag=0;
  char temp;
  if(num<0)
  {
	negflag=1;
	num=num*-1;
  }
  if(num==0)
  {
    str[i]='0';
	i+=1;
	str[i]='\0';
  }
  else
  {
  	while(num>0)
    {
      dig=num%10;
      num/=10;
      str[i]='0'+dig;
      i++;
    }
  if(negflag)
  {
	str[i]='-';
    i++;
  }
  str[i]='\0';
  for(i=0,j=strlen(str)-1;i<strlen(str)/2;i++,j--)
    {
      temp=str[i];
      str[i]=str[j];
      str[j]=temp;
    }
  }
}


signed char acceleration(void *ptr, char axis)
{
	*((unsigned *)(ptr + REG1_OFFSET)) = 1;
	switch(axis)
	{
		case 'x':
				*((unsigned *)(ptr + REG2_OFFSET)) = 0x08;
				break;
		case 'y':
				*((unsigned *)(ptr + REG2_OFFSET)) = 0x09;
				break;
		case 'z':
				*((unsigned *)(ptr + REG2_OFFSET)) = 0x0A;
				break;
	}
	return(*((unsigned *)(ptr + REG3_OFFSET)));
	
}

int main(int argc,char *argv[])
{
  	int connect,connection;
  	char IP[18];
    char axis;
	

 	struct sockaddr_in server_addr, client_addr;
  	int fd,len,sin_size;
  	char BUF[BUFSIZ];
  	char senddata[BUFSIZ],temp[BUFSIZ];
	char message[BUFSIZ];
	
	pid_t childpid;
  	int adxl;
  	void *ptr;
  	unsigned page_size=sysconf(_SC_PAGESIZE);
	signed char val;

	if(argc<1)
    {
      printf("Please Enter the Server IP address");
      scanf(" %s",IP);
    }
  	else
    {
      strcpy(IP,argv[1]);
      printf("Server IP is %s\n",IP);
    }
	/* Open /dev/mem file */
	adxl = open ("/dev/mem", O_RDWR);
	if (adxl < 1) {
		perror(argv[0]);
		return -1;
	}

	/* mmap the device into memory */
	ptr = mmap(NULL, page_size, PROT_READ|PROT_WRITE, MAP_SHARED, adxl, ACCEL_ADDR);
	
	memset(&server_addr,0,sizeof(server_addr));
  	server_addr.sin_family=AF_INET;
  	server_addr.sin_addr.s_addr=inet_addr(IP);
  	server_addr.sin_port=htons(8000);
	
	printf("Enter x, y or z: ");
	scanf(" %c",&axis);

  	printf("Waiting for a client\n");
  	
	if((connect=socket(PF_INET,SOCK_STREAM,0))<0)
    {
      perror("socket");
      return 1;
    }
 	
	if(bind(connect,(struct sockaddr *)&server_addr,sizeof(struct sockaddr))<0)
    {
      perror("bind");
      return -1;
    }
  	
	listen(connect,3);

 while(1)
    {
  	sin_size=sizeof(struct sockaddr_in);
  	
	if((fd=accept(connect,(struct sockaddr *)&client_addr,&sin_size))<0)
    {
      perror("accept");
      return -1;
    }
  	
	printf("\nClient %s is connected\n",inet_ntoa(client_addr.sin_addr));
	if ((childpid = fork()) == 0) {
		close(connect);
		strcpy(message,"Welcome to ADXL362 ");
		len=strlen(message);
		message[len]=axis;
		message[len+1]='\0';
		strcat(message,"-axis Measurements");
  		len=send(fd,message,sizeof(message),0);
	
		while(1)
		{
  			sleep(1);
			strcpy(senddata,"Value: ");
			val=acceleration(ptr,axis);
			i2s(val,temp);
			strcat(senddata,temp);
  			printf("\n %s \n",senddata);
			if(send(fd,senddata,sizeof(senddata),0)<0)
			{
				perror("write");
  				return 1;
			}		
		}

		munmap(ptr, page_size);
	}
	close(fd);
	}
	//close(connect);
  	return 0;
}

