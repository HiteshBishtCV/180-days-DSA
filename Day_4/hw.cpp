# include <iostream>
using namespace std;

// 1 Two numbers are given, print the bigger number, It is given that both numbers can’t be the same.
// int main(){
//     int a,b;
//     cin>>a;
//     cin>>b;
//     if (a>b)
//     {
//         cout<<a;
//     }
//     else
//     {
//         cout<<b;
//     }
// }

// // 2 Age of a person is given, print Adult if his/her age is greater than 18, otherwise print Teenager.
// int main(){
//     int age;
//     cin >> age;
//     if (age>18)
//     {
//         cout<<"Adult";
//     }
//     else
//     {
//         cout<<"Teenager";
//     }
// }
// // 3 Take a number in input (ex n) and print the corresponding month to it. Ex: for n=1, print january, n=2, print feburary like this you need to give output.
// // It is given that n will be greater than 0 and less than 13.
// int main()
// {
//     int no;
//     cin >> no;
//     if (no==1)
//     {
//         cout<<"January";
//     }
//     else if (no==2)
//     {
//         cout<<"Febuary";
//     }
//     else if (no==3)
//     {
//         cout<<"March";
//     }
//     else if (no==4)
//     {
//         cout<<"April";
//     }
//     else if (no==5)
//     {
//         cout<<"May";
//     }
//     else if (no==6)
//     {
//         cout<<"June";
//     }
//     else if (no==7)
//     {
//         cout<<"July";
//     }
//     else if (no==8)
//     {
//         cout<<"Aug";
//     }
//     else if (no==9)
//     {
//         cout<<"Sept";
//     }
//     else if (no==10)
//     {
//         cout<<"Oct";
//     }
//     else if (no==11)
//     {
//         cout<<"Nov";
//     }
//     else if (no==12)
//     {
//         cout<<"Dec";
//     }
// }

// // 4 Ticket Price Calculator: Create a program that asks the user for their age and checks 
// // if they qualify for a discounted ticket price (e.g., under 12 and over 65 get discounts), 
// // If they are eligible print “YES” else “NO”.
// int main(){
//     int age;
//     cin >> age;
//     if (age<12 || age>65)
//     {
//         cout<<"Discount : Eligible";
//     }
//     else
//     {
//         cout<<"Discount : Ineligible";
//     }
// }

// // // For Loop
// // 1.  Print “India will win the World Cup 2023”, 20 times.
// int main(){
//     for(int i=1; i<21; i+=1)
//     {
//         cout<<i<<" India will win the World Cup 2023 \n";
//     }
// }

// // 2  Print all Odd numbers from 1 to n, take n as an input from the user.
// int main(){
//     int n; 
//     cin>>n;
//     for(int i=1; i<n+1; i+=1)
//     {
//         if (i%2!=0)
//         {
//             cout<<i<<endl;
//         }
//     }
// }
// // 3  Print all numbers from 1 to n, which is divisible by 4. Take n as an input from the user.
int main(){
    int n; 
    cin>>n;
    for(int i=1; i<n+1; i+=1)
    {
        if (i%4==0)
        {
            cout<<i<<endl;
        }
    }
}