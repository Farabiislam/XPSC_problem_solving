#include<bits/stdc++.h>
using namespace std;
int main()
{
     ios::sync_with_stdio(false);
     cin.tie(nullptr);
    
    int n;
    cin >> n;

     stack<string>s;
     for (int i = 0; i < n; i++)
     {
         string programs;
         cin >> programs;

         s.push(programs);
     }

     set<string> ans;

     while (!s.empty())
     {
        if(ans.find(s.top()) == ans.end() ){
            ans.insert(s.top());
            string program = s.top();

            if(program.size() > 2){
                cout << program.substr(program.size()-2);
            }
        }

        s.pop();
     }
      
    return 0;
}