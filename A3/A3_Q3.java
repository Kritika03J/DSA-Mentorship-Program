import java.util.*;
public class Main {
    static int findFrequency(int arr[],int n,int x){
        int freq=0;
        for (int i=0;i<n;i++){
            if (arr[i]==x)
                freq++;
        }
        return freq;
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
        System.out.print("Enter term to find its frequency: ");
        int x=scn.nextInt();
        System.out.println(findFrequency(arr,n,x));
    }
}
