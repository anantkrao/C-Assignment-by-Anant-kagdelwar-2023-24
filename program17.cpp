#include<iostream>
using namespace std;

int main() {
    int i = 1;

    // Using goto statement along with for loop
    for (;;) {
        cout << "2 x " << i << " = " << 2 * i << endl;
        i++;

        if (i > 10)
            goto end;
    }

    end:
    return 0;
}
