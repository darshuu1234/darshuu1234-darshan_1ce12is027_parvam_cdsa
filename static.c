#include<stdio.h>
void myfank();
int main()
{
   printf("Hello world\n");
   myfank(); 
   printf("Hello world2\n");
   myfank();
   printf("Hello worl3\n");
   return 0;
}
void myfank()
{
    int x=5;
    printf("%d\n",x);
    x++;
}