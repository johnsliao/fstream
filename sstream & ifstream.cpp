// learning about ifstream/sstream
// 11/29/15

#include <iostream>
#include <fstream>

int main() {
    
    int num, num2, num3;
    
    std::fstream someFile("numbers.txt");
    
    while (someFile >> num >> num2) {
        std::cout << num << std::endl;
    }
    
    return 0;
}