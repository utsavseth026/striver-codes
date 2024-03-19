// Given an input array, see whether it is sorted or not in ascending order, using recursion

#include<bits/stdc++.h>
using namespace std;

bool func(int arr[],int size)
{
    if(size==0 || size==1)
    return true;
    if(arr[0]>arr[1]) 
    return false;
    else
    {
        bool answer = func(arr+1,size-1);
        return answer;
    }
}

int main()
{
    int size;
    cout<<"Enter Array Size\n";
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++)
    {
        cout<<"Enter element "<<i+1<<endl;
        cin>>arr[i];
    }
    cout<<func(arr,size); 
    return 0;
}