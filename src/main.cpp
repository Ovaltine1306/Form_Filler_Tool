#include "../include/DataLoader.h"
#include "../include/FormFiller.h"
#include <iostream>

using namespace std;

int main() {
    cout << "[INFO] Dang khoi dong cong cu...\n";

    vector<Student> Data;
    Data = readCSV("data/input.csv");

    startAutomation(Data);
    
    // 1. Nạp dữ liệu đầu vào
    
    // 2. Kích hoạt tiến trình Auto Fill
    
    cout << "[INFO] Hoan thanh toan bo tien trinh!\n";
    return 0;
}