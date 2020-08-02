#include <stdio.h>
#include <time.h>
#include "dll.h"
 
int main(int argc,char **argv)
{
 int x, y;
 
 srand(time(NULL));
 x = (rand() % 100) + 1;
 y = (rand() % 100) + 1;
 printf("%d + %d = %d\n",x,y,soma(a,b));
 x = (rand() % 100) + 1;
 y = (rand() % 100) + 1;
 printf("%d - %d = %d\n",x,y,sub(a,b));
 
 system("pause");
 return 0;
}