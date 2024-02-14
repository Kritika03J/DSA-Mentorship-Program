import java.util.*;
public class Main {
    static boolean check(int[] nums){
        int count = 0;
        for(int i = 0; i< nums.length ; i++){
            if(nums[i] > nums[(i+1) % nums.length]){
                count++;
            }
        }
        if(count > 1) return false;
        return true;
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
        boolean x=check(arr);
        System.out.print(x);
    }
}
