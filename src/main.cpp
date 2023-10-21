#include <iostream>
#include <cstdint>
#include "Setup.hpp"
#include "Nature.hpp"

int main() {
    std::cout << "hello, world!";
    // Declare parameters
    Params prm {.p=5,.n=4,.k=1,.c=0,.s=0,.t=10,.rho=0.3};
    Nature realization(prm);
    return 0;
}