#include <iostream>
using namespace std;

int main()
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   
    int n;
    cin >> n;
   
    long long totalSum = 0;
    int minOdd = 1000000001;

    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;

        totalSum += num;

        if (num % 2 != 0)
        {
            if (num < minOdd)
            {
                minOdd = num;
            }
        }
    }

    if (totalSum % 2 == 0)
    {
        cout << totalSum;
    }
    else
    {

        cout << totalSum - minOdd;
    }

    return 0;
}