#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n;
        cin >> k;
        vector<int> vec;
        for (int i = 0; i < n; i++)
        {
            int c;
            cin >> c;
            vec.push_back(c);
        }
        bool found = false;
        for (int i = 0; i < n; i++)
        {
            if (vec[i] == k)
            {
                found = true;
            }
        }
        if (found)
        {
            cout << "yes" << endl;
            ;
        }
        else
        {
            cout << "no" << endl;
        }
    }
}