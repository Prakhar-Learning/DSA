#include <iostream>
using namespace std;

void operation(int arr[], int size)
{
    cout<<endl<<"The array which divides multiply by 5 and divide by 10 is :"<<endl;

    int sum = 0;

    for (int i = 0; i < size ; i++)
    {
        sum = arr[i]*5;
        sum = sum / 10;
        cout<<sum<<" ";
        sum = 0;
    }
}

void reversed(int arr[], int size)
{
    int start = 0;
    int end = size-1;

    for (int i=0 ; i < size ; i++)
    {
        if(start <= end)
        {
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

    operation(arr, size);
}