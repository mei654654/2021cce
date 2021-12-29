#include <stdio.h>
char line[300]="101010001010100101010";
int main()
{
    int ans=0;

    int i=0;
    while(line[i]!='\0'){
        if(line[i]=='1')ans++;

        i++;
    }
    printf("¦³%d­Ó1\n",ans);
}
