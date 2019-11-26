#include<stdio.h>

int main() {
    int a,b,cnt=0;

    scanf("%d%d\n",&a,&b);
    
    while(a<=b)
    {
        a=a*3;
        b=b*2;
        
        cnt++;
    }
    
    printf("%d",cnt);
    
    return 0;
}