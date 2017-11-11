#include<bits/stdc++.h>
using namespace std;
int main()
{
    char w[100000];
    while(cin.getline(w,100000)){
        for(int i=0; i<w[i]; i++){
            if(w[i] == '0') cout << "0";
            else if(w[i] == '1') cout << "1";
            else if(w[i] == '-') cout << "-";
            else if(w[i] == 'A' || w[i] == 'B' || w[i] == 'C') cout << "2";
            else if(w[i] == 'D' || w[i] == 'E' || w[i] == 'F') cout << "3";
            else if(w[i] == 'G' || w[i] == 'H' || w[i] == 'I') cout << "4";
            else if(w[i] == 'J' || w[i] == 'K' || w[i] == 'L') cout << "5";
            else if(w[i] == 'M' || w[i] == 'N' || w[i] == 'O') cout << "6";
            else if(w[i] == 'P' || w[i] == 'Q' || w[i] == 'R' || w[i] == 'S') cout << "7";
            else if(w[i] == 'T' || w[i] == 'U' || w[i] == 'V') cout << "8";
            else if(w[i] == 'W' || w[i] == 'X' || w[i] == 'Y' || w[i] == 'Z') cout << "9";
        }
        cout << endl;
    }
    return 0;
}
