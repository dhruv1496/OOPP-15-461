#include<bits/stdc++.h>

using namespace std;

class hello {
    public:

    vector<int> v = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};

    void display() {
        for(auto val : v) {
            cout << val << " ";
        }

        cout << endl;
    }

};

int main() {
    hello c;
    c.display();
}