# Day_2_Practice

This repository contains solutions to 
Each problem includes the **problem statement**, **logic explanation**, and **time complexity analysis**.

---

## Contents

1. [Question 01 - Array Rotation]
2. [Question 02 - String Length Without strlen]
3. [Question 03 - Count Occurrences in Array]
4. [Question 04 - Second Largest Element]
5. [Question 05 - Reverse a String]
6. [Question 06 - Remove Duplicates from Sorted Array]
7. [Question 07 - Check Anagram Strings]

---

## Question 01 - Array Rotation

### Problem Statement  
Rotate a given array to the left by `k` positions.

### Logic  
- Rotate the array left by one position using a helper function `shift_left`.
- Repeat the process `k` times.
- Finally, print the rotated array.

### Time Complexity  
`O(n × k)` where `n` is the array size and `k` is the number of rotations.

---

## Question 02 - String Length Without strlen

### Problem Statement  
Find the length of a string without using the built-in `strlen()` function.

### Logic  
- Use a loop to traverse each character until the null terminator `\0` is encountered.
- Increment a counter for each character.

###  Time Complexity  
`O(n)` where `n` is the length of the string.

---

## Question 03 - Count Occurrences in Array

### Problem Statement  
Count the total number of occurrences of a given element in an array.

### Logic  
- Traverse the array and increment a counter whenever the target value is found.

### Time Complexity  
`O(n)` where `n` is the array size.

---

## Question 04 - Second Largest Element

###  Problem Statement  
Find the second largest element in an array.

###  Logic  
- First, find the maximum element.
- Replace all occurrences of the maximum with a very small value (e.g., `-999`).
- Then, find the maximum again, which gives the second largest element.

###  Time Complexity  
`O(n)` (two passes over the array).

---

## Question 05 - Reverse a String

### Problem Statement  
Reverse a given string in place.

### Logic  
- Swap characters symmetrically from start and end until the middle is reached.

### Time Complexity  
`O(n)` where `n` is the string length.

---

##  Question 06 - Remove Duplicates from Sorted Array

###  Problem Statement  
Remove duplicate elements from a sorted array.

###  Logic  
- Traverse the array and compare each element with the next.
- If duplicates are found, shift the rest of the array left and reduce the effective size.

### Time Complexity  
`O(n²)` in the worst case due to shifting elements repeatedly.

---

##  Question 07 - Check Anagram Strings

###  Problem Statement  
Check whether two strings are anagrams (case-insensitive).

###  Logic  
- Convert both strings to lowercase.
- Sort both strings.
- Compare sorted strings character by character.

###  Time Complexity  
`O(n²)` due to bubble sort being used.

---


