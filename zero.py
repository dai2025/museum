"""
#include <iostream>
#include <cmath>

int main() {
    double positive_zero = 0.0;
    double negative_zero = std::signbit(-0.0) ? -0.0 : 0.0;

    std::cout << "+0 = " << positive_zero << std::endl;
    std::cout << "-0 = " << negative_zero << std::endl;

    if (positive_zero == negative_zero) {
        std::cout << "+0 and -0 are equal" << std::endl;
    } else {
        std::cout << "+0 and -0 are not equal" << std::endl;
    }

    return 0;
}
//    auto bit = static_cast<int>(positive_zero) ^ static_cast<int>(negative_zero);
//    std::cout << bit << "\n";
//    auto bit2 = positive_zero ^ negative_zero;
//    std::cout << bit2 << "\n";
"""
import math

def check_zero(num):
    if num == 0 and math.copysign(1, num) == 1:
        print("+0")
    elif num == 0 and math.copysign(1, num) == -1:
        print("-0")
    else:
        print("Not zero")

num = -0.0
check_zero(num)
num = False
check_zero(num)
num = None
check_zero(num)
