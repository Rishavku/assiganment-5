#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,n;
    printf("enter your natural number");
    scanf("%d",&n);
    for ( i = 1; i <=n ; i++)
    {
        printf("%d\n",i*2);
    }
    
    return 0;
}
