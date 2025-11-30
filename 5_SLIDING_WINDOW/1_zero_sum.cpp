#include<iostream>
#include<map>
#include <unordered_map>
using namespace std;
int main()
{
int arr[]={1,2,3,4,-1,-5,3,-3,4,-4,0};
int n=sizeof arr/sizeof(arr[0]);
int total=0;
int prefixsum=0;
unordered_map<int,int>mp;
mp[0]=1;
for(int i=0;i<n;i++)
{
    prefixsum=prefixsum +arr[i];
    if(mp.count(prefixsum))
    {
        total=total+mp[prefixsum];
        mp[prefixsum]++;
    }
    else
    {
        mp[prefixsum]=1;
    }
}
cout<<"the count of the total subarray 0 is "<<total <<" ";

    return 0;
}