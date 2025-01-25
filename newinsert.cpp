#include <iostream>
using namespace std;

void Insert(int arr[], int s)
{
  for (int i = 1; i < s; i++)
  {
    int j = i;
    while (j > 0 && arr[j] < arr[j - 1])
    {
      swap(arr[j], arr[j - 1]);
      j--;
    }
  }

  cout << "After the array rearrangement:" << endl;
  for (int i = 0; i < s; i++)
  {
    cout << arr[i] << endl;
  }
}

int main()
{
  int s;
  cout << "Size of the array: ";
  cin >> s;

  int arr[s];

  cout << "Enter the elements of the array: ";
  for (int i = 0; i < s; i++)
  {
    cin >> arr[i];
  }

  Insert(arr, s);

  return 0;
}
