#include <stdio.h>
int main()
{
	int a, b, c;
	int t;
	scanf("%d%d%d", &a, &b, &c);
	if (a>c){
	t=a;
	a=c;
	c=t;
	}
	if (b>c){
	t=b;
	b=c;
	c=t;
	}
	if (a>b){
	t=a;
	a=b;
	b=t;
	}
	printf("%d %d %d", a, b, c);
}
