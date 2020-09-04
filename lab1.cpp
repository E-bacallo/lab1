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

bool multi_checker(string word){
    bool check = 0;
    for (unsigned int i = 0; i < word.length() - 2 ; i++){
        if(word[i] == word[i+1] && word[i] == word[i+2] ){
            check = 1;
            break;    
        }

        }
    return check;
}


int main(int argc, char *argv[]) {

    string word;
    ifstream testfile;
    bool trips = 0; 

#ifdef UNIT_TEST
    bool testloop; 
    cout << "This is a test!! \n" << endl;
    testfile.open("test.txt");
    while (!testfile.eof()){
        testloop = 0;
        trips = 0;
        getline(testfile,word);
        testloop = word_checker(word);
        if (testfile.eof()){
        break;
        }
        if (testloop == 1){
            trips = multi_checker(word);
            if(trips == 1){ 
            cout << " That word ("<< word << ") has more than double letters." << endl;
            }
                else{
                cout << " That word (" << word << ") has double letters!" << endl;
                }
            }
            else{
            cout << " That word (" << word << ") does not have double letters." << endl;
            }
        }
       
    return 0;
        
#endif  

    bool dubs = 0; 
    while (dubs == 0 || trips == 1) {
        cout <<"Please enter a word. To check if it has double letters." << endl;
        cin >> word;
        dubs = word_checker(word);
        if (dubs == 0) {
            cout << word << " does not have double letters." << endl;
            }
        else{
            trips = multi_checker(word);
            if(trips == 1){
                cout << word <<" has triple letters. Please enter a different word." << endl;
            }
            else{
            cout << "That word ( " << word << " ) has double letters!" << endl;
            }
        }
    }
    return 0;
}
