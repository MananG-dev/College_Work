#include <iostream>
#include <algorithm>
using namespace std;

int first_occurence(int arr[],int n, int k) {
    int ans=-1, s=0, e=n-1, mid;
    while(s<=e)  {
        mid=(s+e)/2;
        if(arr[mid]==k) {
            ans = mid;
            e=mid-1;
        }
        else if(arr[mid]<k) {
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }
    cout<<ans<<endl;
    return ans;
}
int last_occurence(int arr[], int n, int k) {
    int ans=-1, s=0, e=n-1,mid;
    while(s<=e) {
        mid=(s+e)/2;
        if(arr[mid]==k) {
            ans = mid;
            s=mid+1;
        }
        else if(arr[mid]<k) {
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }
    cout<<ans<<endl;
    return ans;
}

int main()  {
    int t;
    cin>>t;

    while(t--)  { 
        int n, k;
        cin>>n;

        int arr[n];
        for(int i=0;i<n;i++)    {
            cin>>arr[i];
        }
        cin>>k;

        if(binary_search(arr, arr+n, k))    {
            int a = first_occurence(arr, n, k);
            int b = last_occurence(arr, n, k);
            cout<<k<<" - "<<b-a+1<<endl;
            return 0;
        }
        else{
            cout<<"Key not present"<<endl;
            return 0;
        }
    }
}