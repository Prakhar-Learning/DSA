#include <iostream>
#include <climits>
using namespace std;

void maximum(int arr[], int size)
{
    int maxi = INT_MIN;

    for (int i = 0 ; i < size ; i++)
    {
        if (arr[i] > maxi)
        {
            maxi = arr[i];
        }
    }

    cout<<"The maximum element in your array is : "<<maxi<<endl;
}

void minimum(int arr[], int size)
{
    int min = INT_MAX;

    for (int i = 0 ; i < size ; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    cout<<"The minimum element in your array is : "<<min;
}

int main()
{
    int size;
    cout<<"Enter size of the array : ";
    cin>>size;

    int arr[100];

    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }

    maximum(arr, size);
    minimum(arr, size);
}

