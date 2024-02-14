import java.util.*;
public class Main {
    static int[] getMinMax(int arr[],int n){
        int[] ans=new int[2];
        ans[0] = arr[0];
        ans[1]=arr[0];
        for (int i=1;i<n;i++){
            if (arr[i]>ans[0])
                ans[0]=arr[i];
            if (arr[i]<ans[1])
                ans[1]=arr[i];
        }
        return ans;
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
        int[] ans=getMinMax(arr,n);
        System.out.println(ans[1]+"  "+ans[0]);
    }
}
