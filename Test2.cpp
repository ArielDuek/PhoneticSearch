#include "doctest.h"
#include "PhoneticFinder.hpp"
#include <string>
#include <iostream>
using namespace phonetic;
using namespace std;

TEST_CASE("Test replacement of v and w") {
    string text = "The VHOLE vaYS to VoTe Vho yoU Vant spend Your Moeny VITH is who you LoWe and which you Hawe good Wibe Vith HIM";
            CHECK(find(text, "Whole") == string("VHOLE"));
            CHECK(find(text, "ways") == string("vaYS"));
            CHECK(find(text, "wote") == string("VoTe"));
            CHECK(find(text, "want") == string("Vant"));
            CHECK(find(text, "love") == string("LoWe"));
            CHECK(find(text, "have") == string("Hawe"));
            CHECK(find(text, "vibe") == string("Wibe"));
            CHECK(find(text, "WITH") == string("VITH"));
            CHECK(find(text, "which") == string("which"));
    try {
                CHECK(find(text, "Drinks") == string("Drink"));
    }
    catch (exception& ex) {
        cout << "   caught exception: " << ex.what() << endl;
    }
}

TEST_CASE("Test replacement of g and j") {
    string text = "The JraDe i JOT made me eNGoy so i GuMped in the jarden with my jroup and jay JOT JooGle GEt ";
            CHECK(find(text, "grade") == string("JraDe"));
            CHECK(find(text, "got") == string("JOT"));
            CHECK(find(text, "enjoy") == string("eNGoy"));
            CHECK(find(text, "garden") == string("jarden"));
            CHECK(find(text, "group") == string("jroup"));
            CHECK(find(text, "jay") == string("jay"));
            CHECK(find(text, "got") == string("JOT"));
            CHECK(find(text, "google") == string("JooGle"));
            CHECK(find(text, "jet") == string("GEt"));
    try {
                CHECK(find(text, "grades") == string("grade"));
    }
    catch (exception& ex) {
        cout << "   caught exception: " << ex.what() << endl;
    }


}

TEST_CASE("Test replacement of p and b and f") {
    string text = "FePorE BEOFLE was aPle BiGHT pears and BlaY fupg they BLY and FOST bacepook FICTURES bor lot op feoBle";
            CHECK(find(text, "before") == string("FePorE"));
            CHECK(find(text, "people") == string("BEOFLE"));
            CHECK(find(text, "ABLE") == string("aPle"));
            CHECK(find(text, "FiGHT") == string("BiGHT"));
            CHECK(find(text, "bears") == string("pears"));
            CHECK(find(text, "PLAY") == string("BlaY"));
            CHECK(find(text, "post") == string("FOST"));
            CHECK(find(text, "facebook") == string("bacepook"));
            CHECK(find(text, "pictures") == string("FICTURES"));
    try {
                CHECK(find(text, "anrybirds") == string("happy"));
    }
    catch (exception& ex) {
        cout << "   caught exception: " << ex.what() << endl;
    }

}


TEST_CASE("Test replacement of c and k and q") {
    string text = "QalVin Qlein CeeP Qontinue and KonCuer kuests Qounting KyQlups and Cuantom KaCes Qopies Kuite lonley Cnight";
            CHECK(find(text, "calvin") == string("QalVin"));
            CHECK(find(text, "klein") == string("Qlein"));
            CHECK(find(text, "keep") == string("CeeP"));
            CHECK(find(text, "continue") == string("Qontinue"));
            CHECK(find(text, "conquer") == string("KonCuer"));
            CHECK(find(text, "quests") == string("kuests"));
            CHECK(find(text, "counting") == string("Qounting"));
            CHECK(find(text, "cyclups") == string("KyQlups"));
            CHECK(find(text, "quantom") == string("Cuantom"));
    try {
                CHECK(find(text, "quites") == string("quite"));
    }
    catch (exception& ex) {
        cout << "   caught exception: " << ex.what() << endl;
    }

}

TEST_CASE("Test replacement of z and s") {
    string text = "WaSe iZ a Zupervisitor in out Zpeicl Sone Zince Sebraz ZeeK got ZMALL seed in SOO";
            CHECK(find(text, "Waze") == string("WaSe"));
            CHECK(find(text, "is") == string("iZ"));
            CHECK(find(text, "supervisitor") == string("Zupervisitor"));
            CHECK(find(text, "speicl") == string("Zpeicl"));
            CHECK(find(text, "zone") == string("Sone"));
            CHECK(find(text, "since") == string("Zince"));
            CHECK(find(text, "zebras") == string("Sebraz"));
            CHECK(find(text, "seeK") == string("ZeeK"));
            CHECK(find(text, "small") == string("ZMALL"));
            CHECK(find(text, "zoo") == string("SOO"));
    try {
                CHECK(find(text, "smalls") == string("small"));
    }
    catch (exception& ex) {
        cout << "   caught exception: " << ex.what() << endl;
    }
}

