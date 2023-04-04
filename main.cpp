#include <iostream>
using namespace std;

int r, a, m, n, st, dr, p, k;

int main() {
    cout << "For guesser press 1 " << endl;
    cout << "For thinker press 2 " << endl;
    cout << "I chose  ";
    cin >> a;
    cout << "Think of a number" << endl;
    cout << "From now on we will say that 1 = YES and 0 = NO" << endl;

    st = 1;
    dr = 1000;
    p = 0;

    while (st < dr && p == 0) {
        m = (st + dr) / 2;
        cout << "Is the number " << m << "?" << endl;
        cin >> r;

        if (r == 1) {
            cout << "Your number is " << m << " ";
            p = m;
        }
        else {
            cout << "The number is less then " << m << "?" << endl;
            cin >> r;
            if (r == 1) {
                dr = m - 1;
            }
            else {
                st = m + 1;
            }
            k++;
        }
    }

    cout << endl << k << endl;

    return 0;
}
