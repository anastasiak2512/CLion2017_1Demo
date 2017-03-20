#include <vector>
#include <iostream>

void search_sample() {
    std::vector<int> myvector;

    myvector.push_back(29);
    myvector.push_back(3);
    myvector.push_back(2017);
    myvector.push_back(1);

    std::vector<int>::iterator it = std::find_if (myvector.begin(), myvector.end(),
                                                  [](int i){return ((i%2) == 1);});
    std::cout << "The first odd value is " << *it << 'n';
}

