import java.util.*;
public class Main {
    static int largestElement(int arr[],int n){
        int max = arr[0];
        for (int i=1;i<n;i++){
            if (arr[i]>max)
                max=arr[i];
        }
        return max;
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
        System.out.println(largestElement(arr,n));
    }
}
