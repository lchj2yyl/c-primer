//
// Created by lchj on 2017/2/18.
//

#ifndef CHAPTER3_VECTORTEST_H
#define CHAPTER3_VECTORTEST_H

#include <vector>
#include <string>
#include <iostream>

using std::cout;
using std::endl;
using std::vector;
using std::string;

class VectorTest {
private:
    vector<string> string_vector;
    vector<int> int_vector;
public:
    void test_int_vector();

    void test_string_vector();
};

#endif //CHAPTER3_VECTORTEST_H
