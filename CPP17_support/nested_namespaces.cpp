#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++1z-extensions"

namespace First::Second {
    typedef int T;

    struct data {
        T bar() { return 0; }
    };
}

namespace CurrentNamespace = First::Second;

void check() {
    CurrentNamespace::data d;
    d.bar();
}

#pragma clang diagnostic pop