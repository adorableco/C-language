#include <stdio.h>

int main()
{
    int A[10],B[10];
    int ascore=0,bscore=0;
    int chk = 0,sum = 0;
    
    for (int i = 0; i < 10; i++)
    {
        scanf("%d",&A[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        scanf("%d",&B[i]);
    }
    
    for (int i = 0; i < 10; i++)
    {
        if(A[i]==B[i])
        {
            ascore++;
            bscore++;
            sum+=i;
        }
        else
        {
            (A[i]>B[i])?(ascore+=3):(bscore+=3);
            chk = i;
        }
    }
    
    printf("%d %d\n",ascore,bscore);
    
    if(ascore==bscore)
    {
        if(sum==45)
            printf("D\n");
        else
            printf("%c\n",(A[chk]>B[chk])?'A':'B');
            
    }
    else
        printf("%c\n",(ascore>bscore)?'A':'B');
    return 0;
}
