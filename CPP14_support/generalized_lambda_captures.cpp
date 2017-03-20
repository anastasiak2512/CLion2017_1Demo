
void lambda_capture() {
    int x = 4;
    auto y = [&r = x, x = x + 1]() -> int {
        r += 2;
        return x + 2;
    }();
}

