#include <iostream>
#include <stdexcept>
#include <string>
#include "PhoneticFinder.hpp"
using namespace std;

namespace phonetic {

/* v, w
* b, f, p
* g, j
* c, k, q
* s, z 
* d, t 
* o, u
* i, y
*/
    bool comp(char a, char b){
        a = tolower(a);
        b = tolower(b);
        if ((a == b) ||
            (a == 'v' && b == 'w' ) || ( b == 'v' && a == 'w') ||
            (a == 'g' && b == 'j' ) || ( b == 'g' && a == 'j') ||
            (a == 's' && b == 'z' ) || ( b == 's' && a == 'z') ||
            (a == 'd' && b == 't' ) || ( b == 'd' && a == 't') ||
            (a == 'o' && b == 'u' ) || ( b == 'o' && a == 'u') ||
            (a == 'i' && b == 'y' ) || ( b == 'i' && a == 'y') ||
            ((a == 'b' || a == 'f' || a == 'p' ) && ( b =='b' || b =='f' || b =='p')) ||
            ((a == 'c' || a == 'k' || a == 'q' ) && ( b =='c' || b =='k' || b =='q'))) return true;
        return false;
    }

    string find(string text, string word){
        text = text + ' ';
        string curr = "";
        char ch; 
        int count = 0;
        bool cont = false;
        bool fb = true;
        for (int i = 0; i < text.length(); i++) {
            ch = text.at(i); 
            if (ch == ' '){
                if (cont) return curr;
                else curr = "";
                count = 0;
                fb = true;
            }
            else{
                if(comp(ch, word.at(count))){
                    curr = curr + ch;
                    count++;
                    if ((count == word.length()) && fb) {
                        if (text.at(i + 1) == ' ') cont = true;
                        else throw out_of_range(word + " is not a full word in the sentence");
                    }
                }
                else{
                    curr = "";
                    fb = false;
                }
            } 
        } 
        throw out_of_range("Did not find the word " + word + " in the text");
    }
}
