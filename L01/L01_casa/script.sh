#!/bin/sh

gcc 12convertTime.c -o 12convertTime
echo "12:04\n12:04 PM" | ./12convertTime
echo "00:04\n12:04 AM" | ./12convertTime
echo "13:04\n01:04 PM" | ./12convertTime
echo "09:04\n09:04 AM" | ./12convertTime
