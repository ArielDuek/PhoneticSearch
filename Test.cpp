#include <iostream>
#include <string>
using namespace std;

#include "doctest.h"
#include "PhoneticFinder.hpp"
using namespace phonetic;

/* v, w
* b, f, p
* g, j
* c, k, q
* s, z 
* d, t 
* o, u
* i, y
*/

TEST_CASE("Test replacement of w and v") {
    string text = "xxx wow yyy";
    CHECK(find(text, "wow") == string("wow"));
    CHECK(find(text, "vow") == string("wow"));
    CHECK(find(text, "wov") == string("wow"));
    CHECK(find(text, "vov") == string("wow"));

    /* Add more checks here */
}


TEST_CASE("Test replacement of c and k and q or replacement of s and z") {
    string text = "xxx cookies yyy";
    CHECK(find(text, "cookies") == string("cookies"));
    CHECK(find(text, "kookies") == string("cookies"));
    CHECK(find(text, "qookies") == string("cookies"));
    CHECK(find(text, "coocies") == string("cookies"));
    CHECK(find(text, "koocies") == string("cookies"));
    CHECK(find(text, "qoocies") == string("cookies"));
    CHECK(find(text, "cooqies") == string("cookies"));
    CHECK(find(text, "kooqies") == string("cookies"));
    CHECK(find(text, "qooqies") == string("cookies"));

    CHECK(find(text, "cookiez") == string("cookies"));
    CHECK(find(text, "kookiez") == string("cookies"));
    CHECK(find(text, "qookiez") == string("cookies"));
    CHECK(find(text, "coociez") == string("cookies"));
    CHECK(find(text, "koociez") == string("cookies"));
    CHECK(find(text, "qoociez") == string("cookies"));
    CHECK(find(text, "cooqiez") == string("cookies"));
    CHECK(find(text, "kooqiez") == string("cookies"));
    CHECK(find(text, "qooqiez") == string("cookies"));
   

    /* Add more checks here */
}

TEST_CASE("Test replacement of g and j or replacement of o and u or replacement of d and t") {
    string text = "xxx good dog yyy";

    CHECK(find(text, "good") == string("good"));
    CHECK(find(text, "jood") == string("good"));
    CHECK(find(text, "guod") == string("good"));
    CHECK(find(text, "juod") == string("good"));
    CHECK(find(text, "goud") == string("good"));
    CHECK(find(text, "joud") == string("good"));
    CHECK(find(text, "guud") == string("good"));
    CHECK(find(text, "juud") == string("good"));
    CHECK(find(text, "goot") == string("good"));
    CHECK(find(text, "joot") == string("good"));
    CHECK(find(text, "guot") == string("good"));
    CHECK(find(text, "juot") == string("good"));
    CHECK(find(text, "gout") == string("good"));
    CHECK(find(text, "jout") == string("good"));
    CHECK(find(text, "guut") == string("good"));
    CHECK(find(text, "juut") == string("good"));
   
    CHECK(find(text, "dog") == string("dog"));
    CHECK(find(text, "tog") == string("dog"));
    CHECK(find(text, "dug") == string("dog"));
    CHECK(find(text, "tug") == string("dog"));
    CHECK(find(text, "doj") == string("dog"));
    CHECK(find(text, "toj") == string("dog"));
    CHECK(find(text, "duj") == string("dog"));
    CHECK(find(text, "tuj") == string("dog"));

    /* Add more checks here */
}

TEST_CASE("Test replacement of p and b and f or replacement of y and i") {
    string text = "xxx happy yyy";
    CHECK(find(text, "happy") == string("happy"));
    CHECK(find(text, "habby") == string("happy"));
    CHECK(find(text, "haffy") == string("happy"));
    CHECK(find(text, "hapby") == string("happy"));
    CHECK(find(text, "habpy") == string("happy"));
    CHECK(find(text, "hafpy") == string("happy"));
    CHECK(find(text, "hafby") == string("happy"));
    CHECK(find(text, "hapfy") == string("happy"));
    CHECK(find(text, "habfy") == string("happy"));

    CHECK(find(text, "happi") == string("happy"));
    CHECK(find(text, "habbi") == string("happy"));
    CHECK(find(text, "haffi") == string("happy"));
    CHECK(find(text, "hapbi") == string("happy"));
    CHECK(find(text, "habpi") == string("happy"));
    CHECK(find(text, "hapfi") == string("happy"));
    CHECK(find(text, "habfi") == string("happy"));
    CHECK(find(text, "hafpi") == string("happy"));
    CHECK(find(text, "hafbi") == string("happy"));
   

    /* Add more checks here */
}

