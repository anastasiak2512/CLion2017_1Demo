
#include <experimental/tuple>

template<class F, class...Args>
auto forward_capture(F &&f, Args &&...args) {
    return [f = std::forward<F>(f),
            tup = std::make_tuple(std::forward<Args>(args)...)]
    {
        return std::experimental::apply(f, tup);
    };
}

