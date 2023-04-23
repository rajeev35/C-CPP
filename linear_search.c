#include<stdio.h>
int main()
{
    int a[10],i,n;
    printf("enter the array element")
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the number ");
    scanf("%d",&n);
     for(i=0;i<10;i++)
    {
    if(a[i]==n)
     
    
    {
        printf("number found at index i");
        break;
    }
    }

}