#include<iostream>
using namespace std;
int main()
{
    int n;
    int f=1;
    int i;
    cout << "enter a number" << endl;
    cin >> n;
    for(i=n;i>1;i--)
    {
        f=f*i;

    }
    cout << "factorial" << f << endl;
    return 0;
}
