#include<stdio.h>
#include<stdlib.h>

int main()
{
  printf("\nCreating directory\n");
  if(system("ifconfig eth0 198.10.10.1")<0)
    {
      perror("Setting IP");
      return 1;
    }
  else
    {
      printf("\nIP Set\n");
    }

  return 0;
}
