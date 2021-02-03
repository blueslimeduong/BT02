
#include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;
        int i=1, j=2*N-1;
        while(i<=j){
        for(int k=1; k<=2*N-1; k++)
           {
            if(k>=i&&k<=j) cout << '*';
            else cout << ' ';
           }
        i++;
        j--;
        cout << endl;
        }
    }
