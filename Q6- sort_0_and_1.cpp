//Sort the 0's and 1's in an array

#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n;
  cout << "Enter the size of array: ";
  cin >> n;
  vector<int> arr(n);
  cout << "Enter the elements of array:" << endl;
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  int start = 0;
  int end = arr.size() - 1;

  for (int i = 0; start != end;  i++) {
    if (arr[i] == 0) {
      swap(arr[start], arr[i]);
      start++;
     
    }
    else if (arr[i] == 1) {
      swap(arr[i], arr[end]);
      end--;
    }
  }

  for (int i = 0; i < arr.size(); i++) {
    cout << arr[i] << "\t";
  }

  return 0;
}
