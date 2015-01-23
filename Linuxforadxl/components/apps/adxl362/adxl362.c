/*
Author: Vineeth Kartha
Date: 12-11-2014
Driver to access Accelerometer 
 */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/mman.h>
#include <fcntl.h>

#define ACCEL_ADDR 0x62C00000
#define REG1_OFFSET 0
#define REG2_OFFSET 4
#define REG3_OFFSET 8

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


int main(int argc, char *argv[])
{
	int fd;
	void *ptr;
	unsigned page_size=sysconf(_SC_PAGESIZE);
	signed char val;
	char axis='x';
    int i;
	fd = open ("/dev/mem", O_RDWR);
	if (fd < 1) {
		perror(argv[0]);
		return -1;
	}
	
	ptr = mmap(NULL, page_size, PROT_READ|PROT_WRITE, MAP_SHARED, fd, ACCEL_ADDR);
	printf("Enter x, y or z: ");
	scanf(" %c",&axis);
	while(1)
	{
		val=acceleration(ptr,axis);
		printf(" %d\n",val);			
	}	

	munmap(ptr, page_size);

	return 0;
}

