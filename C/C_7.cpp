#include <iostream>

using namespace std;

int main()
{
    int n;
    int tmp;
    do
    {
        cin >> n;
        if(n!= tmp)
        {
            cout << n << ' ';
        }
        tmp = n;
    }
    while(n>=0);
    return 0;

}
