#include <iostream>
using namespace std;
bool second(int a, int b, int c)
{
  if (a * b > c)
  {
    return true;
  }
  else
  {
    return false;
  }
}
int main()
{
  int one, two, three;
  cout << "enter the one" << endl;
  cin >> one;
  cout << "enter the one" << endl;
  cin >> two;
  cout << "enter the one" << endl;
  cin >> three;

  string fourth = second(one, two, three) ? "true" : "false";
  cout << fourth;
}
