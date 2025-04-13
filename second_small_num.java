public class second_small_num {
    public static void main(String[] args) {
        int min = Integer.MAX_VALUE;
        int second_min = Integer.MAX_VALUE;
        int[] arr = {22,54,34,2,24,56,1};
        for(int i = 0; i< arr.length; i++){
            if(arr[i] < min){
                second_min = min;
                min = arr[i];
            }else if(arr[i] > min && arr[i] < second_min){
                second_min = arr[i];
            }
        }System.out.println(min+"   "+second_min);
    }
}