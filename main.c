#include <stdio.h>

int main()
{
    int a,b;
    printf("enter 2 numbers");
    scanf("%d %d",&a,&b);
    printf("before swapping: a=%d,b=%d\n",a,b);
    
    if(b!=0)
{
    a=a*b;
    b=a/b;
    a=a/b;
    printf("a=%d,b=%d\n",a,b);
}
}