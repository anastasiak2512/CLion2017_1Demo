#include <string>
#include <iostream>

template<typename F>
void call(F&& f)
{
    auto f1 = std::forward<F>(f);
    f1();
}

void call_sample()
{
    auto str = std::make_unique<std::string>("CLion 2017.1 released!");
    auto lambda = [strCapture = std::move(str)]() {
        std::cout << *strCapture << std::endl;
    };
    call(std::move(lambda));
}
