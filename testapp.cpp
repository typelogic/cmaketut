#include <iostream>
#include <functional>
using namespace std;

int main () 
{
    [x = ref(cout << "hello ")](){x.get() << "world\n";}();
    return 0;
}
