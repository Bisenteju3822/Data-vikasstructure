#include <iostream>
using namespace std;

int partition(int arr[], int low, int high)
{
  int pivot = arr[low]; // Choosing the pivot
  int i = low + 1;
  int j = high;

  do
  {
    while (arr[i] <= pivot)
    {
      i++;
    }
    while (arr[j] > pivot)
    {
      j--;
    }
    if (i < j)
    {
      swap(arr[i], arr[j]);
    }
  } while (i < j);

  swap(arr[low], arr[j]);
  return j;
}

void quickSort(int arr[], int low, int high)
{
  if (low < high)
  {
    int pi = partition(arr, low, high);
    quickSort(arr, low, pi - 1);
    quickSort(arr, pi + 1, high);
  }
}

int main()
{
  int s;
  cout << "Enter the size of array: ";
  cin >> s;
  int arr[s];
  cout << "Enter the elements of the array: ";
  for (int i = 0; i < s; i++)
  {
    cin >> arr[i];
  }

  quickSort(arr, 0, s - 1);

  cout << "Sorted array: ";
  for (int i = 0; i < s; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;

  return 0;
}