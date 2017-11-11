#include<iostream>

using namespace std;

int main()
{
    string s;
    int cnt = 1;
    while(cin >> s)
    {
        if(s == "#")
            break;

        if(s=="HELLO")
            cout << "Case " << cnt << ": ENGLISH" << endl;
        else if(s=="HOLA")
            cout << "Case " << cnt << ": SPANISH" << endl;
        else if(s=="HALLO")
            cout << "Case " << cnt << ": GERMAN" << endl;
        else if(s=="BONJOUR")
            cout << "Case " << cnt << ": FRENCH" << endl;
        else if(s=="CIAO")
            cout << "Case " << cnt << ": ITALIAN" << endl;
        else if(s=="ZDRAVSTVUJTE")
            cout << "Case " << cnt << ": RUSSIAN" << endl;
        else
            cout << "Case " << cnt << ": UNKNOWN" << endl;

        cnt++;
    }
    return 0;
}
