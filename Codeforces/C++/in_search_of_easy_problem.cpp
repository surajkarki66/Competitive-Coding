#include<bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(false);

    
    int k, n[100], i;
    int zero = 0;
    cin >> k;
    for (i = 0; i<k; i++) {
        scanf("%d", &n[i]);
    }
    if (k==1) {
        if (n[0] == 0) {
            printf("EASY");
        }
        if (n[0] == 1) {
            printf("HARD");
        }
    }

    else if(k > 1) {
        for (i = 0; i<k; i++) {
           if (n[i] == 1) {
               printf("HARD");
               break;
           }


          if (n[i] == 0) {
               zero += 1;

               if ( zero == k) {
                   printf("EASY");
                   break;
               }

          }
           
         }

   
    }

    


    return 0;

}