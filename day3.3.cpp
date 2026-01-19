#include<iostream>
using namespace std;
int main()
{
    int income;
    cout << "emter your income" << endl;
    cin >> income ;
    if ( income < 5l)
    {
        cout << " 0% tax " << endl;

    }
    else if ( income >(5l) && income <(10l))
    {
        cout << "20% tax" << endl ;

    }
    else {
    cout << "30% tax" << endl;
    }
}