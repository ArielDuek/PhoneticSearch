#include <iostream>
#include <stdexcept>
#include <string>
#include "PhoneticFinder.hpp"
using namespace std;

namespace phonetic {

    bool comp(char a, char b){
        a = tolower(a);
        b = tolower(b);
        if ((a == b) ||
            (a == 'v' && b == 'w') || ( b == 'v' && a == 'w') || ( a == 'g' && b == 'j') ||
            (b == 'g' && a == 'j') || ( a == 's' && b == 'z') || ( b == 's' && a == 'z') ||
            (a == 'd' && b == 't') || ( b == 'd' && a == 't') || ( a == 'o' && b == 'u') ||
            (b == 'o' && a == 'u') || ( a == 'i' && b == 'y') || ( b == 'i' && a == 'y') ||
           ((a == 'b' || a == 'f'  || a == 'p' ) && ( b =='b' || b =='f' || b =='p')) ||
           ((a == 'c' || a == 'k'  || a == 'q' ) && ( b =='c' || b =='k' || b =='q'))) return true;
        return false;
    }

    string find(string text, string word){
        text += ' ';
        string curr = "";
        char ch; 
        int count = 0;
        bool contain = false;
        bool fromBegin = true;
        bool notFull = false;
        for (int i = 0; i < text.length(); i++){
            ch = text.at(i); 
            if (ch == ' '){
                if (contain) return curr;
                else curr = "";
                count = 0;
                fromBegin = true;
            }
            else{
                if(count<=word.length()-1 && comp(ch, word.at(count))){
                    curr += ch;
                    if ((++count == word.length()) && fromBegin) {
                        if (text.at(i + 1) == ' ') contain = true;
                        else notFull = true;
                    }
                }
                else fromBegin = false;
            } 
        }
        if (notFull) throw runtime_error (word + " is not a full word in the sentence");
        else throw runtime_error ("Did not find the word " + word + " in the text");
    }
}