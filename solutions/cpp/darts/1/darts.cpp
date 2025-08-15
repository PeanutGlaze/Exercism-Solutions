#include "darts.h"

namespace darts {

// TODO: add your solution here
int score(double x, double y) {
    double dist = std::sqrt(std::pow(x, 2) + std::pow(y, 2));

    return (dist<=1 ? 10 : (dist<=5 ? 5 : (dist<=10 ? 1:0)));
}

}  // namespace darts