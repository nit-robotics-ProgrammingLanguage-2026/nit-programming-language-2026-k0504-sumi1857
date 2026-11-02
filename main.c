#include <stdio.h>

int main(void)
{
    int input;
    scanf("%d",&input);
    int f=!(input<0||(input>=10&&input<12)||input>=15);
    if(f==1)
    {
        printf("OK");
    }
    else
    {
        printf("NG");
    }
    return 0;
}
