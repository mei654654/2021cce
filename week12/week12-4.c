#include <stdio.h>
int a[100];
int main()
{///(1)input
    for(int i=0;i<100;i++){
    	scanf("%d", &a[i]);
    }

    ///selection sort原則
    for(int i=0;i<100;i++){///左手i
        for(int j=i+1;j<100;j++){///右手j

            if(a[i]>a[j]){
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }///反過就交換
        }

    }///(2)output
        for(int i=0;i<100;i++)printf("%d\n",a[i]);

}

