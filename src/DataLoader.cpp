#include "../include/DataLoader.h"
#include "../include/Encoding.h"
#include <iostream>
#include <fstream>

using namespace std;

vector<Student> readCSV(const string& filePath) {
    vector<Student> result;
    ifstream data_file(filePath);
    if(!data_file.is_open()) {
        cout<< "File khong ton tai";
        return result;
    }

    string line;
    
    while(getline(data_file, line)){
        size_t commaPos = line.find(',');
        Student s;
        s.name = encodingData(line.substr(0, commaPos));
        s.mssv = encodingData(line.substr(commaPos + 2));
        result.push_back(s);
    }
    data_file.close();
    return result; // Placeholder
}