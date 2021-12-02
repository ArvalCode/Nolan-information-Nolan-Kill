#include <iostream>

class person {
public:
    int age;
    int height;
    int weight;

    void kill() {
        age = 0;
        height = 0;
        weight = 0;
    }

};

int main() {
    person nolan;
    person comyar;

    comyar.age = 15;
    comyar.height = 82;
    comyar.weight = 333;

    nolan.age = 14; //years
    nolan.height = 67; //inches
    nolan.weight = 110; //pounds

    std::cout << nolan.age << " " << nolan.height << " " << nolan.weight << std::endl;

    nolan.kill();

    std::cout << nolan.age << " " << nolan.height << " " << nolan.weight;
}