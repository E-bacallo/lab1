// Student : EDGAR BACALLO

#include <stdio.h>
#include <stdlib.h>
#include <string> 
#include <string.h>
#include <iostream> 
#include <cstring> 
#include <fstream> 
using namespace std;

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
    string test = "test";
    ifstream testfile;
    bool loop = 0;
    bool testloop;
    
    while (loop == 0) {
        cout <<"Please enter a word. To check if it has double letters. Or enter 'test' to test operation." << endl;
        cin >> word;
        if (word == test){
            testfile.open("test.txt");
            while (!testfile.eof()){
                testloop = 0;
                getline(testfile,word);
                testloop = word_checker(word);
                if (testfile.eof()){
                break;
                } 
                else if (testloop == 1){
                    cout<<" That word (" << word << ") has double letters!" << endl;
                }
                else{
                    cout <<" That word (" << word << ") does not have double letters." << endl;
                }
             }               
            loop = 1;
            return 0;
        }
        else{  
            
            loop = word_checker(word);
            if (loop == 0) {
            cout << word << " does not have double letters." << endl;
            }   

        }
    }
            cout << "That word ( " << word << " ) has double letters!" << endl;
            return 0;
}
