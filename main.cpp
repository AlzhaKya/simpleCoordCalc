#include <iostream>
#include "converter.h++"


int main() {

    std::cout << "Input X value: " << std::endl;
    double xValue;
    std::cin >> xValue;

    std::cout << "Input Z value: " << std::endl;
    double zValue;
    std::cin >> zValue;

    std::cout << std::endl
              <<"Desired Conversion: " << std::endl
              << "[1] Overworld to Nether" << std::endl
              << "[2] Nether to Overworld" << std::endl;

    short conversionChoice;
    std::cin >> conversionChoice;


    std::tuple<double, double> coordinates;
    std::string dimension;

    switch (conversionChoice) {
        case 1:
            coordinates = converter::overworldToNether(xValue,zValue);
        dimension = "Nether coordinates: ";
        break;
        case 2:
             coordinates = converter::netherToOverworld(xValue,zValue);
        dimension = "Overworld coordinates: ";
        break;
        default:
            std::cout << "Incorrect value." << std::endl;
        return 1;
    }

    std::cout << dimension << "(" << std::get<0>(coordinates) << ", " << std::get<1>(coordinates) << ")" << std::endl;
}
