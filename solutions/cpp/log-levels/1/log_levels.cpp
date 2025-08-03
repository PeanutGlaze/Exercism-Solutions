#include <string>

namespace log_line {
std::string message(std::string line) {
    return line.substr(line.find("]: ") + 3);
    // return the message
}

std::string log_level(std::string line) {
    return line.substr(line.find("[") + 1, line.find("]") - 1);
    // return the log level
}

std::string reformat(std::string line) {
    // return the reformatted message
    return line.substr(line.find("]: ") + 3) +
        " (" + line.substr(line.find("[") + 1, line.find("]") - 1) + ")";
}
}  // namespace log_line
