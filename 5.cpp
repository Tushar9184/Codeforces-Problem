#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        vector<long long> vec;
        for (int i = 0; i < n; i++)
        {
            long long a;
            cin >> a;
            vec.push_back(a);
        }
        if (vec[0] == 1)
        {
            cout << "Yes";
        }
        else
        {
            cout << "No";
        }
        cout << endl;
    }
}