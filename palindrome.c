#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>
int main() {
    // variables
    const int elements = 50;
    char userInput[elements];
    char noSpaces[elements];
    char reversed[elements];
    bool isQuit = false;
    char quitPlay;

    

    int i; // counter
    int j; // counter for noSpaces array 
    int k; // counter for reversed array


    

while (isQuit != true) {
        j = 0;
        k = 0;
        printf("Press q to quit or c to play:\n");
        scanf(" %c" , &quitPlay);
        getchar(); // Consume the newline character
        if (quitPlay == 'c') {
            // get user input
            printf("Enter a string: ");
            fgets(userInput, elements, stdin); // includes spaces
            int stringLen = strlen(userInput);
            // remove newline character
            for (i = 0; i < stringLen; ++i) {
                if (userInput[i] == '\n') {
                    userInput[i] = '\0';

                }

            }

            // convert userInput string to lowercase
            for (i = 0; i < strlen(userInput); ++i) {
                userInput[i] = tolower(userInput[i]);
            }

            // remove spaces
            for (i = 0; i < strlen(userInput); ++i) {
                if (userInput[i] != ' ') {
                    noSpaces[j] = userInput[i];
                    j = j + 1;
                }
            }
            // convert noSpaces to lowercase
            for (i = 0; i < strlen(noSpaces); ++i) {
                reversed[i] = tolower(noSpaces[i]);
                }

            noSpaces[j] = '\0'; // null terminate new string

            // reverse the string
            for (i = strlen(noSpaces) - 1; i >= 0; --i) {
                reversed[k] = noSpaces[i];
                k = k + 1;
            }
            reversed[k] = '\0'; // null terminate new string

            // convert reversed string to lowercase
            for (i = 0; i < strlen(reversed); ++i) {
                reversed[i] = tolower(reversed[i]);
                }
            // check if palindrome
            if (strcmp(reversed, noSpaces) == 0) {
                printf("Palindrome: %s\n", userInput);
            }
            else {
                printf("Not a palindrome: %s\n", userInput);
            }

        }
        else if (tolower(quitPlay) == 'q') {
            isQuit = true;
            //exits loop

        }
        else {
            printf("Please enter a valid response\n");
        }

    }
    return 0;
}