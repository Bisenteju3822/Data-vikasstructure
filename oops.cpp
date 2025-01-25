#include <iostream>
using namespace std;
class teju
{
  int a;

public:
  int add(int a)
  {
    this->a = a;
    return a * a;
  }
};
int main()
{
  teju c;
  int result = c.add(5);
  cout << result << endl;

  return 0;
}
