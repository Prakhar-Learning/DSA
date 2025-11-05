#include <iostream>
using namespace std;

void condition(int arr[], int size)
{
    int num[100];
    int count = 0;
    bool result = false;

    for (int i=0 ; i < size ; i++)
    {
        if (arr[i] % 5 == 2)
        {
            num[count++] = arr[i];
            result = true;
        }
    }

    if(result == true) 
    {
        cout<<"The elements which gives 2 on divide by 5 :";
    }
    
    for (int i = 0; i < count ; i++)
    {
        cout<<num[i]<<" ";
    }

    if (result == false)
    {
        cout<<"No element follows condition";
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

    condition(arr, size);

    return 0;
}