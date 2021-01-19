#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int test_cases,a,b;
    cin >> test_cases;
    vector <int> results;
    while(test_cases != 0)
    {
        cin >> a;
        cin >> b;
        results.push_back(a+b);
        test_cases--;
    }
    for (auto j = results.begin(); j != results.end(); ++j)
    {
        cout << *j << "\n";
    }
    return 0;
}
