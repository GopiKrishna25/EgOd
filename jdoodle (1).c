#include<stdio.h>

int main()
{
    int x,y,z,n;
    int a=0,b=0,c=0;
    
    scanf("%d\n",&n);
    while(n--)
    {
        scanf("%d%d%d\n",&x,&y,&z);
        a+=x;
        b+=y;
        c+=z;
    }
    
    if(a==0&&b==0&&c==0)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }
    
    return 0;
}