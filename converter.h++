#pragma once
#include <iostream>

namespace converter {
    std::tuple<double, double> overworldToNether(double x, double z);
    std::tuple<double, double> netherToOverworld(double x, double z);

}