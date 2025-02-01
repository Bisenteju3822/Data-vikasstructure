#include <iostream>
using namespace std;

void middle(int ch[], int s)
{
  for (int i = 1; i < s - 1; i++)
  {
    if (ch[i - 1] < ch[i] && ch[i] > ch[i + 1])
    {
      cout << ch[i] << endl;
    }
  }
}

int main()
{
  int size;
  cout << "Enter the element size: ";
  cin >> size;

  int arr[size];
  cout << "Enter the elements: " << endl;
  for (int i = 0; i < size; i++)
  {
    cin >> arr[i];
  }

  middle(arr, size);
  return 0;
}
