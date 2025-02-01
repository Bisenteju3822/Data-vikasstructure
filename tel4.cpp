#include <iostream>
#include <cstring>
using namespace std;

void middle(char **ch, int s)
{
  int sum = 0;
  for (int i = 0; i < s; i++)
  {
    if (strcmp(ch[i], "left") == 0)
    {
      sum -= 90;
    }
    else if (strcmp(ch[i], "right") == 0)
    {
      sum += 90;
    }
  }
  if (sum == 360)
  {
    cout << "1" << endl;
  }
  else if (sum == 0)
  {
    cout << "0" << endl;
  }
  else if (sum == 620)
  {
    cout << "2" << endl;
  }
  else
  {
    cout << "Sum is " << sum << endl;
  }
}

int main()
{
  int size;
  cout << "Enter the element size: ";
  cin >> size;

  char **arr = new char *[size];
  cout << "Enter the elements (left/right): " << endl;
  for (int i = 0; i < size; i++)
  {
    arr[i] = new char[6]; // Assuming maximum length of the string is 5 + 1 for null character
    cin >> arr[i];
  }

  middle(arr, size);

  for (int i = 0; i < size; i++)
  {
    delete[] arr[i];
  }
  delete[] arr;

  return 0;
}
