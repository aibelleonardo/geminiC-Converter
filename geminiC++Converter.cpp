#include <iostream>
#include <string>

using namespace std;

int binaryToDecimal(string binaryString) {
  int decimal = 0;
  int base = 1;
  int digit;

  // Iterate through the binary string in reverse order (right to left)
  for (int i = binaryString.length() - 1; i >= 0; i--) {
    // Extract the current digit (convert char to int)
    digit = binaryString[i] - '0';

    // Check for invalid digits (not 0 or 1)
    if (digit < 0 || digit > 1) {
      cout << "Invalid binary string. Please enter only 0s and 1s." << endl;
      return -1; // Indicate error
    }

    // Add the digit's value to the decimal representation considering its base position
    decimal += digit * base;

    // Update the base for the next digit
    base *= 2;
  }

  // Return the calculated decimal value
  return decimal;
}

int main() {
  string binaryString;

  cout << "Enter a binary number: ";
  cin >> binaryString;

  int decimal = binaryToDecimal(binaryString);

  if (decimal != -1) {
    cout << "Decimal equivalent: " << decimal << endl;
  }

  return 0;
}
