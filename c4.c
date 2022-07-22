#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i ,n;
    printf("how many wants to print odd number");
    scanf("%d",&n);

    for ( i =1; i <=n; i++)
    
    {
        printf("%d\n",i*2-1);
    }
    
    return 0;
}
