#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> arr;
    int ans = (sizeof(arr)/sizeof(int));
    cout<<ans<<endl;
    cout<<arr.size()<<endl;
    cout<<arr.capacity()<<endl;

    // insert
    arr.push_back(5);
    arr.push_back(6);

    // print
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    arr.pop_back();
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

////////////////////////////
    cout<<"new vector"<<endl;
    int n;
    cout<<"enter the value of n :"<<endl;
    cin>>n;

    vector<int>brr(n);
    cout<<"size of brr :"<<brr.size()<<endl;
    cout<<"capacity of brr :"<<brr.capacity()<<endl;

    for(int i=0;i<brr.size();i++)
    {
        cout<<brr[i]<<" ";
    }
    cout<<endl;

    ///////////////////////////
    vector<int> crr{1,2,3,4,5};
    for(int i=0;i<crr.size();i++)
    {
        cout<<crr[i]<<" ";
    }
    cout<<endl;
    cout<<"vector crr is empty :"<<crr.empty()<<endl;
    vector<int>drr;
    cout<<"vector crr is empty :"<<drr.empty()<<endl;



    return 0;
}