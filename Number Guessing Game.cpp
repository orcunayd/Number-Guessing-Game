#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

static int hold;

static void guess(int a) {
    int guess, count = 0, point = 100;
    cout << "Enter your guess: \n";
    do {
        cin >> guess;
        count++;
        if (guess == a)
            cout << "Bravo, you found in " << count << " trial " << hold << " number ";
        else if (guess < a) {
            cout << "Enter bigger value: \n";
            point = point - 10;
        }
        else {
            cout << "Enter smaller value: \n";
            point = point - 10;
        }
    } while (guess != a);
    cout << "Your point is " << point;
}
int main() {
    srand(time(0));
    hold = (1 + (int)rand() % 101);
    guess(hold);
    return 0;
}
