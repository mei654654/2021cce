#include <stdio.h>
///int a[10]={4,5,6,1,2,3,7,8,9};
///int a[10]={0,3,2,1,4,5,6,7,8,9};
///int a [10]={9,8,7,6,5,4,3,2,1};

int a[100];
int main()
{
    for(int i=0;i<100;i++){
    scanf("%d",&a[i]);
    }


    for(int k=0;k<100-1;k++){
        for(int i=0;i<100-1;i++){
            if(a[i]>a[i+1]){
                int temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }

        }
    }
    for(int i=0;i<100;i++){
            printf("%d\n",a[i]);

    }
}
