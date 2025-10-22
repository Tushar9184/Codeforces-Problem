#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    vector<long long> arr(n);
    for (long long i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (long long i = 0; i < n; i++)
    {
        arr[i] = abs(arr[i]);
    }
    long long x = *min_element(arr.begin(), arr.end());

    cout << abs(x) << endl;
}
