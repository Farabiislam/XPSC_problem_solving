#include<bits/stdc++.h>
using namespace std;
int main()
{
     ios::sync_with_stdio(false);
     cin.tie(nullptr);
    int n;
    cin >> n;
  
     deque<int>v(n);
     for (int i = 0; i < n; i++)
     {
        cin >> v[i];
     }
    int sereja = 0,dema = 0,turn = 1;
    while (!v.empty())
    {
        int left = v.front(),right = v.back(),mx;
        mx = max(left,right);
        if(turn % 2 != 0){
           sereja += mx;
        }else{
            dema += mx;
        }
        if(mx == left){
            v.pop_front();
        }else{
            v.pop_back();
        }
        turn++;
    }
    
    cout << sereja << " " << dema <<"\n";

    
    return 0;
}