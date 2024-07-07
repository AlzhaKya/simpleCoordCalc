#include "converter.h++"

void Coordinate::overworldToNether() {
    xConverted = xCoordinate / 8;
    zConverted = zCoordinate / 8;
}

void Coordinate::netherToOverworld() {
    xConverted = xCoordinate * 8;
    zConverted = zCoordinate * 8;
}

double Coordinate::getXResult() const {
    return xConverted;
}

double Coordinate::getZResult() const {
    return zConverted;
}

void Coordinate::setXCoordinate() {
    std::cin >> xCoordinate;
}

void Coordinate::setZCoordinate() {
    std::cin >> zCoordinate;
}





