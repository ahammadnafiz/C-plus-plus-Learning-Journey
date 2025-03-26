// Credit Card Validation

/*
Luhn Algorithm
1. Double every second digit from right to left. If doubling of a digit results in a two-digit number, add up the two digits to get a single-digit number.
2. Now add all single-digit numbers from step 1.
3. Add all digits in the odd places from right to left in the card number.
4. Sum the results from steps 2 and 3.
5. If the result from step 4 is divisible by 10, the card number is valid; otherwise, it is invalid.
*/

#include <iostream>
using namespace std;

int getDigit(const int num);
int sumOddDigits(const string cardNumber);
int sumEvenDigits(const string cardNumber);

int main()
{
    string cardNumber;
    int result;

    cout << "Enter your credit card number: ";
    cin >> cardNumber;

    result = sumOddDigits(cardNumber) + sumEvenDigits(cardNumber);

    if (result % 10 == 0)
    {
        cout << "Valid Credit Card" << endl;
    }
    else
    {
        cout << "Invalid Credit Card" << endl;
    }

    return 0;
}

int getDigit(const int num)
{
    return num < 10 ? num : num / 10 + num % 10;
}

int sumOddDigits(const string cardNumber)
{
    int sum = 0;
    for (int i = cardNumber.length() - 1; i >= 0; i -= 2)
    {
        sum += cardNumber[i] - '0'; // Convert char to int
    }
    return sum;
}

int sumEvenDigits(const string cardNumber)
{
    int sum = 0;
    for (int i = cardNumber.length() - 2; i >= 0; i -= 2)
    {
        int digit = getDigit((cardNumber[i] - '0') * 2); // Convert char to int
        sum += digit;
    }
    return sum;
}