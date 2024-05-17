#include <bits/stdc++.h>
#include "Device.h"

using namespace std;

    Device::Device()
    {
        deviceID = -1;
        user = nullptr;
        PIN = -1;
    }

    Device::Device(int did, User *u = nullptr, int pin = -1)
    {
        deviceID = did;
        user = u;
        PIN = pin;
    }

    void Device::RegisterRequest(string uname, Server &ser)
    {
        if(ser.usernameAlreadyExists(uname))
        {
            cout << "Username not available!\n";
        }
        else
        {
            int uid = user->getUID();
            if(ser.userIsAlreadyRegistered(uid))
            {
                cout << "User " << uid << " is already registered!\n";
            }
            else
            {
                int pvtkey = 1 + (rand()%10000);
                int pubkey = 10001 - pvtkey;
                user->setPvtKey(pvtkey);
                user->setUName(uname);
                ser.addUser(uid, uname, pubkey);
                cout << "Registration succesful! Username: " << uname << " User ID: " << uid << '\n';
            }
        }
    }

    void Device::login(string uname, Server &ser, int pin)
    {
        if(!ser.usernameAlreadyExists(uname))
        {
            cout << "No such user exists!\n";
        }
        else
        {
            if(PIN != pin)
            {
                cout << "Entered PIN is wrong!\n";
            }
            else
            {
                int pvtkeyFromServer = 10001 - ser.getPubKey(uname);
                if(pvtkeyFromServer == user->getPvtKey())
                {
                    cout << "Login successful!\n";
                }
                else
                {
                    cout << "Login failed, incorrect username!\n";
                }
            }
        }
    }
