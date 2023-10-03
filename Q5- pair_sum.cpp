// Find a pair in the array whose sum will be equal to a given sum value

#include <iostream>
#include <vector>
using namespace std;
int main() {
     int n1, n2, sum;

    cout << "Enter the size of first array: ";
    cin >> n1;

    cout << "Enter the size of second array: ";
    cin >> n2;

    cout << "Enter the sum ";
    cin >> sum;

    vector<int> arr1(n1);
    vector<int> arr2(n2);
    vector<int> unionArray;

    cout << "Enter the elements of first array:" << endl;
    for (int i = 0; i < n1; i++) {
        cin >> arr1[i];
    }
     cout << "Enter the elements of first array:" << endl;
    for (int i = 0; i < n2; i++) {
        cin >> arr2[i];
    }
    for (int i = 0; i < n1; i++) {
    for (int j = 0; j < n2; j++) {
      if (arr1[i]+ arr2[j]== sum) {
        unionArray.push_back(arr1[i]);
         unionArray.push_back(arr2[j]);
         
      }
    }
  }

   for (int i = 0; i < unionArray.size(); i+=2) {
    cout <<"("<< unionArray[i]<<","<<unionArray[i+1]<<")" << "\t";
  }
    return 0;
}
