#include "leap.h"

namespace leap {

// TODO: add your solution here
bool is_leap_year(int n) {
    return(n%4==0 ? ((n%4==0 && n%100!=0) || (n%100==0 && n%400==0) ? true:false):false);
}

}  // namespace leap
