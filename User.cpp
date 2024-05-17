#include <bits/stdc++.h>
#include "User.h"

using namespace std;

    User::User()
    {
        userID = -1;
        username = "";
        nDevices = -1;
        pvtKey = -1;
        devices.resize(0);
    }

    User::User(int uid, int nd, vector<int> devs)
    {
        userID = uid;
        username = "";
        nDevices = nd;
        pvtKey = -1;
        devices = devs;
    }

    void User::addDevice(int did)
    {
        devices.push_back(did);
        nDevices++;
    }
