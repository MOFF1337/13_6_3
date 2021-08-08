#include <iostream>
#include <vector>

int main() {

    int temp = 0;
    std::cout << "Input the number: ";
    std::cin >> temp;
    std::vector<int> vec;

    while (temp != -1) {
        if (vec.size() == 20) {
            vec.erase(vec.begin());
        }
        vec.push_back(temp);
        std::cout << "Input the number: ";
        std::cin >> temp;
    }
    for(int i = 0; i < 20; i++){
        std::cout << vec[i] << " ";
    }

}
