#include <iostream>
#include "Array.h"
#include <string>

using namespace std;

int main() {

    Array<int> s = Array<int>(5);

    s[0] = 1;
    s[1] = 2;
    s[2] = 3;
    s[3] = 4;
    s[4] = 5;

    Array<int>::Iterator end = s.end();

    cout << "s:" << endl;

    for (Array<int>::Iterator it = s.begin(); it != end; ++it) {
        std::cout << *it << endl;
    }
    endl(cout);


    Array<int> t = s;

    end = t.end();

    cout << "t:" << endl;

    for (Array<int>::Iterator it = t.begin(); it != end; ++it) {
        std::cout << *it << endl;
    }

    s[3] = 465;


    endl(cout);

    end = s.end();

    cout << "s:" << endl;

    for (Array<int>::Iterator it = s.begin(); it != end; ++it) {
        std::cout << *it << endl;
    }

    endl(cout);

    end = t.end();

    cout << "t:" << endl;

    for (Array<int>::Iterator it = t.begin(); it != end; ++it) {
        std::cout << *it << endl;
    }

    endl(cout);

    /*
    Array<int> s = Array<int>(5);

    s[0] = 1;
    s[1] = 2;
    s[2] = 3;
    s[3] = 4;
    s[4] = 5;

    cout << s[3] << endl;

    s[3] = 8;

    cout << s[3] << endl;


    endl(cout);

    Array<int>::Iterator end = s.end();

    cout << "s:" << endl;

    for(Array<int>::Iterator it = s.begin(); it != end; ++it){
        std::cout << *it << endl;
    }

    endl(cout);

    Array<int> t(s);

    end = t.end();
    cout << "t:" << endl;

    for(Array<int>::Iterator it = t.begin(); it != end; ++it){
        std::cout << *it << endl;
    }

    endl(cout);

    t[4] = 69;
    s[1] = 34;
    cout << "t:" << endl;

    end = t.end();
    for(Array<int>::Iterator it = t.begin(); it != end; ++it){
        std::cout << *it << endl;
    }

    endl(cout);
    cout << "s:" << endl;

    end = s.end();
    for(Array<int>::Iterator it = s.begin(); it != end; ++it){
        std::cout << *it << endl;
    }
*/
    return EXIT_SUCCESS;
}