#include <stdio.h>
int main()
{
    int a,b;///a大b小

    scanf("%d%d",&a,&b);

    int c=a%b;

    printf("a大的%d b中的%d c小的%d\n",a,b,c);
    ///while(c!=0){
    while(1){
        if(c==0)break;///離開迴圈
        a=b;
        b=c;
        c=a%b;
    printf("a大的%d b中的%d c小的%d\n",a,b,c);
    }
    printf("因為c是0離開迴圈而且答案是中間的b\n");
    printf("%d",b);
}

