import java.util.*;
public class ABC_pattern{
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        System.out.println("enter length");
        int n = sc.nextInt();
        char ch = 'A';
        for(int i = 1; i<=n; i++){
            
            for(int j = 1; j<=n ; j++){
                System.out.print(ch+" ");
                ch++;
            }
            System.out.println();
            
        }
        sc.close();

    }
}



/*
output : 

enter length
4
A B C D 
E F G H 
I J K L 
M N O P 


 */