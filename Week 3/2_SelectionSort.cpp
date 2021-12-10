#include <iostream>
#include <algorithm>
using namespace std;

pair<int, int> selectionSort(int *arr, int n)   {
    int comparisions=0, shifts=0;
    for(int i=0;i<n-1;i++)    {
        int min_idx=i;
        for(int j=i+1;j<n;j++)  {
            if(arr[min_idx]>arr[j]) {
                min_idx=j;
            }
            comparisions++;
        }
        swap(arr[i], arr[min_idx]);
        shifts++;
    }
    return make_pair(comparisions, shifts);
}
int main()  {
    int t;
    cin>>t;

    while(t--)  {
        int n;
        cin>>n;

        int arr[n];
        for(int i=0;i<n;i++)    {
            cin>>arr[i];
        }

        pair<int,int> p = selectionSort(arr, n);
        for(int i=0;i<n;i++)    {
            cout<<arr[i]<<" ";
        }
        cout<<endl<<"comparisions = "<<p.first<<endl;
        cout<<"shifts = "<<p.second<<endl;
    }
    return 0;
}