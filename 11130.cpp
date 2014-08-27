#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <algorithm>

#define PI 3.141592653

using namespace std;

double width, height, velocity, angle, seconds;

int main( ) {

    while ( true ) {
    
        scanf( "%lf %lf %lf %lf %lf", &width, &height, &velocity, &angle, &seconds );
        
        if ( width < 1e-9 && height < 1e-9 && velocity < 1e-9 && angle < 1e-9 && seconds < 1e-9 ) {
            break;
        }
        
        double vx = (double)velocity * (double)cos( (double)angle*(double)PI/180.0 );//(double)velocity / (double)( 1.0 + tan(angle)*tan(angle)*PI/180 );
        double vy = (double)velocity * (double)sin( (double)angle*(double)PI/180.0 );//sqrt( velocity*velocity - vx*vx );
        
        double accelx = (double)vx / (double)seconds;
        double accely = (double)vy / (double)seconds;
        
        double Dx = (double)( vx*seconds - (0.5)*accelx*seconds*seconds );
        double Dy = (double)( vy*seconds - (0.5)*accely*seconds*seconds );
        
        printf( "%.0f %.0f\n", (Dx/width), (Dy/height) );
        
    }
    
    return 0;

}