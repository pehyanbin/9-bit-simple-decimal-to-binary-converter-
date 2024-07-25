#include <iostream>
#include <cmath>
using namespace std;

void Subtraction(int integer, int x, int &n_2) {
  integer -= pow(2, x);
  n_2 += 1;
}

void ToBinary(int number) {
  int n = number;
  int n2_8, n2_7, n2_6, n2_5, n2_4, n2_3, n2_2, n2_1, n2_0; 
  n2_8 = n2_7 = n2_6 = n2_5 = n2_4 = n2_3 = n2_2 = n2_1 = n2_0 = 0;

  if (n>= 256) {
    Subtraction(n, 8, n2_8);
  }
  if (n>= 128) {
    Subtraction(n, 7, n2_7);
  }
  if (n>= 64) {
    Subtraction(n, 6, n2_6);
  }
  if (n>= 32) {
    Subtraction(n, 5, n2_5);
  }
  if (n>= 16) {
    Subtraction(n, 4, n2_4);
  }
  if (n>= 8) {
    Subtraction(n, 3, n2_3);
  }
  if (n>= 4) {
    Subtraction(n, 2, n2_2);
  }
  if (n>= 2) {
    Subtraction(n, 1, n2_1);
  }
  if (n>= 1) {
    Subtraction(n, 0, n2_0);
  }
  

  

  cout << n2_8 << n2_7 << n2_6 << n2_5 << n2_4 << n2_3 << n2_2 << n2_1 << n2_0 << endl; 
}

int main() {
  int number;
  int continueCounter;

  while(true) {
    cout << "Type 1 to start new operation and 0 to end operation. " << "\n";
    cin >> continueCounter;

    if (continueCounter == 0) {
      break; 
    }
    else {
      cout << "Enter a number within the range of 0 to 511.\n" << "DEC:   ";
      cin >> number;
      
      if (number > 511) {
          cout << "Number must be within the range of 0 to 511. " << "\n"; 
          continue;
      }

      cout << "\n";

      cout << "BIN:   ";
      ToBinary(number);

      cout << "\n\n-------------------------------------------------\n"; 

    }

  }

  cout << "============================================"<< "\n";
  cout << "End of operation. " << "\n";

  return 0;
}