#include<stdio.h>

int main()
{
    int n,i,num=0,cnt=1;
    scanf("%d",&n);
    int a[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0; i<n-1; i++)
    {
        if(a[i]>a[i+1])
        {
            if(cnt>num)
            {
                num=cnt;
            }
            cnt=1;
        }
        else
        {
            cnt++;
        }
        
    }
    if(cnt>num)
    {
        num=cnt;
    }
        
    printf("%d\n",num);
    return 0;
}