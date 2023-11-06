#include<stdio.h>
#include<math.h>
int main(){
    int oct,dec=0,m,i=0;
    printf("Enter octal number :");
    scanf("%d",&oct);
    while (oct)
    {
        m=oct%10;
        dec+=m*pow(8,i);
        oct=oct/10;
        i++;
    }
    printf("octal to decimal :%d\n",dec);
    int bin=0,m1,place=1;
    while (dec)
    {
        m1=dec%2;
        bin+=m1*place;
        place*=10;
        dec=dec/2;  
    }
    printf("Octal to binary via (d-b):%d\n",bin);
}