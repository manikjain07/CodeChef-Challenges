#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int test_cases,number,sum;
    vector <int> results;
    cin >> test_cases;
    while (test_cases != 0)
    {
        cin >> number;
        sum = 0;
        sum += number % 10;
        while (number != 0)
        {
            if (number < 10)
            {
                sum += number;
            }
            number = number / 10;
        }
        results.push_back(sum);
        test_cases -- ;
    }
    for (auto j = results.begin() ; j != results.end() ; ++j)
    {
        cout << *j << "\n";
    }
    return 0;
}
