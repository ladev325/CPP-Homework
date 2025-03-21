#include <iostream>
#include <cstring>

using namespace std;

/*void createTriangleArray(int rows) {
 char** array = new char*[rows];

 for (int i = 0; i < rows; i++) {
  int this_cols = rows / 2 - abs(rows / 2 - i) + 1;
  array[i] = new char[this_cols];
 }

 for (int i = 0; i < rows; i++) {
  int this_cols = rows / 2 - abs(rows / 2 - i) + 1;
  for (int j = 0; j < this_cols; j++) {
   array[i][j] = '*';
  }
 }


 for (int i = 0; i < rows; i++) {
   int this_cols = rows / 2 - abs(rows / 2 - i) + 1;
   for (int j = 0; j < this_cols; j++) {
    cout << array[i][j];
   }
   cout << endl;
 }

 for (int i = 0; i < rows; i++)
  delete[] array[i];
 delete[] array;
 if (rows % 2 == 0) cout << endl <<  rows << " is a bad number for a good triangle. Try " << rows + 1 << endl;
}*/

int main() {
	/*int cols = 10;
    int rows = 10;

    int** array = new int*[rows];

    for (int i = 0; i < rows; i++) {
     array[i] = new int[cols];
    }

    for (int i = 0; i < rows; i++) {
     for (int j = 0; j < cols; j++) {
      array[i][j] = 1;
     }
    }

    int s1 = 0;
    int s2 = 0;
    cout << "Enter s1, then s2: ";
    cin >> s1 >> s2;

    for (int j = 0; j < cols; j++) {
     array[s1][j] = 0;
     array[s2][j] = 0;
    }


    for (int i = 0; i < rows; i++) {
     for (int j = 0; j < cols; j++) {
      cout << array[i][j] << " ";
     }
      cout << endl;
    }

    for (int i = 0; i < cols; i++)
     delete[] array[i];
    delete[] array;*/

    /*int cols = 10;
    int rows = 10;

    int** array = new int*[rows];

    for (int i = 0; i < rows; i++) {
     array[i] = new int[cols];
    }

    for (int i = 0; i < rows; i++) {
     for (int j = 0; j < cols; j++) {
      array[i][j] = i;
     }
    }


    if (rows > 1) {
     for (int j = 0; j < cols; j++) {
      int first = array[0][j];

      for (int i = 1; i < rows; i++) {
       array[i - 1][j] = array[i][j];
      }
       array[rows - 1][j] = first;
     }
    }


    for (int i = 0; i < rows; i++) {
     for (int j = 0; j < cols; j++) {
      cout << array[i][j] << " ";
     }
      cout << endl;
    }

    for (int i = 0; i < rows; i++)
     delete[] array[i];
    delete[] array;*/

    //createTriangleArray(21);



	return 0;
}