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

    cout << "Checking if isoupdate.yml exists...";
    if (boost::filesystem::is_regular_file("isoupdate.yml")) {
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
        cerr << "Create a isoupdate.yml based on the git version" << endl;
        return 1;
    }

    return 0;
}