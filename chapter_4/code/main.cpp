#include <iostream>

using std::cout;
using std::endl;

void test_static_cast();
void test_const_cast();
void test_reinterpret_cast();
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

    //convert
    int arr[10];
    int *arr_pointer = arr;
    cout << "array convert to pointer" << endl;
    cout << arr_pointer << endl;
    cout << arr << endl;
    cout << &arr[0] << endl;

    cout << "pointer convert to bool" << endl;
    arr_pointer = 0;
    if (arr_pointer) {
        cout << "null pointer is true" << endl;
    } else {
        cout << "null pointer is false" << endl;
    }

    cout << "const convert to no-const" << endl;
    const int *const_pointer = &i;
    int j = 0;
    const_pointer = &j;
    int *const pointer_const = &i;
    *pointer_const = 1;
    const int const_int = 0;
    const_pointer = &const_int;
    int custom_int = 0;
    const_pointer = &custom_int;
    i = -1;
    if (i) {
        cout << "-1 is true" << endl;
    } else {
        cout << "-1 is false" << endl;
    }
    test_static_cast();
    test_const_cast();
    test_reinterpret_cast();
    return 0;
}

void test_static_cast()  {
    cout << "static cast test" << endl;
    double d = 1.0;
    int i = static_cast<int>(d);
    cout << i << endl;

    void *pVoid = &i;
    int *p = static_cast<int*>(pVoid);
    cout << *p << endl;

    double *pDouble = static_cast<double *>(pVoid);
    cout << *pDouble << endl;

    int j = static_cast<int>(d);
    cout << j << endl;

    const int * p_const = &i;
    //const double *j_pointer = static_cast<double *>(p_const);
    //cout << *j_pointer << endl;
}

void test_const_cast(){
    int i = 0;
    const int *p = &i;
    int *pp = const_cast<int *>(p);
    *pp = 1;

    const int ii = 0;
    const int *ppp = &ii;
    int *pppp = const_cast<int *>(ppp);
    *pppp = 1;

    cout << i << endl;
    cout << ii << endl;
}

void test_reinterpret_cast(){
    int i = 0;
    int *p = &i;
    char *pp = reinterpret_cast<char *>(p);
    cout << *pp << endl;
}

