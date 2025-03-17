#include <iostream>
#include <cstring>

using namespace std;

int main() {
	/*int a = 10;
	int b = 100;

	FILE* file;
	FILE* file1;
	FILE* file2;
	fopen_s(&file, "file.bin", "wb");
	fopen_s(&file1, "file1.bin", "wb");
	fopen_s(&file2, "file2.bin", "wb");

	if (file != nullptr) {
	 for (int i = 0; i < 15; i ++) {
	  int number = a + rand() % (b - a + 1);
	  fwrite(&number, sizeof(int), 1, file);
	 }
	  fclose(file);
	}

	if (file1 != nullptr) {
	 float number;
	 cout << "Enter float number:";
	 cin >> number;
	 for (int i = 0; i < 5; i ++) {
	  fwrite(&number, sizeof(float), 1, file1);
	 }
	  fclose(file1);
	}

	if (file2 != nullptr) {
	 char word[20];
	 cout << "Enter a word:";
	 cin >> word;
	 int size = strlen(word);
	 for (int i = 0; i < 5; i ++) {
	  fwrite(&size, sizeof(int), 1, file2);
	  fwrite(&word, sizeof(char), size, file2);
	 }
	  fclose(file2);
	}*/

	/*int d = 0;
	cout << "Enter d: ";
	cin >> d;

	FILE* file;
	fopen_s(&file, "file.bin", "rb");

	if (file != nullptr) {
	int n = 0;
	 while(fread(&n, sizeof(int), 1, file) == 1) {
	  cout << n << endl;
	 }
	 fclose(file);
	}

	else cout << "Error";*/

	/*FILE* file;
	fopen_s(&file, "file.bin", "rb");
	int* arr1 = nullptr;
	int* arr2 = nullptr;
	int count1 = 0;
	int count2 = 0;

	if (file != nullptr) {
	 int n = 0;
	 while(fread(&n, sizeof(int), 1, file) == 1) {
	  if(n > 0) {
	   count1++;
	   int* tmp = new int[count1];
	   for (int i = 0; i < count1 - 1; i++)
	    tmp[i] = arr1[i];
	   tmp[count1 - 1] = n;
	   delete[] arr1;
	   arr1 = tmp;
	  }

	  if(n % 2 == 0) {
	   count2++;
	   int* tmp = new int[count2];
	   for (int i = 0; i < count2 - 1; i++)
	    tmp[i] = arr2[i];
	   tmp[count2 - 1] = n;
	   delete[] arr2;
	   arr2 = tmp;
	  }
	 }

	  fclose(file);
	}
	else cout << "Error";

	for (int i = 0; i < count1; i++) cout << arr1[i] << " ";
	cout << endl;
	for (int i = 0; i < count2; i++) cout << arr2[i] << " ";
	delete[] arr1;
	delete[] arr2;*/


	FILE* file;
	fopen_s(&file, "9.bin", "rb");
	if (file != nullptr) {
	 int I = 0, J = 0;
	 cout << "Input i from 1: ";
	 cin >> I;
	 cout << "Input j from 1: ";
	 cin >> J;

	 int n = 0;
	 int cols = 0;
	 int col_counter = 0;
	 fread(&cols, sizeof(int), 1, file);

	 int pos = (I - 1) * cols * sizeof(int) + (J - 1) * sizeof(int);
	 pos += sizeof(int);

	 fseek(file, pos, SEEK_SET);
	 fread(&n, sizeof(int), 1, file);
	 cout << "N = ";
	 fclose(file);
	}
	else cout << "Error";

	return 0;
}