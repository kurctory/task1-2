#include <set>
#include <iostream>

using namespace std;

void if_exist(int n, set<int>& S)
{
    int k;
    for (int i = 0; i < n; i++)
    {
        cin >> k;
        auto ret = S.emplace(k);
        cout << ((ret.second == true) ? "Yes " : "No ") ;
    }

}

