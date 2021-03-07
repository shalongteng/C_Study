#include "max.h"
#include <iostream>

using namespace std;

//函数声明

int absoulte(int n);
int main() {
    int a =5;
    int b = 8;
    int *a2 = &a;
    cout << *a2 << endl;
//    cout << max(a,b) << endl;
    return 0;
}

int absoulte(int n) {
    return n > 0 ? n : -n;
}