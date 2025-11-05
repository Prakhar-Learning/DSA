#include <iostream>
using namespace std;

void sum(int arr[], int size)
{
    int sum = 0;

    for(int i = 0; i < size ; i++)
    {
        sum = sum + arr[i];
    }

    cout<<"The sum of all elements in array is : "<<sum;
}

int main()
{
    int size;
    cout<<"Enter size of array : ";
    cin>>size;

    int arr[1000];

    for (int i=0; i<size; i++)
    {
        cin>>arr[i];
    }

    sum(arr, size);

    return 0;
}