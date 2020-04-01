#include<bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(false);

    int a, b, i, year=0;
    cin >> a >> b;      

    while(!(a > b)) {
        a *= 3;
        b *= 2;
        year += 1;
    }
    printf("%d", year);
    return 0;
}