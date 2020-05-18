#include "Header.h"

int main()
{
    int num;
    vector<int> v;
    vector<int> vunique;
    bool flag = true;
    cout << "Please enter sequence of an integers (to quit press q):\n";
    while (cin >> num)
        v.push_back(num);

    for (int x : v) std::cout << x << ' ';
    cout << endl;

    vunique.push_back(v[0]);
    cout << v[0] << " No " << endl;

    for (size_t i = 1; i < v.size(); i++) {
        for (size_t j = 0; j < vunique.size(); j++) {
            if (v[i] == vunique[j]) {
                flag = true;
                break;
            }
            else flag = false;
        }
        if (flag == true)
            cout << v[i] << " Yes " << endl;
        else {
            vunique.push_back(v[i]);
            cout << v[i] << " No " << endl;
        }
    }

    return 0;
}