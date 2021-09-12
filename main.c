#include <stdio.h>

int main()
{
    int num1;
    int num2;
    int sum = 0;
    int num;
    
    scanf("%d",&num1);
    
    for (int i = 0; i < num1; i++)
    {
        scanf("%d",&num2);
        
        for (int j = 0; j < num2; j++)
        {
            scanf("%d",&num);
            sum+=num;
        }
        printf("%d\n",sum);
        sum = 0;
    }
    return 0;
}
