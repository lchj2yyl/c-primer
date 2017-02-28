#include <iostream>
#include <string>


using std::cout;
using std::cin;
using std::endl;
using std::string;

void test_param();
int test_static_param(const int &);
void test_const_custom(int &,string &);
void test_const_const(const int &, const string &);
void test_array_param1(const int []);
void test_array_param2(const int *);
void test_array_param3(const int [10]);
void test_array_ref1(int *&arr);
void test_array_ref2(int (&arr)[10]);
void test_mutil_array1(int arr[][10]);
void test_mutil_array2(int (*arr)[10]);
const string & test_function_result1();
string * test_function_result2();
int main() {
    std::cout << "Hello, World!" << std::endl;
    test_param();
    while (test_static_param(4) < 10);
    int i;
    cout << i << endl;
    //test_const_custom(1,"niaho");
    test_const_const(1,"hel");
    int arr[] = {1,2,3,4,5};
    test_array_param1(arr);
    test_array_param2(arr);
    test_array_param3(arr);
//    int &ref_arr[10] = {i,i,i,i,i,i,i,i,i,i};
//    int j;
//    for(int i = 0; i < 10; i++){
//        ref_arr[i] = j;
//    }
    int arr_10[] = {1,2,3,4,5,6,7,8,9,10};
    int (&arr_ref)[10] = arr_10;

    const string &test = test_function_result1();
    cout << test << endl;
    return 0;
}

void test_param(){
    int i;
    int j;
    int k;
    cout << i << endl;
    cout << j << endl;
    cout << k << endl;

}

int test_static_param(const int &start){
    static int i = start;
    ++i;
    cout << i << endl;
    return i;
}

void test_const_custom(int &, string &) {

}

void test_const_const(const int &, const string &) {

}

void test_array_param1(const int *) {

}

void test_array_param2(const int *) {

}

void test_array_param3(const int *) {

}

void test_array_ref2(int (&arr)[10]) {
    for (auto elem : arr){
        cout << elem << endl;
    }
}


void test_mutil_array1(int (*arr)[10]) {

}

void test_mutil_array2(int (*arr)[10]) {

}

const string &test_function_result1() {
//    string str("return");
//    return str;
    return "niaho";
}

string *test_function_result2() {
    return 0;
}
