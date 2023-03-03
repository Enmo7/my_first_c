#include <stdio.h>
#include <stdlib.h>


int avarge(int x, int y, int z, int t, int f);

int main()
{
  int n1,n2,n3,n4,n5;

  printf("please enter the numbers\n");

  scanf("%d%d%d%d%d", &n1,&n2,&n3,&n4,&n5);

  int prob = avarge(n1,n2,n3,n4,n5);

  printf("\n the average is :%d\n",prob);

  return 0 ;
}


