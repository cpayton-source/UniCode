<?php
  //
  // Bubble Sort
  //
  
  // create short variable names
  $array = $_POST['array'];
 ?>
<html>
<body>
<?php
	
	// print unsorted array
	echo "Unsorted array <br>";
	for ($i = 0; $i < count($array); $i++)
		echo $array[$i]." ";

	//bubble Sort
	for ($i = 0; $i < count($array)-1; $i++){
		for($j = $i+1; $j <count($array); $j++){
			if($array[$i] > $array[$j]){
				//swap elements
				$temp = $array[$i];
				$array[$i] = $array[$j];
				$array[$j] = $temp;
			}
		}
	}

	// print sorted array
	echo "<br><br>Sorted array <br>";
	for ($i = 0; $i < count($array); $i++)
		echo $array[$i]." ";
?>


</body>
</html>