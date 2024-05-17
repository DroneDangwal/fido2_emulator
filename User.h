#include <bits/stdc++.h>
using namespace std;

#pragma once

class User
{
  private:
    int userID;
    string username;
    int nDevices;
    int pvtKey;
    vector<int> devices;

  public:
    User();

    User(int uid, int nd, vector<int> devs);

    int getUID()
    {
        return userID;
    }

    string getuserName()
    {
        return username;
    }

    int getPvtKey()
    {
        return pvtKey;
    }

    void setPvtKey(int pkey)
    {
        pvtKey = pkey;
    }

    void setUName(string uname)
    {
        username = uname;
    }

    void addDevice(int did);

};
