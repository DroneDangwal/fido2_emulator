#include <bits/stdc++.h>
#include "Server.h"
#include "User.h"
using namespace std;

#pragma once

class Device
{
  private:
    int deviceID;
    User *user;
    int PIN;

  public:
    Device();
    
    Device(int did, User *u, int pin);

    int getPIN()
    {
        return PIN;
    }

    User *getUser()
    {
        return user;
    }

    void setPIN(int pin)
    {
        PIN = pin;
    }

    void setUser(User *u)
    {
        user = u;
    }

    void RegisterRequest(string uname, Server &ser);

    void login(string uname, Server &ser, int pin);

};
