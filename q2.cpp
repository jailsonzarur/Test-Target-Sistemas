#include <bits/stdc++.h>

using namespace std;

const int MAX = 1e6+10;
long long fib[MAX];

bool pertence(int num)
{
    for( int i = 2 ;  ; i++ )
    {
        fib[i] = fib[i-1] + fib[i-2];
        if(fib[i] < num) continue;
        if(fib[i] == num) return true;
        if(fib[i] > num) return false;
    }
}

int main()
{
    long long num;
    fib[0] = 0, fib[1] = 1;
    cout << "Escolha um numero: ";
    cin >> num;
    if(pertence(num)) cout << "O numero " << num << " pertence a sequencia!" << endl;
    else cout << "O numero " << num << " nao pertence a sequencia!" << endl;
    return 0;
}