#include <stdio.h>

int sumArrayOne(int arry[],int size)
{
    int sum=0;
    for (int i=0; i<size; i++)
    {
            sum+=arry[i];
    }
    return sum;
}

int findMinOne(int arry[], int size)
{
    int a=arry[0];
    for (int i=0; i<size; i++)
    {
        if(a>arry[i])
            a = arry[i];
    }
    return a;
}

int main()
{
    int arry[100][100];
    int size=0;
    int min=0, sum=0;
    scanf("%d",&size);
    
    for (int i = 0; i < size; i++)
    {
        for (int j=0; j<size; j++)
        {
            scanf("%d",&arry[i][j]);
        }
    }
    min=arry[0][0];
    for (int i=0; i<size; i++)
    {
        sum+=sumArrayOne(arry[i], size);
        if(min>findMinOne(arry[i], size))
            min = findMinOne(arry[i], size);
    }
    
    printf("%d %d\n",sum,min);
    return 0;
}
