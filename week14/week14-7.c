#include <stdio.h>
int a[1000][1000];
int main()
{
	int M,N;
	//yourcode
	scanf("%d %d",&M,&N);
	for(int i=0;i<M;i++){
		for(int j=0;j<N;j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n");
	//for(int i=0;i<M;i++){
//	for(int j=0;j<N;j++){
	for(int j=0;j<N;j++){
		for(int i=M-1;i>=0;i--){
			printf("%2d ",a[i][j]);
		}
		printf("\n");
	}
}

