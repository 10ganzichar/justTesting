#include <iostream>

int main()
{
    int nMoney{};
    int nCount{};
    int nTotal{};
    int arCoin[4]{};

    arCoin[0]=500;
    arCoin[1]=100;
    arCoin[2]=50;
    arCoin[3]=10;

    printf("거슬러 줘야 할 돈을 입력하시오: ");
    scanf("%d",&nMoney);

    for(int i=0;i<4;i++)
    {
        nCount=nMoney/arCoin[i];
        nMoney%=arCoin[i];
        nTotal+=nCount;
        printf("%d원 %d개\n",arCoin[i],nCount);
    }

    printf("총 : %d개\n",nTotal);

}