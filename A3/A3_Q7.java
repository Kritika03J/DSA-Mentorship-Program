import java.util.*;
public class Main {
    static int missingNumber(int[] nums){
        int n=nums.length;
        for (int i=0;i<=n;i++) {
            int in=0;
            for (int j = 0; j < n; j++) {
                if (i==nums[j]) {
                    in++;
                    break;
                }
            }
            if (in==0)
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
        System.out.println(missingNumber(arr));
    }
}
