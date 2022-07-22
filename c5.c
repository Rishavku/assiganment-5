#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,n;
    printf("how many wants to print odd natual number in reverse order");
    scanf("%d",&n);
    for ( i = n; i >=1; i--)
    {
        printf("%d\n",i*2-1);
    }
    
    return 0;
}
