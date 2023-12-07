//by Shubh
#include <iostream>
#include <list>

int main() {
    // Creating two lists
    std::list<int> list1 = {1, 2, 3};
    std::list<int> list2 = {4, 5, 6};

    // Combining lists
    list1.insert(list1.end(), list2.begin(), list2.end());

    // Outputting the combined list
    std::cout << "Combined List: ";
    for (int element : list1) {
        std::cout << element << " ";
    }
    std::cout << std::endl;

    return 0;
}
