
# Online IDE - Code Editor, Compiler, Interpreter


# bubble sort algo
bubble_sort <- function(array)
{
    # Get array length
    n <- length(array)
             # Go from start to end of array
        for (i in 1 : (n - 1)) {
              # GO from 1 to current window
            for (j in 1 : (n - i)) {
                  # comparison
                if (array[j] > array[j + 1]) {
                    temp <- array[j]
                      array[j] <- array[j + 1]
                      array[j + 1] <- temp
                }
            }
        }
      array
}

# make array
array <- c(34, 56, 4, 10, 77, 51, 93, 30, 5, 52)
# print unsorted array
print('Unsorted Array')
array

print('')

array <- bubble_sort(array)

print('Sorted Array')
array
