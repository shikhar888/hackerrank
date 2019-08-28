import java.util.*;
public class bird{
    public static void main(String[] args)
    {
        int n,i,j,temp=0,t=0,q=0;
        Scanner sc=new Scanner(System.in);
        n=sc.nextInt();
        int arr[]=new int[n];
        for(i=0;i<n;i++)
        {
            arr[i]=sc.nextInt();
        }
    
        for(i=1;i<n;i++){
            temp=arr[i];
            for(j=i;j>0&&arr[j-1]>temp;j--){
                arr[j]=arr[j-1];
            }
             arr[j]=temp;
        }
         for(i=1;i<n;i++){
             temp=arr[i];
        }
        int max,c=1;
        q=arr[0];
        for(i=0;i<n-1;i++)
        {
            max=1;
            while(arr[i]==arr[i+1])
            {
                max++;
                i++;
            }
            if(max>c)
            {
                q=arr[i];
                c=max;   
            }
            
        }
        System.out.println(q);
    }
}
