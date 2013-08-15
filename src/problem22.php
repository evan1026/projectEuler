#!/usr/bin/php
<?php
    $contents = str_replace("\"", "", file_get_contents("names.txt")); //make sure to run from the main directory

    $names = explode(",", $contents);

    sort($names);

    $total = 0;

    foreach ($names as $place => $name){
        $letterTotal = 0;
        $location = $place + 1; //Because index 0 is the first

        //If only there was an Ubuntu package for php6. This could be so much nicer.
        $length = mb_strlen($name);
        for ($k = 0; $k < $length; $k++) {
            $letter = mb_substr($name, $k, 1);
            $letterTotal += ord($letter) - ord("A") + 1;
        }

        $total += $letterTotal * $location;
    }
    echo $total . "\n";
?>
