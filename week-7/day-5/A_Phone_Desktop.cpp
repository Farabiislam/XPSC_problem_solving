#include<bits/stdc++.h>
using namespace std;
int main()
{
     ios::sync_with_stdio(false);
     cin.tie(nullptr);
    
    int t;
    cin >> t;

    while (t--)
    {
        long long x,y;
        cin >> x >> y;
        long long screen = (y+1)/2, app = 0;
        if(y % 2 == 1){

            app = (y / 2 )*7 + 11;
        }
        else{
            app = (y / 2)*7;
        }
        if(x <=app){
            cout << screen << "\n";
        }
        else{
            long long remainApp = x - app;

            cout << screen + (remainApp + 14)/15 << "\n";
        }
    }
    
    return 0;
}