#include <iostream>

int main(int argc, char* argv[]) {

    std::cout << "argc: " << argc << std::endl;
    std::cout << "argv[0]: " << argv[0] << std::endl;

    if (argc == 1) {
        std::cout <<"No arguments were passed. Run this program with command prommt adding arguments i.e: "<< std::endl;
        std::cout << "Run this program with command prommt adding arguments i. e:" << std::endl;
        std::cout << ".\\hello_world.exe Andrew Monika Moto" << std::endl;
    }
    else {
        std::cout << "Arguments:\n";

        for (int i = 1; i < argc; ++i) {
            std::cout << "Hello, " << argv[i] << "!" << std::endl;
        }
    }

    return 0;
}