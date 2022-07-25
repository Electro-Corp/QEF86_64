#ifndef COMMON_H
#define COMMON_H
#include <cstdlib>
#include <cstring>
#include <memory>
#include <stdexcept>
#include <array>
//template <class commonutils>
std::string execcommandwithreturn(const char* cmd) {
    std::array<char, 128> buffer;
    std::string result;
    std::unique_ptr<FILE, decltype(&pclose)> pipe(popen(cmd, "r"), pclose);
    if (!pipe) {
        throw std::runtime_error("popen() failed!");
    }
    while (fgets(buffer.data(), buffer.size(), pipe.get()) != nullptr) {
        result += buffer.data();
    }
    return result;
}

#endif // COMMON_H
