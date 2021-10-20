/*
三角形成立: 兩邊長的和要大於第三邊
例如:變數a,b,c(a為邊長最長邊)
直角:兩短邊平方和==最長邊平方和
銳角:兩短邊平方和>最長邊平方和
鈍角:兩短邊平方和<最長邊平方和

***參考結果****
6 3 2
錯誤

6 3 4
鈍角*/
#include <stdio.h>
int main()
{
	int a, b, c;
	int temp;
	scanf("%d%d%d", &a, &b, &c);
	printf("現在A:%d B:%d C:%d\n",a,b,c);
	if (a>c){
	temp=a;
	a=c;
	c=temp;
	}
	printf("現在A:%d B:%d C:%d\n",a,b,c);
	if (b>c){
	temp=b;
	b=c;
	c=temp;
	}
	printf("現在A:%d B:%d C:%d\n",a,b,c);
}
