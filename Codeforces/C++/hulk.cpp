#include<bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(false);


    int n;
    while (cin>>n)
    {
        for (int i=1;i<=n;i++)
        {
            if (i%2)
               cout<<"I hate ";
            else
               cout<<"I love ";
            if (i==n)
               cout<<"it"<<endl;
            else
               cout<<"that ";
        }
    }
    return 0;

}