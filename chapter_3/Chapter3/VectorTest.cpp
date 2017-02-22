//
// Created by lchj on 2017/2/18.
//
#include "VectorTest.h"

void VectorTest::test_int_vector() {
    for (int i = 0; i < 10; i++){
        this->int_vector.push_back(i);
    }

    vector<int>::iterator begin = int_vector.begin();
    vector<int>::iterator end = int_vector.end();

    for(; begin != end; begin++){
        cout << *begin << endl;
    }
}

void VectorTest::test_string_vector() {
    string_vector = {10,"niaho"};
    vector<string>::iterator begin = string_vector.begin();
    vector<string>::iterator end = string_vector.end();

    for (; begin != end; begin++){
        cout << *begin << endl;
    }
}


