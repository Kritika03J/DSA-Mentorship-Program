import java.util.Scanner;

public class Main {
    public static int[] printNos(int x) {
        int[] arr=new int[x];
        num(x,arr);
        return arr;
    }
    public static void num(int x,int[] arr){
        if (x==0){
            return;
        }
        else{
            arr[x-1]=x;
            num(x-1,arr);
        }
    }
    public static void main(String[] args) {
        Scanner scn=new Scanner(System.in);
        System.out.print("Enter number of terms: ");
        int x=scn.nextInt();
        int ans[]=new int[x];
        ans=printNos(x);
        for (int i=0;i<x;i++) {
            System.out.print(ans[i]+" ");
        }
    }
}
