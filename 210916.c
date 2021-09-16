#include <stdio.h>

int main()
{
    int arr[7],list[7];
    int a = 0, sum = 0;
    int c, check = 0;
    
    for (int i = 0; i < 7; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    for (int i = 0; i < 7; i++)
    {
        if(arr[i]%2==1)
        {
            list[a] = arr[i];
            a++;
        }
        else
            check ++;
    }
    
    if(check == 7)
        printf("-1");
    
    else
    {
        c = list[0];
        
        for (int i = 0 ; i < a; i++)
        {
            if(c>list[i])
            {
                c = list[i];
            }
        }
        
        for (int i = 0; i < a; i++)
        {
            sum += list[i];
        }
        
        printf("%d\n",sum);
        printf("%d\n",c);
    }
    return 0;
    
}
