#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main()
{

    int t;
    cin >> t;
    while (t--)
    {

        long long k, n;
        cin >> n;

        cin >> k;
        vector<int> vec(n);
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            vec[i] = a;
        }
        vector<int> copy = vec;
        sort(vec.begin(), vec.end());
        if (vec == copy || k > 1)
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
        cout << endl;
    }
    return 0;
}