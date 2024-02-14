import java.util.*;
public class Main {
    static int peakElement(int[] arr,int n)
    {
        if (n<=1)
            return 0;
        if (arr[0]>arr[1])
            return 0;
        if (arr[n-1]>arr[n-2])
            return n-1;
        for (int i=1;i<n-1;i++){
            if (arr[i]>=arr[i-1] && arr[i]>=arr[i+1])
                return i;
        }
        return 0;
    }
    public static void main(String[] args) {
        Scanner scn=new Scanner(System.in);
        System.out.print("Enter number of terms: ");
        int n=scn.nextInt();
        int[] arr=new int[n];
        System.out.print("Enter terms: ");
        for (int i=0;i<n;i++){
            arr[i]=scn.nextInt();
        }
        System.out.println("Peak Element index: "+peakElement(arr,n));
    }
}
