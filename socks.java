import java.util.*;
public class sock
{
    public static void main(String args[])
    {
        int n,i,j;
        Scanner sc=new Scanner(System.in);
        n=sc.nextInt();
        int ar[]=new int[n];
        for(i=0;i<n;i++)
        {
            ar[i]=sc.nextInt();
        }
   
        for(i=1;i<n;i++){
            int temp=ar[i];
            for(j=i;j>0&&ar[j-1]>temp;j--){
                ar[j]=ar[j-1];
            }
             ar[j]=temp;
        }
        int cnt=0;
        for(i=0;i<n-1;i++)
        {
            if(ar[i]==ar[i+1])
            {
                cnt++;
                i++;
            }
        }
        System.out.println(cnt);
    }
}
