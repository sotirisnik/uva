import java.io.*;
import java.util.Scanner;
import java.math.BigInteger;

class uva495 {

    public static void main( String args[] ) throws IOException {
    
        Scanner fin = new Scanner( System.in );
    
        int MAXN = 5000;
        
        BigInteger fibo[] = new BigInteger[MAXN+1];
    
        fibo[0] = BigInteger.ZERO;
        fibo[1] = BigInteger.ONE;
        
        for ( int i = 2; i <= MAXN; ++i ) {
            fibo[i] = fibo[i-1].add( fibo[i-2] );
        }
    
        while ( fin.hasNextInt() ) {
        
            int n = fin.nextInt();
            
            System.out.println( "The Fibonacci number for " + n + " is " + fibo[ n ] );
            
        }
    
        System.exit( 0 );
    
    }

}