#include<bits/stdc++.h>
using namespace std;
int main()
{
     ios::sync_with_stdio(false);
     cin.tie(nullptr);
    
    int x,y,z;
     cin >> x >> y >> z;
    int teamScor = x + 0.5*y;
    int oponentScor = 0.5*y + z;

    int remainGame = 4 - (x+y+z);

      teamScor += remainGame;

      if(teamScor > oponentScor){
        cout << "Yes" << "\n";
      }
      else{
        cout << "No" << "\n";
      }
     
    return 0;
}