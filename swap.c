#include <stdio.h>
void Swap (int,int );
int main() 
{
    int n1=0,n2=0;
    scanf("%d%i",&n1,&n2);
    printf("Before Swap %d %d",n1,n2,);
    swap (n1,n2);
    printf("\nAfter Swap %d %d",n1,n2);
    return 0;
}
void Swap (int *a,int *b)
{
    int t=*a;
    *a=*b;
    *b=t;
}