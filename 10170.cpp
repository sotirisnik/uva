#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <algorithm>

using namespace std;

long long group_size, day, tot_days;

int main( ) {

    while ( scanf( "%lld %lld", &group_size, &day ) != EOF ) {
   
        tot_days = 0;

        while (  true ) {
        
            tot_days += group_size;
            
            if ( tot_days >= day ) {
                break;
            }
            
            ++group_size;
            
        }
        
        printf( "%lld\n", group_size );
        
    }
    
    return 0;

}