#include "../include/FormFiller.h"
#include "../include/NetworkClient.h"
#include <iostream>
#include<thread>
#include<chrono>

using namespace std;

// ==========================================
// THỰC THI: LỚP LÕI
// ==========================================
void startAutomation(const vector<Student>& studentList) {
    
    std::string targetUrl = "https://docs.google.com/forms/d/e/1FAIpQLSefaw5egWUaNP9PFhR12RrRFwG0DIx_JPknS7PqOoiG1Qtgpg/formResponse";

    int length = studentList.size();

    for (int i = 0; i < length; i++){
        string payload = "entry.1994791727=" + studentList[i].name + "&entry.851025604=" + studentList[i].mssv;

        cout << "Dang dien form cho sinh vien thu " << i << endl;

        sendPostRequest(targetUrl, payload);

        this_thread::sleep_for(chrono::seconds(2));
    }
}