#include <stdio.h>

int main()
{
    int arr[101][101]={0,};
    int chk[4];
    int sum=0;
    
    for (int i=0;i<4; i++)
    {
        scanf("%d %d %d %d",&chk[0],&chk[1],&chk[2],&chk[3]);
        
        for (int j=chk[1]; j<chk[3]; j++)
        {
            for (int k=chk[0]; k<chk[2]; k++)
            {
                arr[j][k]++;
            }
        }
    }
    
    for (int i=0; i<101; i++)
    {
        for (int j=0; j<101; j++)
        {
            if(arr[i][j]!=0)
                sum++;
        }
    }
    printf("%d\n",sum);
    return 0;
}

