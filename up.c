#include <stdio.h>

long power(long x,int w){
	long res = 1;
	while (w){
		if (w&1)	res = res*x;
		x = x*x;
		w>>=1;
	}
	return res;
}

long compose(long x){
	int t,pos = 0;
	long res = 0;
	while (x){
		t = x%10;
		if (t%2==0){
			res = res+t*power(10,pos);
			pos++;
		}
		x = x/10;
	}
	return res;
}

int main()

{

   long int n ;

   scanf("%ld",&n);

   printf("%ld\n",compose(n));

   return 0;

}
