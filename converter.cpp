#include "converter.h++"

namespace converter {
    std::tuple<double, double> overworldToNether(double x, double z) {
        double xNether = x / 8;
        double zNether = z / 8;
        return std::make_tuple(xNether, zNether);

    }

    std::tuple<double, double> netherToOverworld(double x, double z) {
        double xOverworld = x * 8;
        double zOverworld = z * 8;
        return std::make_tuple(xOverworld, zOverworld);
    }

}
