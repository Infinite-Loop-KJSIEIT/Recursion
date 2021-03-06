import java.util.Scanner;

/**
 *
 * @author Amey
 */
public class GCD
{

    public static void main(String[] args)
    {
        char C = '0';
        int m, n;
        Scanner jin = new Scanner(System.in);
        while((C != 'E') && (C != 'e'))
        {
            System.out.println("Euclid's Recursive algorithm for calculation of GCD");
            System.out.print("Enter two natural numbers: ");
            
            try
            {
                m = jin.nextInt();
                n = jin.nextInt();
                if((m == 0) || (n == 0))
                    throw new ZeroException(m, n);
            }
            catch(ZeroException Z)
            {
                System.out.println(Z.M);
                System.out.println("Press 'E' to exit.\nPress any other key to continue: ");
                C = jin.next().charAt(0);
                continue;
            }
            
            System.out.println("gcd(" + m + ", " + n + ") = " + ((m > n)?gcd(m,n):gcd(n,m)));
            System.out.println("Press 'E' to exit.\nPress any other key to continue: ");
            C = jin.next().charAt(0);
            System.out.println("\n\n");
        }
    }
    
    private static int gcd(int m, int n)
    {
        if(m % n == 0)
            return(n);
        else
            return(gcd(n,m % n));
    }
}

class ZeroException extends Exception
{
    public String M;
    public ZeroException(int m, int n)
    {
        if((m == 0) && (n == 0))
            M = "Input cannot be zero.\nPlease try again.\n\n";
        else if(m == 0)
            M = "gcd(" + m + ", " + n + ") = " + n;
        else
            M = "gcd(" + m + ", " + n + ") = " + m;
    }
}
