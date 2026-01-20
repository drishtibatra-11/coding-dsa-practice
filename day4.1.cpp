#include<iostream>
using namespace std;
int main()
{
    int num, digit, sum=0,original_num=0;
    cout << "enter a three digit number ";
    cin >> num ;
    original_num=num;
    while(num>0)
    {
    digit=num%10;
sum= sum+(digit*digit*digit);
num=num/10;
    }
    if(sum=original_num) {
cout << "amstrong number" << endl;
    }
    else
    {
    cout << "not amstroong" << endl ;
    }
}