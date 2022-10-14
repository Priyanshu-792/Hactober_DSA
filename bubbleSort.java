public abstract class bubbleSort {
    public static void main(String[] args) {
        int[] arr = {4,1,2,4,8,9,6,5,4,5,27,585,545};
        bubble(arr);
        printArray(arr);
    }

    private static void printArray(int[] arr) {
        for (int j : arr) {
            System.out.print(j + " ");
        }
    }

    private static void bubble(int[] arr) {
        boolean swapped;
        for (int i = 0; i < arr.length; i++) {
            swapped=false;
            for (int j = 1; j < arr.length-i ; j++) {
                if (arr[j]<arr[j-1]){
                    int temp =arr[j];
                    arr[j]=arr[j-1];
                    arr[j-1]=temp;
                    swapped=true;
                }
            }
            if (!swapped){
                break;
            }
        }

    }
}
