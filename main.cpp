#include <iostream>
#include <string>

using namespace std;
using std::string;

// R-1.1
// D is not valid due to it having special characters

// R - 1.3
struct Pair {
    int first;
    double second;
};

// R - 1.4
// abcabcdabc

// R - 1.6

double* dp[10]
for (int i = 0; i < 10; i++) {
    dp[i] = new double;
    *dp[i] = 0.0;
}

// R - 1.11

class Flower {

private:
    string name;
    int petals;
    float price;

public:
    Flower(string name, int petals, float price) {
        this->name = name;
        this->petals = petals;
        this->price = price;
    }

    void setName(string name) {
        this->name = name;
    }

    void setPetals(int petals) {
        this->petals = petals;
    }

    void setPrice(float price) {
        this->price = price;
    }

    string getName() {
        return name;
    }

    int getPetals() {
        return petals;
    }

    int getPrice() {
        return price;
    }
};


int main() {
    return 0;
}