#include "converter.h++"

void Coordinate::overworldToNether() {
    xConverted = xCoordinate / 8;
    zConverted = zCoordinate / 8;
}

void Coordinate::netherToOverworld() {
    xConverted = xCoordinate * 8;
    zConverted = zCoordinate * 8;
}


