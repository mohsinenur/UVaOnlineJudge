#include<bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin >> T;
    for(int i=1; i<=T; i++)
    {
        char w[80];
        int score=0, nS=0, j;
        cin >> w;
        for(j=0; w[j]; j++)
        {
            if((w[j] == 'O'))
            {
                score = score +1 + nS;
                nS = nS+1;
            }
            else if(w[j] == 'X') nS = 0;
        }
        cout << score << endl;
    }
    return 0;
}
