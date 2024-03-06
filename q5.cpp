#include <bits/stdc++.h>

using namespace std;

string inverte(string s)
{
    int tam = s.size();
    string novastring = "";
    for( int i = tam ; i >=0 ; i-- )
    {
        novastring += s[i];
    }
    return novastring;
}

int main()
{
    string s;
    cout << "Digite uma string: ";
    getline(cin, s);
    cout << inverte(s) << endl;
    return 0;
}