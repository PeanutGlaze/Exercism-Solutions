#include "raindrops.h"

namespace raindrops {

// TODO: add your solution here
std::string convert(int n) {
    std::string res;
    
    if(n % 3 == 0) { res.append("Pling"); }
    if(n % 5 == 0) { res.append("Plang"); }
    if(n % 7 == 0) { res.append("Plong"); }

    if(n % 3 != 0 && n % 5 != 0 && n % 7 != 0) {
        res.append(std::to_string(n)); }

    return res;
}

}  // namespace raindrops
