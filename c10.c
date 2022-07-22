#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,n;
    printf("enter your table number");
    scanf("%d",&n);
    for ( i = 1; i <=10; i++)
    {
        printf("%d\n",n*i);
    }
    
    return 0;
}
