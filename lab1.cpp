// Student : EDGAR BACALLO

#include <stdio.h>
#include <stdlib.h>
#include <string> 
#include <string.h>
#include <iostream> 
#include <cstring> 

using std::string;
using std::cout;
using std::cin;
using std::endl;

bool word_checker(string word) {
    bool check = 0;
    for (unsigned int i = 0; i < word.length() - 1 ; i++) {
        if(word[i] == word[i+1]) {
            check = 1;
            break;
        }

    }

     return check;
}


int main() {
    string word;
    bool loop = 0;
    while (loop == 0) {
        cout <<"Please enter a word with duplicate letters." << endl;
        cin >> word;
        loop = word_checker(word);

        if (loop == 0) {
            cout <<"That isn't a word with duplicate letters." << endl;
         }
    }
    
    cout << "That word ( " << word << " ) has duplicate letters!" << endl;
    return 0;
}
