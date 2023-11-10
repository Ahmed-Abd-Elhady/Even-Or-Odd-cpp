#include <iostream>
#include <limits.h>
using namespace std;

int main()
{
    cout << "==============================" << endl;
    cout << "==Is This Number Even Or Odd ?==" << endl;
    cout << "==============================" << endl;

    cout << "Enter The Number You Want To Know if its odd or even : \n";
    int user_input;
    cin >> user_input;
    cout << "The Number You Enter Is : " << user_input << endl;
    if (user_input % 2 == 0)
    {
        cout << "The : " << user_input << " Is Even \n";
    }
    else
    {
        cout << "The : " << user_input << " Is Odd \n";
    }
}