TEST_CASE("Test replacement of d and t") {
    string text = "TonD Dhink Do DaKE TriVers Dank TownDown TuE DransPorD Tevices";
            CHECK(find(text, "dont") == string("TonD"));
            CHECK(find(text, "think") == string("Dhink"));
            CHECK(find(text, "to") == string("Do"));
            CHECK(find(text, "take") == string("DaKE"));
            CHECK(find(text, "drivers") == string("TriVers"));
            CHECK(find(text, "tank") == string("Dank"));
            CHECK(find(text, "downtown") == string("TownDown"));
            CHECK(find(text, "due") == string("TuE"));
            CHECK(find(text, "transport") == string("DransPorD"));
            CHECK(find(text, "devices") == string("Tevices"));
    try {
                CHECK(find(text, "device") == string("Tevices"));
    }
    catch (exception& ex) {
        cout << "   caught exception: " << ex.what() << endl;
    }
}
TEST_CASE("Test replacement of o and u") {
    string text = "UOr Cummoinity hUpe yUO will be carefolL Uot frUm the Uppurtonity wisduM smoking Orgent Vuice";
            CHECK(find(text, "our") == string("UOr"));
            CHECK(find(text, "commuinity") == string("Cummoinity"));
            CHECK(find(text, "hope") == string("hUpe"));
            CHECK(find(text, "you") == string("yUO"));
            CHECK(find(text, "out") == string("Uot"));
            CHECK(find(text, "from") == string("frUm"));
            CHECK(find(text, "opportunity") == string("Uppurtonity"));
            CHECK(find(text, "wisdom") == string("wisduM"));
            CHECK(find(text, "urgent") == string("Orgent"));
            CHECK(find(text, "voice") == string("Vuice"));
            CHECK(find(text, "smoking") == string("smoking"));
    try {
                CHECK(find(text, "smoking") == string("smoKing"));
    }
    catch (exception& ex) {
        cout << "   caught exception: " << ex.what() << endl;
    }
}
TEST_CASE("Test replacement of i and y") {
    string text = "Y thYnK iou wyLL bUI and PAI all iour yNSPERATYON and MOTYvatyon freeli ioung BOi";
            CHECK(find(text, "I") == string("Y"));
            CHECK(find(text, "think") == string("thYnK"));
            CHECK(find(text, "you") == string("iou"));
            CHECK(find(text, "will") == string("wyLL"));
            CHECK(find(text, "buy") == string("bUI"));
            CHECK(find(text, "pay") == string("PAI"));
            CHECK(find(text, "your") == string("iour"));
            CHECK(find(text, "insperation") == string("yNSPERATYON"));
            CHECK(find(text, "motivation") == string("MOTYvatyon"));
            CHECK(find(text, "freely") == string("freeli"));
    try {
                CHECK(find(text, "boy") == string("BOy"));
    }
    catch (exception& ex) {
        cout << "   caught exception: " << ex.what() << endl;
    }
}

TEST_CASE("Test for all the cases") {
    string text = "BhunedyqFYNTER DazQ Yz UoR pyrzd qfb bRujram DazQ ve HaWE peen azcet do maqe Une hontret dezd which YZ Coide a lud up dezt";
            CHECK(find(text, "phoneticFinder") == string("BhunedyqFYNTER"));
            CHECK(find(text, "is") == string("Yz"));
            CHECK(find(text, "our") == string("UoR"));
            CHECK(find(text, "task") == string("DazQ"));
            CHECK(find(text, "FIRST") == string("pyrzd"));
            CHECK(find(text, "CPp") == string("qfb"));
            CHECK(find(text, "program") == string("bRujram"));
            CHECK(find(text, "we") == string("ve"));
            CHECK(find(text, "HAVE") == string("HaWE"));
            CHECK(find(text, "BeEn") == string("peen"));
            CHECK(find(text, "Asked") == string("azcet"));
            CHECK(find(text, "to") == string("do"));
            CHECK(find(text, "Make") == string("maqe"));
            CHECK(find(text, "One") == string("Une"));
            CHECK(find(text, "hundred") == string("hontret"));
            CHECK(find(text, "teSt") == string("dezd"));
            CHECK(find(text, "which") == string("which"));
            CHECK(find(text, "Is") == string("Yz"));
            CHECK(find(text, "Quite") == string("Coide"));
            CHECK(find(text, "lot") == string("lud"));
            CHECK(find(text, "of") == string("up"));
            CHECK(find(text, "test") == string("dezd"));
    try {
                CHECK(find(text, "abraKadabra") == string("BOy"));
                CHECK(find(text, "") == string("BOy"));
    }
    catch (exception& ex) {
        cout << "   caught exception: " << ex.what() << endl;
    }

}