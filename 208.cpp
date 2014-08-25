#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <algorithm>

using namespace std;

char text[1000];

int main( ) {

	//freopen("in.txt","r",stdin);
	
	int f = 0;
	
	while ( gets(text) ) {
	
		int len = strlen( text );
		
		for ( int i = 0; i < len; ++i ) {
			if ( text[i] == '\"' ) {
				if ( f == 0 ) {
					printf( "``" );
				}else {
					printf( "''" );
				}
				f = 1 - f;
			}else {
				printf( "%c", text[i] );
			}
		}
	
		putchar( '\n' );
		
	}

	return 0;
	
}
