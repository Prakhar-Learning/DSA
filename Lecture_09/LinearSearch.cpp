#include <iostream>
using namespace std;

void LinearSearch(int arr[], int size, int key)
{
    bool result = false;

    for (int i = 0; i < size; i++)
    {
        if( arr[i] == key)
        {
            result = true;
        }
    }

    if (result)
    {
        cout<<"Yes, Element exist"<<endl;
    }
    else
    {
        cout<<"No, Element does not exist"<<endl;
    }
}

int main()
{
    int size;
    cout<<"Enter size of array : ";
    cin>>size;

    int arr[1000];

    for (int i = 0; i < size ; i++)
    {
        cin>>arr[i];
    }

    cout<<endl<<"Enter an element to search :";
    int key;
    cin>>key;

    LinearSearch(arr, size, key);
}