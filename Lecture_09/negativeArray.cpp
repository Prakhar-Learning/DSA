#include <iostream>
using namespace std;

void findNegative(int arr[], int size)
{
    bool bit = true;
    for(int i=0;i < size;i++)
    {
        if (arr[i] < 0)
        {
            cout<<arr[i]<<" ";
            bit = false;
        }
    }

    if(bit == true)
    {
        cout<<"No negative number in array";
    }
}

int main()
{
    int size;

    cout<<"Enter Size of array :";
    cin>>size;

    int arr[100];

    for(int i =0; i < size;i++)
    {
        cin>>arr[i];
    }

    findNegative(arr, size);
}