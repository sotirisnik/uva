#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <algorithm>

using namespace std;

int t, bottles_possess, bottles_found, required_bottles;

int main( ) {

    scanf( "%d", &t );
    
    while ( t-- ) {
    
        scanf( "%d %d %d", &bottles_possess, &bottles_found, &required_bottles );
      
        int ans = 0;
        
        bottles_possess += bottles_found;
        
        while ( bottles_possess >= required_bottles ) {
            bottles_possess -= ( required_bottles - 1 );
            ++ans;
        }
        
        printf( "%d\n", ans );
        
    }
    
    return 0;

}