#include<iostream>
using namespace std;

int main()
{
    int T;
    while(cin >> T)
    {
        int A, B, C, D, E, cnt=0;
        cin >> A >> B >> C >> D >> E;
        if(A == T) cnt++;
        if(B == T) cnt++;
        if(C == T) cnt++;
        if(D == T) cnt++;
        if(E == T) cnt++;
        cout << cnt << endl;
    }
    return 0;
}
