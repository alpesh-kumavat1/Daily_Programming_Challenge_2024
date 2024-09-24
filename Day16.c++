#include <bits/stdc++.h>
using namespace std;
int LCM(int a, int b)
{
    int greater = max(a, b);
    int smallest = min(a, b);
    for (int i = greater; ; i += greater) {
        if (i % smallest  == 0)
            return i;
    }
}

int main()
{
    int a = 4, b = 6;
    cout << "LCM of " << a << " and " 
         << b << " is " << LCM(a, b);
    
    int c = 5, d = 10;
    cout << "LCM of " << c << " and " 
         << d << " is " << LCM(c, d);
    return 0;
}