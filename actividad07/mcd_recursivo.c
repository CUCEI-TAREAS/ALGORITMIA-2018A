#include<stdio.h>

int mcd( int m, int n){
	
	int r =  m % n;

	if ( r == 0 ){
		return n;
	} else {
		return mcd(n, r);
	}
}
int main(){

	int test = 0;
	test = mcd(10, 5);
	printf("%d", test);
	return 0;
}

