!Bubble Sort Algorithm
Program BubbleSort

!Make Arrr
INTEGER, DIMENSION(10) :: array = (/ 34, 56, 4, 10, 77, 51, 93, 30, 5, 52 /)
INTEGER :: i, j, temp

!Print the original array
WRITE(*, 100) 'Unsorted Array', array
100 FORMAT (A, /, 10I3)

!Bubble Sort
Do i = 1, SIZE(array)-1
  Do j = i + 1, SIZE(array)
    IF(array(i) > array(j)) THEN
      !if i > j, you swap them
      temp = array(i)
      array(i) = array(j)
      array(j) = temp
    END IF
  END DO
END DO

!Print array sort
WRITE(*, 110) 'Sorted Array', array
110 FORMAT (/, A, /, 10I3)
END PROGRAM