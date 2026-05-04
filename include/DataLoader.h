#pragma once
#include<vector>
#include<string>

using namespace std;

struct Student {
    string name;
    string mssv;
};

vector<Student> readCSV(const string& path_file);