#include "./include/my_alloc.h"
#include<iostream>
using namespace std;
int main(int argc,char* argv[]) {
    if(argc!=2){
        cout<<"Usage of <filename.txt> as command line argument"<<endl;
        return 1;
    }
    string fileName(argv[1]);
    std::ifstream file(fileName); // Assuming the file contains a single integer "n"
    int n;
    string line;
    if (file.is_open()) {
        while(getline(file,line)){
            n=stoi(line);
            int result = my_alloc(n);
            if (result) {
                std::cout << "Allocation succeeded!" << line<<std::endl;
            } else {
                std::cout << "Allocation failed!" << std::endl;
            }
        }
        file.close();
    } else {
        std::cerr << "Error opening the file." << std::endl;
        return 1;
    }
    
    
    return 0;
}

// int main() {
//     std::ifstream file("input.txt");
//     std::string line;

//     if (file.is_open()) {
//         while (getline(file, line)) {
//             try {
//                 int n = std::stoi(line);
//                 int result = my_alloc(n);
//                 if (result) {
//                     std::cout << "Allocation for " << n << " integers succeeded!" << std::endl;
//                 } else {
//                     std::cout << "Allocation for " << n << " integers failed!" << std::endl;
//                 }
//             } catch (const std::invalid_argument& e) {
//                 std::cerr << "Invalid argument: " << e.what() << std::endl;
//             }
//         }
//         file.close();
//     } else {
//         std::cerr << "Error opening the file." << std::endl;
//     }

//     return 0;
// }
