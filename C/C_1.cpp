#include <iostream>

using namespace std;

bool checkPrime(int n)
{
    for(int i=2;i*i<=n; i++)
    {
        if(n%i==0) return false;
    }
    return true;
}

int main()
{
    cout << "Nhap so: ";
    int n;
    cin >> n;
    if(checkPrime(n))
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
    return 0;
}
