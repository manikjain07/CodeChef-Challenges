#include <iostream>
#include <vector>

using namespace std;

int findFactorial(int number)
{
    if (number == 0 || number == 1)
    {
        return 1;
    }
    else
    {
        return number*findFactorial(number-1);
    }
}

int main()
{
    int test_cases,number;
    vector <int> results;
    cin >> test_cases;
    while (test_cases != 0)
    {
        cin >> number;
        results.push_back(findFactorial(number));
        test_cases --;
    }
    for (auto j = results.begin() ; j != results.end() ; ++j)
    {
        cout << *j << "\n";
    }
    return 0;
}


