#include <iostream>
using namespace std;

int main()
{
    int n;

    cout<<"Enter your marks : ";
    cin>>n;

    switch (n/10)
    {
    case 10 :  //100
    case 9  :  // 90-99
    case 8  :  // 80-89
        {
            cout<<"A Grade"<<endl;
            break;
        }
    case 7  :  // 70-79
    case 6  :  // 60-69
        {
            cout<<"B Grade"<<endl;
            break;
        }
    case 5  :  // 50-59
    case 4  :  // 40-49
        {
            cout<<"C Grade"<<endl;
            break;
        }
    case 3  :
    case 2  :
    case 1  :
    case 0  :
        {
            cout<<"Fail"<<endl;
            break;
        }
    
    
    default:
        cout<<"Not valid marks";
        break;
    }
}