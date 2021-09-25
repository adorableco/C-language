#include <stdio.h>

int main()
{
    double money;
    scanf("%lf",&money);
    
    if (money<1000)
    {
        printf("%.0lf * 0.09 = %.0lf\n",money,money*0.09);
        printf("= %.0lf\n",money*0.09);
    }
    else if(money<4000)
    {
        printf("1000 * 0.09 = 90\n");
        printf("%.0lf * 0.18 = %.0lf\n",money-1000,(money-1000)*0.18);
        printf("= %.0lf\n", 90+(money-1000)*0.18);
    }
    else if(money<8000)
    {
        printf("1000 * 0.09 = 90\n");
        printf("3000 * 0.18 = 540\n");
        printf("%.0lf * 0.27 = %.0lf\n",money-4000,(money-4000)*0.27);
        printf("= %.0lf\n",630+(money-4000)*0.27);
    }
    else
    {
        printf("1000 * 0.09 = 90\n");
        printf("3000 * 0.18 = 540\n");
        printf("4000 * 0.27 = 1080\n");
        printf("%.0lf * 0.36 = %.0lf\n",money-8000,(money-8000)*0.36);
        printf("= %.0lf\n",1710+(money-8000)*0.36);
    }
    return 0;
}
