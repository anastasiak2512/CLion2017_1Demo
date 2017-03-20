class MyClass {} mc;

typedef int (*callback)(int x);

void test() {
    callback l3 = [](auto p) {
//        MyClass mc = p;
        return p;
    };
}
