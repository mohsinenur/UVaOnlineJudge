#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[100000];
    cin.getline(s, 100000);
    char w1[] = {'e','r','t','y','u','i','I','o','p','[',']',92,'d','f','g','h','j','k','l',';',39,'c','v','b','n','m',',','.','/','2','3','4','5','6','7','8','9','0','-','=','E','R','T','Y','U','I','O','P','D','F','G','H','J','K','L','C','V','B','N','M'};
    char w2[] = {'q','w','e','r','t','y','y','u','i','o','p','[','a','s','d','f','g','h','j','k','l','z','x','c','v','b','n','m',',','`','1','2','3','4','5','6','7','8','9','0','q','w','e','r','t','y','u','i','a','s','d','f','g','h','j','z','x','c','v','b'};
    for(int i=0; s[i]; i++){
        for(int j=0; w1[j]; j++){
            if(s[i] == w1[j]){
                cout << w2[j];
                break;
            }
        }
    }
    cout << endl;
    return 0;
}