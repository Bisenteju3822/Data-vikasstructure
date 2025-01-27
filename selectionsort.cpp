#include <iostream>
using namespace std;

void select(int arr[], int s)
{
  for (int i = 0; i < s; i++)
  {
    int small = i;
    for (int j = i + 1; j < s; j++)
    {
      if (arr[small] > arr[j])
      {
        small = j;
      }
    }
    if (small != i)
    {
      swap(arr[small], arr[i]);
    }
  }
  cout << "After completing the selection sort:" << endl;
  for (int i = 0; i < s; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
}

int main()
{
  int s;
  cout << "Enter the size of the array: ";
  cin >> s;
  int arr[s];
  cout << "Enter the array elements: ";
  for (int i = 0; i < s; i++)
  {
    cin >> arr[i];
  }

  select(arr, s);

  return 0;
}
