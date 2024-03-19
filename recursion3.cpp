// Find array elements sum using recursion, find array elements sum, do linear search, do binary search, all using recursion

#include<bits/stdc++.h>
using namespace std;


int findsum(int arr[],int size)
{
    if(size==1)
    return arr[0];
    return arr[0]+findsum(arr+1,size-1);
} 

bool LinearSearch(int arr[],int size,int el)
{
    if(size==0)
    return false;
    if(arr[0]==el)
    return true;
    else
    {
        bool answer = LinearSearch(arr+1,size-1,el);
        return answer;
    }
}

void sorting(int arr[],int size)
{
    if(size==0 || size==1)
    return;
    int minimal_index = min_element(arr,arr+size) - arr;
    swap(arr[0],arr[minimal_index]);
    sorting(arr+1,size-1);
}

bool BinarySearch(int arr[],int el,int start,int end)
{
    int mid = start+(end-start)/2;
    if(start>end)
    return false;
    else if(arr[mid]==el)
    return true;
    else if(arr[mid]<el)
    return BinarySearch(arr,el,mid+1,end);
    else
    return BinarySearch(arr,el,start,mid-1);
}

int main()
{
    int arr[] = {2,4,1,5,6};
    cout<<findsum(arr,5)<<endl;
    cout<<LinearSearch(arr,5,6)<<endl;
    sorting(arr,5);
    for(int it:arr)
    cout<<it<<" ";
    cout<<endl;
    int el;
    cout<<"\n Enter element you want to find\n";
    cin>>el;
    cout<<BinarySearch(arr,el,0,4);
}