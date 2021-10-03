#include<stdio.h>
int bin(int n);
int main()
{
    int n;
    printf("enter no:\n");
    scanf("%d",&n);
    printf("%d",bin(n));
    return 0;
}
int bin(int n)
{
    if(n>0)
    return n%2+10*bin(n/2);
}