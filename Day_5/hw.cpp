#include <iostream>
using namespace std;

// // 1. Print number from 280 to 250 with the help of for loop.
// int main(){
//     for (int i = 280; i>249; i-=1)
//     {
//         cout<<i<<endl;
//     }
// }

// //2. Print char from ‘A’ to ‘Z’ with the help of a for loop.

// int main(){
//     for (char i = 'A'; i<='Z'; i+=1)
//     {
//         cout<<i<<endl;
//     }
// }


// // //3. Print char from ‘Z’ to ‘A’ with the help of a for loop.

// int main(){
//     for (char i = 'A'; i<='Z'; i+=1)
//     {
//         cout<<i<<endl;
//     }
// }

// //4 There is an Arithmetic Progression, First number is 220 and Common Difference is 7.
// //  So print all the numbers from 220 to 730 which follow the AP.


// int main(){
//     for (int i = 220; i<= 730; i+=7)
//     {
//         cout<<i<<endl;
//     }
// }

// 5 Print Sum of square of first n natural number.

// int main(){
//     int n,sum;
//     cin>>n;
//     sum=0;
//     for (int i = 1; i<= n; i+=1)
//     {
//         sum+=i*i;
//     }
//     cout<<sum;
// }

// 6 Print Sum of cube of first n natural number
// int main(){
//     int n,sum;
//     cin>>n;
//     sum=0;
//     for (int i = 1; i<= n; i+=1)
//     {
//         sum+=i*i*i;
//     }
//     cout<<sum;
// }

// 7 Print n’th Fibonacci number.

int main(){
    int last, current, temp;
    last =0;
    current=1;
    
    int n;
    cout<<"Which fibonnaci no is needed:";
    cin>> n;
    if (n==1)
    {
        cout<<n <<"th Finocci no is:"<<last;
        return 0;
    }
    else if (n==2)
    {
        cout<<n <<"th Finocci no is:"<<current;
        return 0;
    }
    else for (int i=2; i<n; i+=1)
        {
            temp = last;
            last = current;
            current = temp+ last;
        }
        cout<<n <<"th Finocci no is:"<<current;
        return 0;
}