//백준 #2921번
#include <stdio.h>
#include <math.h>

int main()
{
    int sum = 0;
    int N,result=0;
    
    scanf("%d",&N);
    
    for (int i = 1; i <= N+1; i++)
    {
        sum+=i;
    }
    sum = sum*2/(N+1);
    
    for (int i = 1 ; i <= N; i++)
    {
        result += (sum*i);
    }
    
    printf("%d\n",result);
    return 0;
}
