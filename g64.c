/*Betty is exploring character encryption using a program. She wants to encrypt a given character based on specific rules:



Encrypt a given character by adding 2 to the ASCII value for uppercase 
Subtract 2 for lowercase letters. 
For non-alphabetic characters, add 5 to the ASCII value.


Create a program that takes Betty's input character, converts it to a signed char, and prints the encrypted result.

Input format :
The input consists of a char value 'n', representing the character entered by Betty.

Output format :
The output displays the encrypted character after performing a conversion based on the given rules in the problem statement.*/

#include <stdio.h>

int main() {
    char originalChar;
    scanf(" %c", &originalChar);
    if ((originalChar >= 'A' && originalChar <= 'Z') || (originalChar >= 'a' && originalChar <= 'z')) {
        signed char encryptedChar = (originalChar >= 'A' && originalChar <= 'Z') ? (signed char)(originalChar + 2) : (signed char)(originalChar - 2);
        printf("%c", encryptedChar);
    } else {
        signed char encryptedChar = (signed char)originalChar + 5;
        printf("%c", encryptedChar);
    }
    return 0;
}
