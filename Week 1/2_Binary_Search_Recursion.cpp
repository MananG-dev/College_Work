#include <iostream>
using namespace std;

int binarySearchRecursion(int a[], int s, int e, int k)    {
    if(s<=e)    {
        int mid=(s+e)/2;
        if(a[mid]==k)   {
            return mid;
        }
        else if(k<a[mid])    {
            binarySearchRecursion(a, s, mid-1, k);
        }
        else    {
            binarySearchRecursion(a, mid+1, e, k);
        }
    }
    else {
        return -1;
    }
}
int main()  {
    int n, k;
    cin>>n>>k;
    int a[n];

    for(int i=0;i<n;i++)    {
        cin>>a[i];
    }

    int ans=binarySearchRecursion(a,0, n-1,k);
    if(ans)   {
        cout<<"Present "<<ans+1<<endl;
    }
    else{
        cout<<"Not Present "<<n<<endl;
    }

    return 0;
}