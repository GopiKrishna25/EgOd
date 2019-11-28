#include<stdio.h>

int main()
{
    int n,k,i;
    
    scanf("%d%d\n",&n,&k);
    
    if(n%2==0)
    {
        if(k<=n/2)
        {
            printf("%d\n",2*k-1);
        }
        else 
        {
            k=k-n/2;
            printf("%d\n",2*k);
        }
    }
    else 
    {
        if(k<=(n/2)+1)
        {
            printf("%d\n",2*k-1);
        }
        else 
        {
            k=k-(n/2)-1;
            printf("%d\n",2*k);
        }
    }
    
    return 0;
}
