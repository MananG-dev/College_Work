#include <iostream>
using namespace std;

pair<int,int> insertionSort(int *arr, int n) {
    //Insertion Sort Function
    int comparisions=0,shifts=0;
    for(int i=1;i<n;i++)    {       
        int temp = arr[i];
        int j = i-1;
        while(j>=0 && arr[j]>temp)  {
            arr[j+1]=arr[j];
            j--;
            comparisions++;
        }
        arr[j+1]=temp;
        shifts++;
    }
    int sum= comparisions+shifts;
    return make_pair(comparisions,sum);
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

        pair<int, int> p = insertionSort(arr,n);
        for(int i=0;i<n;i++)    {
            cout<<arr[i]<<" ";
        }
        cout<<endl<<"comparisions = "<<p.first<<endl;
        cout<<"shifts = "<<p.second<<endl;
    }
    return 0;
}