
#include <iostream>
#include <thread>
using namespace std;

int counter = 0;

void increase() {
    for (int i = 0; i < 100000; i++) {
        counter++;
    }
}

int main() {

    thread t1(increase);
    thread t2(increase);

    t1.join();
    t2.join();

    cout << "Final Counter: "
         << counter << endl;

    return 0;
}
