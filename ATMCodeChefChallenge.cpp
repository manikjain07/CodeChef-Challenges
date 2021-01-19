#include <iostream>

using namespace std;

int main()
{
    int withdrawal_amount;
    double balance,remaining_balance;
    cin >> withdrawal_amount;
    cin >> balance;
    if ((withdrawal_amount + 0.50) <= balance)
    {
        if(withdrawal_amount % 5 == 0)
        {
            cout << (balance - withdrawal_amount) - (0.50) << endl;
        }
        else
        {
            cout << balance << endl;
        }
    }
    else
    {
        cout << balance << endl;
    }
    return 0;
}
