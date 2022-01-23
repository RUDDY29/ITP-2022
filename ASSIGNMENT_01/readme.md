# ITP-Assignment-1(2022)

**Team Members**
|   Enrollment No.  |   Name                 | GithubId        |
|   --------------  |   -------------------- | ----------------|
|    IEC2021071     |   Nitya Gupta          | nityagupta6     |
|    IEC2021072     |   Vaibhav Pandey       | RUDDY29         |
|    IEC2021073     |   Bhavika Longwani     | Bhavika05       |
|    IEC2021074     |   Shivani Pal          | hamfer17        |


**Group No-**"18"

**Faculty Name-**"Dr. Mohammad Javed"

**Mentor Name-** "Md. Meraz"

---
## Problem Statement
Program to count the number of duplicate elements in an array and delete those duplicate elements.

---
## How to use code
Here is a simpled way to download and run the code 
#Download project
```
git clone https://github.com/RUDDY29/ITP-2022.git 
```
Project Initialize 
```
cd assignment-folder-1
```


Run the code
```
CODE.c
```
```
./CODE.exe
```
---
**Test case**

Find max
```
Test Case-1
Input:
Enter the SIZE of the array
6
Enter 6 elements for the array
1
1
2
4
2
1

Output:
The number of duplicate elements are: 3
The total elements after deleting duplicate elements are: 1     2       4

#--------------------------#
Test Case-2
Enter the SIZE of the array
8
Enter 8 elements for the array
2
5
77
77
77
89
89
89

Output:
The number of duplicate elements are: 4
The total elements after deleting duplicate elements are: 2     5       77      89
```

---

### Theory


1. we take Input size of an array from the user and store into the size variable.
2. Now weUse for loop to read the elements of an array and store in arr[i] variable.
3. To get the duplicate elements from an array we need to use two for loops. Where the first loop start from 0 to size. And the structure of the loop is: for (i = 0; i < size; i++).
4. Another loop selects each element of the array and compare with the corresponding element to get the duplicate elements. And the structure of the inner loop is: for (j = i + 1; j < size; j++) and the code to find the subsequent same element is: if (arr[i] == arr[j]).
5. If any duplicate element is encountered, delete the duplicate element from an array and the size of array is decrement by 1 such that, size = size - 1.
6. After that, We print the unique elements of an array.


---

### Analysis

**Time Complexity**

Time complexity is the computationalcomplexity that describes the amount ofcomputer time it takes to run an algorithm.The time complexity of this algorithm is O(n^3).



---

### References
1. https://codeforwin.org
2. https://stackoverflow.com
