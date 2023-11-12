#include <iostream>
using namespace std;

int user_input;
int user_choose;

void showcase()
{
  cout << "-------/--------------/----\n";
  cout << "-IS ODD OR EVEN ? APPLACTION-\n";
  cout << "---------------/-----------\n";
  cout << "====1-:Test the number : \n";
  cout << "====2-Exit : \n";
  cin >> user_choose;
}

void fonction()
{
  showcase();
  if (user_choose >= 3)
  {
    cout << "BAD CHOOSE ! \n\n";
    fonction();
  }

  do
  {

    switch (user_choose)
    {
    case 1:
      int user_input;
      cout << "Enter Your Number : \n";
      cin >> user_input;
      if (user_input % 2 == 0)
      {
        cout << "This Number Is Even!!!\n";
      }
      else
      {
        cout << "This Number Is Odd!!\n";
      }
      fonction();
      break;
    }
  } while (user_choose < 1);
}

int main()
{
  fonction();
}
