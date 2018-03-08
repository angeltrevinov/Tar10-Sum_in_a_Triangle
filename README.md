Description:

Let us consider a triangle of numbers in which a number appears in the first line, two numbers appear in the second line, etc.

Develop a program which will compute the largest of the sums of numbers that appear on the paths starting from the top towards the base, so that: On each path the next number is located on the row below, more precisely either directly below or below and one place to the right.

The number of rows is strictly positive, but less than 11 and all numbers are integers between 0 and 99.

Input

In the first line integer comes  n (the number of test cases, no more than 20). Then n test cases follow, where each test case starts with the number of lines which is followed by their content.

Output

For each test case write the result of each case in a separate line.

Sample Input:

2
3
1
2 1
1 2 3
4
1
1 2
4 1 2
2 3 1 1
Sample Output:

5
9
