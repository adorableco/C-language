#include <stdio.h>

int gcd(int a, int b)
{
    int max, min;
    int cnt=0;
    
    if(a>b)
    {
        max = a;
        min = b;
    }
    else
    {
        max = b;
        min = a;
    }
    
    for (int i = 1; i <= min; i++)
    {
        if(max%i==0 && min%i==0)
            cnt = i;
    }
    return cnt;
}

int main()
{
    int a,b;
    int num;
    scanf("%d",&num);
    int arr[num][2];
    for (int i = 0; i < num; i++)
    {
        scanf("%d %d",&a,&b);
        arr[i][0] = a*b/gcd(a, b);
        arr[i][1] =gcd(a,b);
    }
    
    for (int i = 0; i < num; i++)
    {
        printf("%d %d\n",arr[i][0],arr[i][1]);
    }
    return 0;
}

