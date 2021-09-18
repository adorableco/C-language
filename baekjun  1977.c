#include <stdio.h>
#include <math.h>

int main()
{
    int a,b,c = 0,sum=0;
    int check;
    scanf("%d",&a);
    scanf("%d",&b);
    
    for (int i = b; i >= a; i--)
    {
        check = (double) sqrt(i) * 1000;
        if(check % 1000 == 0)
        {
            sum += i;
            c = i;
        }
    }
    
    if(sum == 0)
        printf("-1");
    else
        printf("%d\n%d\n",sum,c);
    return 0;
}
