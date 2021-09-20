#include <stdio.h>

int main()
{
    int a,b,c,d,e;
    scanf("%d %d",&a,&b);
    c = a/100;
    d = a%100/10;
    e = a%100%10;
    a = e*100+d*10+c;
    c = b/100;
    d = b%100/10;
    e = b%100%10;
    b = e*100+d*10+c;
    (a>b)?printf("%d\n",a):printf("%d\n",b);
    return 0;
}
