#include <iostream>
#include <string>
using namespace std;

bool check(string s, string x)
{
    if (s.size() == 1)
    {
        for (int i = 0; i < x.size(); i++)
        {
            if (x[i] == s[0])
                return true;
        }
    }
    for (int i = 0; i < x.size(); i++)
    {
        string s1 = "";
        s1 += x[i];
        for (int j = i + 1; j < x.size(); j++)
        {
            s1 += x[j];
            if (s1 == s)
                return true;
        }
    }
    return false;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        string s, x;
        cin >> x >> s;

        int count = 0; // ✅ renamed from t to avoid confusion
        while (s.size() > x.size())
        {
            x += x;
            count++;
        }

        if (check(s, x))
        {
            cout << count << endl;
        }
        else
        {
            count++;
            x += x;
            if (check(s, x))
            {
                cout << count << endl;
            }
            else
            {
                cout << -1 << endl;
            }
        }
    }
    return 0;
}
