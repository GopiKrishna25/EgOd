#include<stdio.h>

int main()
{
    int i,n;
    
    scanf("%d",&n);
    
    for(i=1;i<n;i++)
    {
        if(i%2==1)
        {
            printf("I hate that\t");
        }
        else
        {
            printf("I love that\t");
        }
    }
    
    if(n%2==1)
    {
        printf("I hate it\t");
    }
    else
    {
        printf("I love it\t");
    }
    
    return 0;
    
}