#include <iostream> //дериктива препроцессора, подключение бибилиотеки
using namespace std;

int fib(int number) {

    if (number == 0 || number == 1)
        return 1;
    else return fib(number - 1) + fib (number - 2);
    }

int main() {
    int n;
    for (int i =0; i<n; ++i);
    cout << fib (10) << endl;
    return 0 ;
}