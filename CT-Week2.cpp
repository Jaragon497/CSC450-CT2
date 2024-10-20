/*
 *   Program takes two c-strings from
 *   the user and concatinates them.
 *   Repeats 3 times
 *
 */

#include <cstring>
#include <iostream>

using namespace std;
const int MAX_LENGTH = 100;

void concat();

int main() {

    // Print out which iteration before running concat()
    for (int i = 0; i < 3; i++) {
        std::cout << "Iteration " << i + 1 << std::endl;
        concat();
    }
    return 0;
}

void concat() {
    // Initialize variables
    char str1[MAX_LENGTH] = {0};
    char str2[MAX_LENGTH] = {0};
    char result[MAX_LENGTH * 2] = {0};

    // Request first string from user
    std::cout << "Type in the 1st string: ";
    std::cin.getline(str1, MAX_LENGTH);

    // Request second string from user
    std::cout << "Type in the 2nd string: ";
    std::cin.getline(str2, MAX_LENGTH);

    // Move str1 into a buffer of twice the max size
    // then concatenate str2 into it as well
    strcpy(result, str1);
    strcat(result, str2);

    // Output the code
    std::cout << std::endl
              << "Concatenated string: " << result << std::endl
              << std::endl;
}