TEST_CASE("Test replacement of lower-case and upper-case") {
    



    string text = "string xxx yyy";

    CHECK(find(text, "STRING") == string("string"));
    CHECK(find(text, "STRINg") == string("string"));
    CHECK(find(text, "STRInG") == string("string"));
    CHECK(find(text, "STRIng") == string("string"));
    CHECK(find(text, "STRiNG") == string("string"));
    CHECK(find(text, "STRiNg") == string("string"));
    CHECK(find(text, "STRinG") == string("string"));
    CHECK(find(text, "STRing") == string("string"));
    CHECK(find(text, "STrING") == string("string"));
    CHECK(find(text, "STrINg") == string("string"));
    CHECK(find(text, "STrInG") == string("string"));
    CHECK(find(text, "STrIng") == string("string"));
    CHECK(find(text, "STriNG") == string("string"));
    CHECK(find(text, "STriNg") == string("string"));
    CHECK(find(text, "STrinG") == string("string"));
    CHECK(find(text, "STring") == string("string"));
    CHECK(find(text, "StRING") == string("string"));
    CHECK(find(text, "StRINg") == string("string"));
    CHECK(find(text, "StRInG") == string("string"));
    CHECK(find(text, "StRIng") == string("string"));
    CHECK(find(text, "StRiNG") == string("string"));
    CHECK(find(text, "StRiNg") == string("string"));
    CHECK(find(text, "StRinG") == string("string"));
    CHECK(find(text, "StRing") == string("string"));
    CHECK(find(text, "StrING") == string("string"));
    CHECK(find(text, "StrINg") == string("string"));
    CHECK(find(text, "StrInG") == string("string"));
    CHECK(find(text, "StrIng") == string("string"));
    CHECK(find(text, "StriNG") == string("string"));
    CHECK(find(text, "StriNg") == string("string"));
    CHECK(find(text, "StrinG") == string("string"));
    CHECK(find(text, "String") == string("string"));
    CHECK(find(text, "sTRING") == string("string"));
    CHECK(find(text, "sTRINg") == string("string"));
    CHECK(find(text, "sTRInG") == string("string"));
    CHECK(find(text, "sTRIng") == string("string"));
    CHECK(find(text, "sTRiNG") == string("string"));
    CHECK(find(text, "sTRiNg") == string("string"));
    CHECK(find(text, "sTRinG") == string("string"));
    CHECK(find(text, "sTRing") == string("string"));
    CHECK(find(text, "sTrING") == string("string"));
    CHECK(find(text, "sTrINg") == string("string"));
    CHECK(find(text, "sTrInG") == string("string"));
    CHECK(find(text, "sTrIng") == string("string"));
    CHECK(find(text, "sTriNG") == string("string"));
    CHECK(find(text, "sTriNg") == string("string"));
    CHECK(find(text, "sTrinG") == string("string"));
    CHECK(find(text, "sTring") == string("string"));
    CHECK(find(text, "stRING") == string("string"));
    CHECK(find(text, "stRINg") == string("string"));
    CHECK(find(text, "stRInG") == string("string"));
    CHECK(find(text, "stRIng") == string("string"));
    CHECK(find(text, "stRiNG") == string("string"));
    CHECK(find(text, "stRiNg") == string("string"));
    CHECK(find(text, "stRinG") == string("string"));
    CHECK(find(text, "stRing") == string("string"));
    CHECK(find(text, "strING") == string("string"));
    CHECK(find(text, "strINg") == string("string"));
    CHECK(find(text, "strInG") == string("string"));
    CHECK(find(text, "strIng") == string("string"));
    CHECK(find(text, "striNG") == string("string"));
    CHECK(find(text, "striNg") == string("string"));
    CHECK(find(text, "strinG") == string("string"));
    CHECK(find(text, "string") == string("string"));


    /* Add more checks here */
}

/* Add more test cases here */