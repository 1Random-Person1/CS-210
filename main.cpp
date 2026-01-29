#include <iostream>
#include <string>

using namespace std;
using std::string;

//Reinforcements ------------

// R-1.1 ------------
// D is not valid due to it having special characters

// R - 1.3 ------------

struct Pair {
    int first;
    double second;
};

// R - 1.4 ------------

abcabcdabc

// R - 1.6 ------------

double* dp[10]
for (int i = 0; i < 10; i++) {
    dp[i] = new double;
    *dp[i] = 0.0;
}

// R - 1.11 ------------

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
    Flower flower = new Flower("Red Rose", 5, 2.99);
    std::cout << flower.getName() << std::endl;
    std::cout << flower.getPetals() << std::endl;
    std::cout << flower.getPrice() << std::endl;

    return 0;
}

//Creativity ------------

// C - 1.2 ------------

bool evenProduct(int a[], int n) {

    if (n < 2) {
        return false;
    } else {
        for (int i = 0; i < n; i++) {
            if (a[i] % 2 == 0) {
                return true;
            }
        }
    }

    return false;
}

int main() {
    int list[] = {2, 5, 6};
    bool result = evenProduct(list, 3);
    if (result) {
        std::cout << "Product is even \n";
    } else {
        std::cout << "Product is odd \n";
    }

    return 0;
}

// C - 1. ------------





// C - 1. ------------






