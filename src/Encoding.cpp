#define WIN32_LEAN_AND_MEAN
#define _HAS_STD_BYTE 0 

#include<windows.h>
#include<curl/curl.h>

#include"../include/Encoding.h"
#include<iostream>

using namespace std;

string encodingData(const string& data) {
    CURL *curl;
    string result;
    curl = curl_easy_init();
    if(curl) {
        char* encoded = curl_easy_escape(curl, data.c_str(), 0);
        if(encoded) {
            result = string(encoded);
            curl_free(encoded);
        }
        curl_easy_cleanup(curl);
    }
    return result;
}