#pragma once

class Coordinate {
public:
    double xCoordinate;
    double zCoordinate;
    double xConverted;
    double zConverted;

    void overworldToNether();
    void netherToOverworld();
};