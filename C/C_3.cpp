#include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;
        int i=N, j=N;
        while(i>=1){
        for(int k=1; k<=2*N-1; k++)
           {
            if(k>=i&&k<=j) cout << '*';
            else cout << ' ';
           }
        j++;
        i--;
        cout << endl;
        }
    }

