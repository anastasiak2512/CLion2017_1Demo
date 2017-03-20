#include <vector>

auto prev_vec() {
    std::vector<double> vec;

    vec.push_back(2016.3);
    return vec;
}

void cur_vec() {
    auto v = prev_vec();

    v.push_back(2017.1);
}

