import java.util.*;
public class Main {
    public static void main(String[] args) {
        Scanner scn=new Scanner(System.in);
        System.out.print("Enter number of terms: ");
        int n=scn.nextInt();
        int[] arr=new int[n];
        System.out.print("Enter terms: ");
        for (int i=0;i<n;i++){
            arr[i]=scn.nextInt();
        }
        int j = 0;
        for (int i = 0; i < n; i++) {
            if (arr[i] != 0) {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
                j++;
            }
        }
        for (int i = 0; i < n; i++) {
            System.out.print(arr[i] + " ");
        }
    }
}
