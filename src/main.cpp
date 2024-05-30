#include <iostream>
#include "../include/RNG/normal_distribution_RNG.h"

int main() {
    for(int i = 0; i <10; i++){
        std::cout << getRNG() << std::endl;
    }
}