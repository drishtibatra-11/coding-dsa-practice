#include<iostream>
using namespace std;
int main()
{
    int a,b ;
    char op ;
    cout << "enter a and b" << endl;
    cin >> a ;
    cin >> b;
    cout << "enter the operation" << endl ;
    cin >> op ;
    if ( op == '+')
    {
        cout << "a+b" << (a+b) << endl;
        }
    if ( op == '-')
    {
        cout << "a-b" << (a-b) << endl;

    }   
    if ( op== '*')
    {
        cout << "a*b" << (a*b) << endl;

    } 
    if ( op == '/')
    {
        cout << "a/b" << a/b << endl ;
    }
return 0;
}