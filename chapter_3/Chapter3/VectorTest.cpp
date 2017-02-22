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

    int i = 0;
    int_vector.clear();
    while (i != -1 ){
        cout << "input number" << endl;
        cin >> i;
        if(i == -1){
            continue;
        }
        int_vector.push_back(i);
    }
    begin = int_vector.begin();
    end = int_vector.end();
    cout << *begin << endl;

    for (; begin != end-1; begin++){
        cout << "sum:" << *begin + *(begin + 1) << endl;
    }

    begin = int_vector.begin();
    end = int_vector.end();
    cout << "============================";
    for (; end - begin >= 2; begin++, end--){
        cout << "sum:" << *begin + *end << endl;
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


