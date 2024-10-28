#include <bits/stdc++.h>
using namespace std;

int main()
{
    char s[100001];
     cin >> s;
     

    int present[26] = {0}; 

    for (int i = 0; s[i] != '\0'; i++)
    {
        present[s[i] - 'a'] = 1;
    }

    for (int i = 0; i < 26; i++)
    {
        if (present[i] == 0)
        {
           cout << char('a'+ i);
           return 0;
        }
  
    }
    
    cout << "None";

    return 0;
}
