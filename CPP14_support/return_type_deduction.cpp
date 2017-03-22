#include <vector>
#include <cassert>
#include <iostream>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++1z-extensions"

auto prev_vec() {
    std::vector<double> vec;

    vec.push_back(2016.3);
    return vec;
}

void cur_vec() {
    auto v = prev_vec();

    v.push_back(2017.1);
}


auto returnsInt(int& i)
{
    return i;
}

decltype(auto) returnsIntRef(int& i)
{
    return i;
}
auto returnsIntRef2(int& i) -> decltype(auto)
{
    return i;
}

template<typename T>
auto returnsT() -> decltype(T()) {
    return T();
}

template<typename T>
auto returnsT2() -> T {
    return T();
}

void testReturnTypeDeduction() {

    std::cout << "testing return type deduction" << std::endl;
    
    int i = 7;
    auto justAnInt = returnsInt(i);
    auto justAnInt2 = returnsIntRef(i); // auto infers int
    decltype(auto) intRef = returnsIntRef(i); // decltype(auto) infers int&
    decltype(auto) intRef2 = returnsIntRef2(i);

    auto t = returnsT<int>();
    auto t2 = returnsT2<int>();

    static_assert(std::is_same<decltype(t), int>::value);
    static_assert(std::is_same<decltype(t2), int>::value);

    i = 42;
    assert(justAnInt == 7);
    assert(justAnInt2 == 7);
    assert(intRef == 42);
    assert(intRef2 == 42);

    assert(t == 0);
    assert(t2 == 0);

    std::cout << "... all good" << std::endl;
}

int main() {
    testReturnTypeDeduction();
}

#pragma clang diagnostic pop