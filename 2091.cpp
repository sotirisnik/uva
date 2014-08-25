#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <algorithm>

using namespace std;

int n, borrow, total;

int main( ) {

	//freopen("in.txt","r",stdin);
	
	while ( scanf( "%d", &n ) != EOF ) {
	
		total = n;
		
		while ( n >= 3 ) {
			total += (n/3);
			n = (n/3) + (n%3);
		}
		
		if ( n == 2 ) {
			++total;
		}
		
		printf( "%d\n", total );
		
	}

	return 0;

} 