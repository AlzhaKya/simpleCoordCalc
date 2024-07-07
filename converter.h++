#pragma once
#include <iostream>

class Coordinate {
    double xConverted;
    double zConverted;
    double xCoordinate;
    double zCoordinate;

public:
    void overworldToNether();
    void netherToOverworld();
    void setXCoordinate();
    void setZCoordinate();
    double getXResult() const;
    double getZResult() const;
};