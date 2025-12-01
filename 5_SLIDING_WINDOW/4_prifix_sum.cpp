#include<iostream>
#include<vector>
using namespace std;
int main()
{

int arr[]={1,2,3,4,5,6};
int sum=0;
int n= 6;
vector<int>ans;
for(int i=0;i<n;i++)
{
    sum=sum+arr[i];
    ans.push_back(sum);
}
for(int i=0;i<ans.size();i++)
{
    cout<<ans[i]<<" ";
}




    return 0;
}