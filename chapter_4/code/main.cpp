#include <iostream>
using std::cout;
using std::endl;

int main() {
    int i = 0;
    ++i = 3;
    cout << (&(++i)) << endl;
    int &r = i;
    cout << &r << endl;
    cout << &i << endl;

    const int &rr = i;
    cout << &rr << endl;
    cout << &cout << endl;
    int *p = &i;
    cout << &*p << endl;
    cout << &("niaho") << endl;
    int &&rrr = 3;
    cout << &rrr << endl;
    return 0;
}

void test_function_lvalue(){

}