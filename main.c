#include <stdio.h>

int main(void)
{
    int input;
    scanf("%d",&input);

    /*0未満または10以上12未満または15以上ならNG*/
    int fun=!(input<0||(input>=10&&input<12)||input>=15);

    /*条件満たせばOKを表示*/
    if(fun==1)
    {
        printf("OK");
    }
    else
    {
        printf("NG");
    }
    return 0;
}
