#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int val=1;
    for(int i=1; i<=n; i++)
    {
        int tmp = val;
        for(int j=1; j<=n; j++)
        {
           cout << tmp << ' ';
           tmp++;
           if(tmp>n) tmp=1;
        }
        val++;
        cout << endl;
    }
    return 0;

}
