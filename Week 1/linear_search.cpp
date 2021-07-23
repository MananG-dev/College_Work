#include <iostream>
using namespace std;

pair<bool, int> linear_search_function(int arr[], int n, int key)   {
    for(int i=0;i<n;i++)    {
        if(arr[i]==key)  {
            return make_pair(true, i+1);
        }
    }
    return make_pair(false, n);
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
        int key;
        cin>>key;

        if(linear_search_function(arr, n, key).first)   {
            cout<<"Present "<<linear_search_function(arr, n, key).second<<endl;
        }
        else    {
            cout<<"Not Present "<<n<<endl;
        }
    }

    return 0;
}