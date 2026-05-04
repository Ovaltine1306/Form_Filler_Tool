#define WIN32_LEAN_AND_MEAN
#define _HAS_STD_BYTE 0   // 🔥 fix xung đột std::byte

#include <windows.h>     // include trước
#include <curl/curl.h>

#include "../include/NetworkClient.h"
#include <iostream>

using namespace std;

bool sendPostRequest(const string& url, const string& payload) {
    CURL *handle;
    CURLcode result;

    handle = curl_easy_init();

    if(!handle) {
        cout << "HTTP request failed" << endl;
        return false;
    }

    curl_easy_setopt(handle, CURLOPT_URL, url.c_str());

    curl_easy_setopt(handle, CURLOPT_POSTFIELDS, payload.c_str());

    result = curl_easy_perform(handle);

    if(result != CURLE_OK) {
        cout << "[LOI] " << curl_easy_strerror(result) << endl;
        return false;
    }

    curl_easy_cleanup(handle);
    return true;
}