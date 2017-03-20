#include <chrono>
#include <iostream>

int main() {
    auto now = std::chrono::system_clock::now();

    std::cout << "hours since epoch: "
              << std::chrono::duration_cast<std::chrono::hours>(now.time_since_epoch()).count()
              << std::endl;
}

