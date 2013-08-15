#!/usr/bin/php
<?php

    $taken = array();

    for ($i = 0; $i < 10; $i += 1){ 
        $taken[$i] = false;
    }
    
    function doAppends($num){
        global $taken;
        $output = array();
        for ($i = 0; $i < 10; $i += 1){
            if (!$taken[$i]){
                $taken[$i] = true;
                $appends = doAppends($num * 10 + $i);
                if (is_array($appends)){
                    foreach ($appends as $number){
                        array_push($output, $number);
                    }
                }
                else{
                    array_push($output, $appends);
                }
                $taken[$i] = false;
            }
        }
        if (empty($output)){
            return $num;
        }
        return $output;
    }

    $perms = array();

    foreach (doAppends(0) as $number){
        array_push($perms, $number);
    }

    sort($perms);
    
    echo $perms[999999] . "\n"; //1 millionth member
?>
