#include <iostream>
#include <vector>
#include <climits>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, x;
        cin >> n;
        cin >> x;
        vector<long long> vec;
        vec.push_back(0);
        for (int i = 0; i < n; i++)
        {
            long long points;
            cin >> points;
            vec.push_back(points);
        }
        vec.push_back(x);
        n = n + 2;
        long long maxi = INT_MIN;
        for (int i = 1; i < n; i++)
        {
            if (i == n - 1)
            {
                maxi = max(maxi, 2 * (vec[i] - vec[i - 1]));
            }
            else
            {
                maxi = max(maxi, vec[i] - vec[i - 1]);
            }
        }
        cout << maxi << endl;
    }
    return 0;
}