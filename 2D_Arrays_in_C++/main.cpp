#include <iostream>

using namespace std;

int main() {
  // Create a 2D array with 3 rows and 4 columns
  int arr[3][4] = {
    {1, 2, 3, 4},
    {5, 6, 7, 8},
    {9, 10, 11, 12}
  };
  
  // Print the values of the array
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 4; j++) {
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }
  
  return 0;
}

