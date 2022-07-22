#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,n;
    printf("enter your number");
    scanf("%d",&n);
    for ( i = n; i >=1; i--)
    {
    printf("%d\n",i*2);
    }
    
    return 0;
}
