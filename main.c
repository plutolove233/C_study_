#include<stdio.h>
#include <string.h>

int n;

void read(char str[],int a[]){
    int plus = 1;
    for (int i = 0; i<=199; i++)
        a[i] =0;
    n = 0;
    gets(str);
    for (int i = 0; i<strlen(str); i++) {
        plus = 0;
        if (str[i] != ',') {
            if (str[i] == '-') {
                plus = 1;
                i++;
            }
            n++;
            while (str[i] != ',' && i < strlen(str)) {
                a[n] = a[n] * 10 + str[i] - '0';
                i++;
            }
            if (plus) a[n] = a[n]*-1;
        }
    }
}

int  main(){
    char str[1000];
    int a[1000];
    read(str,a);
    for (int i = 1; i<=n; i++)
        printf("%d ",a[i]);
    printf("\n");
}