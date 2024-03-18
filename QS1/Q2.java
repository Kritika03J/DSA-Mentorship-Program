import java.util.List;
import java.util.ArrayList;
import java.util.Scanner;

public class Main {
    static List<String> al=new ArrayList<>();
    public static List<String> printNtimes(int n){
        if(n==0){
            return al;
        }
        else{
            al.add("Coding Ninjas");
        }
        printNtimes(n-1);
        return al;
    }
    public static void main(String[] args) {
        Scanner scn=new Scanner(System.in);
        System.out.print("Enter number of terms: ");
        int n=scn.nextInt();
        //for (int i=0;i<x;i++) {
            System.out.print(printNtimes(n));
    }
}
