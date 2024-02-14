import java.util.*;
public class Main {
    static int linearSearch(int n,int num,int[] arr){
        for (int i=0;i<n;i++){
            if (arr[i]==num)
                return i;
        }
        return -1;
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
        System.out.print("Enter term to find: ");
        int x=scn.nextInt();
        System.out.println(linearSearch(n,x,arr));
    }
}
