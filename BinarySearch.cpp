// #include<iostream>
// using namespace std;

// int Binary(int arr[], int n, int key)
// {
//     int start = 0;
//     int end = n-1;
//     int mid = start + (end - start)/2;

//     while(start<=end)
//     {
//         if(arr[mid] == key)
//         {
//             return mid;
//         }

//         if(key > arr[mid])
//         {
//             start = mid + 1;
//         }
//         else
//         {
//             end = mid - 1;

//         }
//         mid = start + (end - start)/2;
//     }
//     return -1;
// }


// int main()
// {
//     int arr[8] = {1,67,32,82,6,6,7,8};
//     int brr[7] = {11,22,33,44,55,66,77};

//     int index = Binary(arr, 8, 82);

//     cout<<" Index of this number is "<<index << endl;

//     return 0;
// }


#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int target)
{
    int start = 0;
    int end = size -1;
    int mid = start + (end - start)/ 2;
    while(start <= end)
    {
        int Element = arr[mid];

        if(target == Element)
        {
            return mid;
        }
        else if(target < Element)
        {
            end = mid-1;
        }
        else
        {
            start = mid + 1;
        }
        mid = start + (end - start)/2;
    }

    return -1;
}

int main()
{
    int arr[] = {2,3,4,5,6,7,8};
    int size = 7;
    int target = 4;

    int indexOfTarget = binarySearch(arr, size, target);

    if(indexOfTarget == -1)
    {
        cout<<"Element not found"<<endl;

    }
    else
    {
        cout<<"target found at"<<indexOfTarget<<"index"<<endl;
    }
    return 0;
}