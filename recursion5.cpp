/* Recursive Bubble Sort -> As you can recall, in bubble sort, first we start from 1st element, and compare with next index element, 
if its larger we swap, otherwise we move to next index. As a result of this, largest element is reached at end of array at 1st iteration,
then second largest element reached at size-2 position after 2nd iteration and so on */

#include<bits/stdc++.h>
using namespace std;

void recursive_bubble_sort(int arr[],int size)
{
    if(size==0 || size==1)
    return;
    int i = 0;
    while(i!=size-1)
    {
        if(arr[i]>arr[i+1])
        swap(arr[i],arr[i+1]);
        i++;
    }
    recursive_bubble_sort(arr,size-1);
}

int main()
{
    int arr[] = {2,1,5,3,7,8};
    int size = 6;
    recursive_bubble_sort(arr,size);
    for(int it:arr)
    cout<<it<<" ";
    return 0;
}