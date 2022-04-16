// Creating the bblSort function
 function bubbleSort(arr){
console.log("Unsorted array");
console.log(arr);
//First loop
 for(var i = 0; i < arr.length; i++){
   //Nested loop
   for(var j = 0; j < ( arr.length - i -1 ); j++){

     // If greater, swap
     if(arr[j] > arr[j+1]){
       var temp = arr[j]
       arr[j] = arr[j + 1]
       arr[j+1] = temp
     }
   }
 }
 // Print the sorted array
 console.log("Sorted array");
 console.log(arr);
}


// This is our unsorted array
var arr = [34, 56, 4, 10, 77, 51, 93, 30, 5, 52];


// Now pass this array to the bblSort() function
bubbleSort(arr);
