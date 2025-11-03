#include <iostream>
using namespace std;


int main()
{
    int n;
    int temp = 0;

    cout<<"Enter a number";
    cin>>n;

    while (n > 0)
    {
        int digit = n % 10;
        temp = temp*10 + digit;
        n = n/10;
    }

    cout<<temp;
}