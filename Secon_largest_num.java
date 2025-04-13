public class Secon_largest_num {

    public static void main(String[] args) {
        int large = Integer.MIN_VALUE;
        int second_large = Integer.MIN_VALUE;
        int[] arr = {4,3,444,55,5,776,3,356,886};
        for(int i = 0;i<arr.length; i++){
            if(arr[i] > large){
                second_large = large;
                large = arr[i];
            }else if(arr[i]< large && arr[i] > second_large){
                second_large = arr[i];
            }
        }System.out.println("Large = "+large+"\nSecond large vale =  " +second_large );
    }
}