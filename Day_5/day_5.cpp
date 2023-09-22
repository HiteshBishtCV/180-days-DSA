#include <iostream>
using namespace std;

int main()
{
    // 1 
    // for (char i='a'; i<'z'; i+=1)
    // {
    //     cout<< i<<endl;

    // }

    // 2 prime no or not
    // int n;
    // cin>>n;
    // if (n<2)
    // {
    //     cout<<"Not prime";
    //     return 0;
    // }
    // else 
    // {
    //     for (int i=2; i<n;i+=1)
    //     {
    //         if (n%i == 0)
    //         {
    //             cout<<"Not prime";
    //             return 0;
    //         }
    //     }
    //     cout<<"Prime";
    //     return 0;
    // }   

    // 3 fibonacci numbers
    int last, current, temp;
    last =0;
    current=1;
    
    int n;
    cout<<"Enter no of first fibonacci no needed:";
    cin>> n;
    cout<< last <<endl;
    cout << current << endl;
    for (int i=1; i<n-1; i+=1)
    {
        temp = last;
        last = current;
        current = temp+ last;
        cout<<current<<endl;
    }
}