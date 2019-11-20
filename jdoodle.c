#include<stdio.h>

int year(int y)
{
    int a,b,c,d;
    a=y%10;
    b=(y/10)%10;
    c=(y/100)%10;
    d=(y/1000)%10;
    if(a!=b&&a!=c&&a!=d&&b!=c&&b!=d&&c!=d)
        return 1;
    else
        return 0;
}

int main()
{
    int y,x,i;
    scanf("%d",&y);
    for(i=y+1;i<=9012;i++){
       x=year(i);
       if(x==1){
        printf("%d\n",i);
        break;
       }
    }
    return 0;
}