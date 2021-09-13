#include <stdio.h>

int main()
{
    int sum = 0;
    int a = 0 ;
    int num;
    int arr[7];
    int check[7];
    scanf("%d",&num);
    for (int i = 0; i < num; i++)
    {
        for (int i = 0; i < 7; i++)
        {
            scanf("%d",&arr[i]);
        }
        
        for (int i = 0; i < 7; i++)
        {
            if(arr[i]%2 == 0)
                check[a++] = arr[i];
        }
        
        int c = check[0];
        for (int i = 0; i < a; i++)
        {
            if(c>check[i])
                c = check[i];
        }
        
        for (int i = 0; i < a; i++)
        {
            sum+= check[i];
        }
        printf("%d ",sum);
        printf("%d\n",c);
        sum = 0;
        a = 0;
    }
    
    return 0;
}
