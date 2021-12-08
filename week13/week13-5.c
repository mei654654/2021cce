
#include <stdio.h>
void printfstar(int n)
{
    for(int i=0;i<n;i++)printf("*");
}
void printfspace(int n)
{
    for(int i=0;i<n;i++)printf(" ");
}
int main()
{
    for(int i=1;i<10;i++){
        printfspace(9-i);
        printfstar(i);
        printf("\n");}
}
