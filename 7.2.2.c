#include<stdio.h>
#include <string.h>
#define rep(x,s,t)	for(x = s; x<=t; x++) 

void del_samechar(char str[]){
	int i,j,k;
	for (i = 0;i<strlen(str);){
		if (str[i]==str[i+1]){
			rep(j,i,strlen(str)-1)
				if (str[j]!=str[i]){
					k = j-1;
					break;
				}
			rep(j,k+1,strlen(str))
				str[i+j-k-1] = str[j];
			str[j] = '\0';
		}
		else i++;
	}
}

int main()

{   char str[100];

    gets(str);

     del_samechar(str);

     puts(str);

}