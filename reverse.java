import java.util.*;
public class reverse{
    public static void main(String[] args)
    {
        int N,i,t;
        Scanner sc=new Scanner(System.in);
        N=sc.nextInt();
        int A[]=new int[N];
        for(i=0;i<N;i++)
        {
            A[i]=sc.nextInt();
        }
        t=N-1;
        for(i=0;i<N/2;i++)
        {
            int temp=A[i];
           A[i]= A[t];
           A[t]=temp;
           t--;
        }
        for(i=0;i<N;i++)
        {
            System.out.print(A[i]+" ");
        }
    }
}
