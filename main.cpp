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

    cout << s[3] << endl;

    s[3] = 8;

    cout << s[3] << endl;

    Array<int>::Iterator end = s.end();

    for(Array<int>::Iterator it = s.begin(); it != end; ++it){
        std::cout << *it << endl;
    }

    Array<int> t(s);



    end = t.end();

    for(Array<int>::Iterator it = t.begin(); it != end; ++it){
        std::cout << *it << endl;
    }

    return 0;
}