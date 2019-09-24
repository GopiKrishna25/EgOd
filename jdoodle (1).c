#include<stdio.h>

int main()
{
    int n,k,m=0,i;
    int a[100];
    
    scanf("%d\n",&n);
    scanf("%d\n",&k);
    
    for(i=0; i<n; i++)
    {
        scanf("%d\n",&a[i]);
    }
    
    for(i=0; i<n; i++)
    {
        if(a[i]>=a[k-1] && a[i]>0)
        {
            m++;
        }
    }
    
    printf("%d",m);
    return 0;
}