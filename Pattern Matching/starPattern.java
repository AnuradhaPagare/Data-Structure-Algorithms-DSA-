public class starPattern{
    public static void main(String args[]){
        // print star pattern
        int n = 4;
        for(int i = 1; i<=n; i++){
            for(int j = 1; j<=i; j++){
                System.out.print("* ");
            }
            System.out.println("");
        }
    }
}