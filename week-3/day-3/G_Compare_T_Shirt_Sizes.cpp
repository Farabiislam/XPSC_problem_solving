#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string a, b;
        cin >> a >> b;

        char A = a.back();
        int lenA = a.size();

        char B = b.back();
        int lenB = b.size();

        if (a == b)
        {
            cout << "=" << "\n";
        }
        else if (A == 'L' && B == 'L')
        {
            if (lenA > lenB)
                cout << ">" << "\n";
            else
                cout << "<" << "\n";
        }
        else if (A == 'S' && B == 'S')
        {
            if (lenA > lenB)
                cout << "<" << "\n";
            else
                cout << ">" << "\n";
        }
        else if (A == 'M')
        {
            if (B == 'L')
                cout << "<" << "\n";
            else if (B == 'S')
                cout << ">" << "\n";
        }
        else if (B == 'M')
        {
            if (A == 'L')
                cout << ">" << "\n";
            else
                cout << "<" << "\n";
        }
        else
        {
            if (A == 'S')
                cout << "<" << "\n";
            else
                cout << ">" << "\n";
        }
    }

    return 0;
}