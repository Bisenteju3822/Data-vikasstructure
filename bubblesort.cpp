#include <iostream>
using namespace std;

void bubblesort(int arr[], int s)
{
  int count = 0;
  bool flag;

  for (int i = 0; i < s; i++)
  {
    flag = true;

    for (int j = 0; j < s - i - 1; j++)
    {
      count++;

      if (arr[j] > arr[j + 1])
      {
        swap(arr[j], arr[j + 1]);
        flag = false;
      }
    }

    if (flag)
    {
      break;
    }
  }

  for (int i = 0; i < s; i++)
  {
    cout << "Element " << i + 1 << " after bubble sort: " << arr[i] << endl;
  }
  cout << "Total comparisons: " << count << endl;
}

int main()
{
  int s;
  cout << "Enter the number of elements: ";
  cin >> s;

  int arr[s];
  cout << "Enter the elements: ";
  for (int i = 0; i < s; i++)
  {
    cin >> arr[i];
  }

  bubblesort(arr, s);

  return 0;
}
