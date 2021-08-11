#include <iostream>
#include <algorithm>
using namespace std;

void solvefunction(int n)   {
    int arr[n];
    for(int i=0;i<n;i++)    {
        cin>>arr[i];
    }
    bool flag=0;
    for(int i=0;i<n-1;i++)  {
        for(int j=i+1;j<n;j++)  {
            int sum=arr[i]+arr[j];
            if(binary_search(arr, arr+n, sum))  {
                cout<<i+1<<","<<j+1<<","<<(upper_bound(arr,arr+n,sum))-arr<<endl;
                flag=1;
            }
        }
    }
    if(flag==0) {
        cout<<"No sequence found"<<endl;
    }
    return;
}
int main()  {
    int t;
    cin>>t;

    while(t--)  {
        int n;
        cin>>n;

        solvefunction(n);
    }
    return 0;
}