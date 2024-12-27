#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int getsecond(vector<int>&arr)
{
    int n=arr.size();
    sort(arr.begin(),arr.end());
    for(int i=n-2;i>=0;i--)
    {
        if(arr[i]!=arr[n-1])
        {
            return arr[i];
        }
    }
    return -1;
}
int main()
{
    vector<int>arr;
    int n;
    cout<<"Enter the size of array";
    cin>>n;
    cout<<"Enter the element:";
    for(int i=0;i<n;i++)
    {
        int val;
        cin>>val;
        arr.push_back(val);

    }
    cout<<"Element is:";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
    cout<<"The second largest is:";
    cout<<getsecond(arr);
}