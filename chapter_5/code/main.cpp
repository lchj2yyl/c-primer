#include <iostream>
#include <exception>
#include <stdexcept>
#include <new>
#include <typeinfo>

using std::cout;
using std::cin;
using std::endl;
using std::exception;
using std::runtime_error;
using std::bad_alloc;
using std::bad_cast;

void test_switch(int &);
void test_for();
void test_exception();
void test_goto();
int main() {
    int i = 2;
    test_switch(i);
    test_for();
    test_exception();
    test_goto();
    return 0;
}

void test_switch(int &param){
    int i = param;
    switch(i){
        case 1:
        {
            int test = 3;
        }

        case 2:
            //cout << test << endl;
            break;
        default:
            break;
    }
}

void test_for(){
    for (int i=0,j =0;;){
        break;
    }

}

void test_exception(){
    cout << "test exception" << endl;

    exception exception1;
    exception1.what();

    runtime_error runtime_error1("niaho");
    runtime_error1.what();

    bad_cast bad_cast1;
    bad_cast1.what();

    bad_alloc bad_alloc1;
    bad_alloc1.what();
}

void test_goto(){
    goto lchj;
    lchj:
    cout << "this is lchj" << endl;
    goto end;
    end:
    cout << "this is end return" << endl;
    return;
}
