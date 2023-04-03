#include <bits/stdc++.h>
using namespace std;
int main()
{

    vector<int> v = {1, 1, 3, 3, 2, 2};
    sort(v.begin(), v.end());

    set<int> st;

    for (int i = 0; i < v.size(); i++)
    {
        st.insert(v[i]);
    }

    for (auto it : st)
        cout << it << " ";

    return 0; 
}