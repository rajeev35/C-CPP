#include<stdio.h>
int main()
{
    int a,b,c,*p,*q;
    printf("enter the number of a and  b ");
    p=&a;
    q=&b;
    c= (*p)+(*q);
    printf("%d",c);
    return 0;

}