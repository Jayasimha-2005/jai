#include<stdio.h>
#include<math.h>
void main(){
    int bin,dec=0,m,i=0;
    printf("Enter binary number (1 or 0):");
    scanf("%d",&bin);
    while(bin){
        m=bin%10;
        dec+=m*pow(2,i);
        bin=bin/10;
        i++;
    }
    printf("DEcimal conversion :%d\n",dec);
}