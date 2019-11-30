#include<stdio.h>

int main() 
{
    int i,j,a[5],cnt=0,tmp=0;
    
    for(i=0;i<4;i++)
    {
        scanf("%d\n",&a[i]);    
    }
    
    
    for(i=0; i<4; ++i)
    {
        for(j=i+1; j<4; ++j)
        {
            if(a[i] >a[j])
            {
                tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }
    
    
    for(i=0;i<3;i++)
    {
        if(a[i]==a[i+1])
        {
            cnt++;
        }
    }
    
    printf("%d\n",cnt);
    
    return 0;
    
    
}