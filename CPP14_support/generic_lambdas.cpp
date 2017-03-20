class MyClass {} mc;

typedef int (*callback)(double x);

void test() {
    callback l3 = [](auto p) {
        MyClass mc = p;
        return p;
    };
}
