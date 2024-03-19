// Finding fast exponentiation using recursive method

#include<bits/stdc++.h>
using namespace std;

int answer(int base,int power)
{
    if(power==0)
    return 1;
    int ans = answer(base,power>>1);
    if(power&1)//power is odd
    return base*ans*ans;
    else
    return ans*ans;
}

int main()
{
    int base,power;
    cin>>base>>power;
    cout<<answer(base,power);
    return 0;
}