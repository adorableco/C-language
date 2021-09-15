//백준 #2921번
#include <stdio.h>
#include <math.h>

int main()
{
    int sum;
    int N,result=0;
    
    scanf("%d",&N);

    sum = (N+2);
    
    for (int i = 1 ; i <= N; i++)
    {
        result += (sum*i);
    }
    
    printf("%d\n",result);
    return 0;
}

