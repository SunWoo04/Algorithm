#include <bits/stdc++.h>
using namespace std;
int main()
{
    // 빠른 입출력
    ios_base::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);

    int tc;
    cin >> tc;
    for (int i = 0; i < tc; i++)
    {
        deque<string> dq;

        string rd;
        cin >> rd;
        int num;
        cin >> num;
        string str;
        cin >> str;

        string temp;
        if (num != 0)
        {
            for (int j = 0; j < str.size(); j++)
            {
                if (str[j] >= '0' && str[j] <= '9')
                {
                    temp += str[j];
                }
                else if (str[j] == ']' || str[j] == ',')
                {
                    dq.push_back(temp);
                    temp.clear();
                    continue;
                }
            }
        }

        bool left = true;
        bool error = false;
        for (int j = 0; j < rd.size(); j++)
        {
            if (rd[j] == 'R')
            {
                left = !left;
            }
            else
            {
                if (dq.empty())
                {
                    error = !error;
                    cout << "error" << '\n';
                    break;
                }
                if (left)
                    dq.pop_front();
                else
                    dq.pop_back();
            }
        }

        if (!error)
        {
            cout << '[';
            if (left)
            {
                while (!dq.empty())
                {
                    if (dq.size() != 1)
                        cout << dq.front() << ',';
                    else
                        cout << dq.front();
                    dq.pop_front();
                }
            }
            else
            {
                while (!dq.empty())
                {
                    if (dq.size() != 1)
                        cout << dq.back() << ',';
                    else
                        cout << dq.back();
                    dq.pop_back();
                }
            }
            cout << ']' << '\n';
        }
    }
}