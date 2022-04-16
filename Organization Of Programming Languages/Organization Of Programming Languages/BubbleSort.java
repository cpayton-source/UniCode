import java.util.Arrays;
public class BubbleSort{
   public static void main(String[] args){
      int[] arr = new int[]{34, 56, 4, 10, 77, 51, 93, 30, 5, 52};
      System.out.println("Unsorted Array: " + Arrays.toString(arr));

	  // Bubble Sort		
	  for(int i = 0; i < arr.length-1; i++)
     {
	      for (int j = i+1; j < arr.length; j++)
         {
            //If greater, swap ints
				if (arr[i] > arr[j])
				{
					int temp = arr[i];
					arr[i] = arr[j];
					arr[j] = temp;
				}
			}
		}
      System.out.println("\nSorted Array: " + Arrays.toString(arr));
   }
}