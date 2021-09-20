#include <stdio.h>

int main()
{
    int N,K,num=0;
    scanf("%d %d",&N,&K);
    int arr[N];
    
    for (int i = 1; i <= N; i++)
    {
        if(N%i==0)
            arr[num++] = i;
    }
    
    if(K>num)
        printf("0");
    else
        printf("%d",arr[K-1]);
    return 0;
}
