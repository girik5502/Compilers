public class BinarySearch {

    public static int binarySearchRecursive(int[] arr, int target, int low, int high) {
        if (low > high) {
            return -1; // Not found
        }
        
        int mid = (low + high) / 2;
        
        if (arr[mid] == target) {
            return mid;
        } else if (arr[mid] < target) {
            return binarySearchRecursive(arr, target, mid + 1, high);
        } else {
            return binarySearchRecursive(arr, target, low, mid - 1);
        }
    }
    
    public static void main(String[] args) {
        int[] arr = {2, 5, 7, 9, 11, 15, 18, 21};
        int target = 11;
        int low = 0;
        int high = arr.length - 1;
        
        int index = binarySearchRecursive(arr, target, low, high);
        
        if (index != -1) {
            System.out.println("Target found at index: " + index);
        } else {
            System.out.println("Target not found in array.");
        }
    }
}