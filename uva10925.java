import java.io.*;
import java.util.Scanner;
import java.math.BigInteger;

class uva10925 {

    public static void main( String args[] ) throws IOException {
    
        Scanner fin = new Scanner( System.in );
    
        int t = 0;
    
        while ( true ) {
        
            int N = fin.nextInt();
            int F = fin.nextInt();
            
            if ( N == 0 && F == 0 ) {
                break;
            }
            
            BigInteger sum = new BigInteger( "0" );
            
            String tmp = "";
            
            for ( int i = 0; i < N; ++i ) {
                sum = sum.add( new BigInteger( fin.next() ) );
            }
            
            System.out.println( "Bill #" + ++t + " costs " + sum + ": each friend should pay " + sum.divide( new BigInteger( Integer.toString(F) ) ) + "\n" );
            
        }
    
        System.exit( 0 );
    
    }

}