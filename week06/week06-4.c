/*
�T���Φ���: ��������M�n�j��ĤT��
�Ҧp:�ܼ�a,b,c(a������̪���)
����:��u�䥭��M==�̪��䥭��M
�U��:��u�䥭��M>�̪��䥭��M
�w��:��u�䥭��M<�̪��䥭��M

***�Ѧҵ��G****
6 3 2
���~

6 3 4
�w��*/
#include <stdio.h>
int main()
{
	int a, b, c;
	int temp;
	scanf("%d%d%d", &a, &b, &c);
	printf("�{�bA:%d B:%d C:%d\n",a,b,c);
	if (a>c){
	temp=a;
	a=c;
	c=temp;
	}
	printf("�{�bA:%d B:%d C:%d\n",a,b,c);
	if (b>c){
	temp=b;
	b=c;
	c=temp;
	}
	printf("�{�bA:%d B:%d C:%d\n",a,b,c);
}
