import java.io.*;
import java.util.Scanner;
import java.math.BigInteger;

class uva10814 {

    public static void main( String args[] ) throws IOException {
    
        Scanner fin = new Scanner( System.in );
    
        int t = fin.nextInt();
    
        for ( int i = 0; i < t; ++i ) {
        
            BigInteger num = fin.nextBigInteger();
            
            String tmp = fin.next();
            
            BigInteger den = fin.nextBigInteger();
            
            BigInteger gcd = num.gcd( den );
            
            System.out.println( num.divide( gcd ) + " / " + den.divide(gcd) );
            
        }
    
        System.exit( 0 );
    
    }

}