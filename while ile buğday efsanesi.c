#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    double bugday=1;
    double toplamBugdaySayisi=0;

    for(i=1;i<=64;i++){
        printf("==> %d. kare icin bugday degeri :   %20.0f\n",i,bugday);
        toplamBugdaySayisi += bugday;
        bugday *= 2;
    }
    printf("\n==> Verilecek toplam bugday sayisi : %20.0f\n",toplamBugdaySayisi);
    return 0;
}
