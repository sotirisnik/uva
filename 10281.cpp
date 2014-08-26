#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <algorithm>

#define MAXN 55

using namespace std;

char text[MAXN];

int hours, minutes, seconds, speed, newspeed, tot, prev, now;
double ans;

int main( ) {

    ans = 0;

    while ( gets( text ) ) {
        
        if ( text[8] == ' ' ) {
            sscanf( text, "%d:%d:%d %d", &hours, &minutes, &seconds, &newspeed );
            now = seconds + 60 * ( minutes + 60 * hours );
            ans += ( (now-prev) * speed );
        }else {
            sscanf( text, "%d:%d:%d", &hours, &minutes, &seconds );
            now = seconds + 60 * ( minutes + 60 * hours );
            ans += ( (now-prev) * speed );
            printf( "%02d:%02d:%02d %.2lf km\n", hours, minutes, seconds, (double)ans/3600.0 );
        }
        
        speed = newspeed;
        prev = now;
        
    }

    return 0;

}