#include <iostream>
#include "converter.h++"


int main() {
    Coordinate coordinate{};

    std::cout << "Input X value: " << std::endl;
    coordinate.setXCoordinate();

    std::cout << "Input Z value: " << std::endl;
    coordinate.setZCoordinate();

    std::cout << std::endl
              <<"Desired Conversion: " << std::endl
              << "[1] Overworld to Nether" << std::endl
              << "[2] Nether to Overworld" << std::endl;

    short conversionChoice;
    std::cin >> conversionChoice;

    std::string dimension;

    switch (conversionChoice) {
        case 1:
            coordinate.overworldToNether();
        dimension = "Nether coordinates: ";
        break;
        case 2:
            coordinate.netherToOverworld();
        dimension = "Overworld coordinates: ";
        break;
        default:
            std::cout << "Incorrect value." << std::endl;
        return 1;
    }

    std::cout << dimension << "("  << coordinate.getXResult() << ", " << coordinate.getZResult() << ")" << std::endl;


}
