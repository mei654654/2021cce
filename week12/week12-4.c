#include <stdio.h>
int a[100];
int main()
{///(1)input
    for(int i=0;i<100;i++){
    	scanf("%d", &a[i]);
    }

    ///selection sort��h
    for(int i=0;i<100;i++){///����i
        for(int j=i+1;j<100;j++){///�k��j

            if(a[i]>a[j]){
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }///�ϹL�N�洫
        }

    }///(2)output
        for(int i=0;i<100;i++)printf("%d\n",a[i]);

}

