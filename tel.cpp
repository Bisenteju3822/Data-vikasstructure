#include <iostream>
using namespace std;
int farmer(int &a, int &b, int &c)
{
  int total;
  total = 2 * a + 4 * b + 4 * c;
  cout << "this is the total legs::" << endl;
  cout << total << endl;
}

int main()
{
  int ch, co, pi;
  cout << "Enter chicken species legs:" << endl;
  cin >> ch;
  cout << "Enter cow species legs:" << endl;
  cin >> co;
  cout << "Enter pig species legs:" << endl;
  cin >> pi;

  farmer(ch, co, pi);

  return 0;
}
