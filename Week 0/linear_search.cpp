#include <iostream>
using namespace std;

int linear_search_function(int arr[], int n)   {
    int maxElement=arr[0];
    for(int i=1;i<n;i++)    {
        if(arr[i]>maxElement)  {
            maxElement=arr[i];
        }
    }
    return maxElement;
}
int main()  {
    int t;
    cout<<"Enter the number of test cases: ";
    cin>>t;

    while(t--)  {
        int n;
        cout<<"Enter the size of an Array: ";
        cin>>n;

        int arr[n];
        cout<<"Enter the elements of an Array: "<<endl;
        for(int i=0;i<n;i++)    {
            cin>>arr[i];
        }

        cout<<"The largest element is : "<<linear_search_function(arr, n);
    }

    return 0;
}