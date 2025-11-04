#include <iostream>
using namespace std;

void reversed(int arr[], int size)
{
    int start = 0;
    int end = size-1;

    for (int i=0 ; i < size ; i++)
    {
        if(start <= end)
        {
            // arr[start] = arr[end];
            // arr[end] = arr[start];
            swap(arr[start], arr[end]);
            start++;
            end--;
        }
    }
}

int main()
{
    int size;
    cout<<"Enter size of array :";
    cin>>size;

    int arr[100];

    for (int i = 0; i < size ; i++)
    {
        cin>>arr[i];
    }

    reversed(arr, size);

    for (int i = 0; i < size ; i++)
    {
        cout<<arr[i]<<" ";
    }
}