#include <iostream>
using namespace std;

int binarySearch(int a[], int n, int k) {
    int s=0, e=n-1, mid, ans=-1;
    while(s<=e) {
        mid=(s+e)/2;
        if(a[mid]==k)   {
            return mid;
        }
        else if(k>a[mid]) {
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }

    return ans;
}

int main()  {
    int n, k;
    cin>>n>>k;

    int a[n];
    for(int i=0;i<n;i++)    {
        cin>>a[i];
    }
    int ans=binarySearch(a, n, k);

    if(ans<0) {
        cout<<"Not Present "<<n<<endl;
    }
    else    {
        cout<<"Present "<<ans<<endl;
    }
    return 0;
}