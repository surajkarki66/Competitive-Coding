#include<bits/stdc++.h>
using namespace std;

int main()
{
    cin.tie(0);
    ios_base::sync_with_stdio(false);

    
    int n, k, i;
    cin >> n >> k;
    for (i = 0; i<k; i++) {
        if (n % 10 == 0) {
            n /= 10;
        }

        else {
            n--;
        }

    }

    cout << n;
    return 0;
    
}