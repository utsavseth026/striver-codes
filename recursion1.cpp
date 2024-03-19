/* Recursion Problems:

1. Print 1 to N using Recursion, and then backtracking
2. Print N to 1 using Recursion, and then backtracking
3. Sum of first N numbers
4. Factorial of N numbers
5. Reverse an array
6. Check if a string is palindrome or not
7. Fibonacci Number 
8. Climb Stairs, Link - https://www.codingninjas.com/studio/problems/count-ways-to-reach-nth-stairs_798650
9. Say Number -> eg. if input is 412, output must be four one two, do this recursively */

#include<bits/stdc++.h>
using namespace std;

void read_number(int num)
{
    string arr[]  = {"zero","one","two","three","four","five","six","seven","eight","nine","ten"};
    if(num==0)
    return;
    int digit = num%10;
    read_number(num/10);
    cout<<arr[digit]<<" ";
}

int main()
{
    string arr[]  = {"zero","one","two","three","four","five","six","seven","eight","nine","ten"};
    int num;
    cout<<"Enter the Number\n";
    cin>>num;
    read_number(num);
    return 0;
}