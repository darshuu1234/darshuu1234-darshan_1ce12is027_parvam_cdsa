#include<stdio.h>
void foo();
void bar(int );

int main()
{
    void (*p)()=&foo;
    printf("star of main\n");
    foo();
    bar(12);
    bar(1);
    foo();
    printf("\nend of main\n");
    return 0;
}
void foo()
{
    printf("\nfoo func\n");
}
void bar(int x){
    printf("\nbar func %d\n",x);
}