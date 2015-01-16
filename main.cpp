#include <stdio.h>
#include <string>
#include <curl/curl.h>
#include <iostream>
#include <boost/filesystem.hpp>


using namespace std;

int main() {
    cout << "Zalman VE-300 _iso updater v0.1" << endl;
    cout << "Checking if _iso exists...";
    if (boost::filesystem::is_directory("_iso")) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
        cout << "Creating _iso directory...";
        boost::filesystem::create_directories("_iso");
        cout << "DONE" << endl;
    }


    return 0;
}