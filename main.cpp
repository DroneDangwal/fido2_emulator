#include <bits/stdc++.h>
#include "Device.h"
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<User *> allUsers;
    map<int, Device *> devMap;
    for(int i = 0; i < N; i++)
    {
        int uid;
        cin >> uid;
        int nDev;
        cin >> nDev;
        vector<int> devs;
        vector<int> pins;
        for(int j = 0; j < nDev; j++)
        {
            int devid, devpin;
            cin >> devid >> devpin;
            devs.push_back(devid);
            pins.push_back(devpin);
        }
        User *ptr = new User(uid, nDev, devs);
        allUsers.push_back(ptr);
        for(int j = 0; j < nDev; j++)
        {
            devMap[devs[j]] = new Device(devs[j], ptr, pins[j]);
        }
    }

    Server ser;

    char op;
    cin >> op;
    while(op != 'X')
    {
        if(op == 'R')
        {
            int did;
            string uname;
            cin >> uname >> did;
            if(devMap.find(did) == devMap.end())
            {
                cout << "Device not found!\n";
            }
            else
            {
                Device *D = devMap[did];
                D->RegisterRequest(uname, ser);
            }
        }
        else if(op == 'P')
        {
            ser.printUserList();
        }
        else if(op == 'L')
        {
            int did, pin;
            string uname;
            cin >> uname >> did >> pin;
            Device *D = devMap[did];
            D->login(uname, ser, pin);
        }

        cin>>op;
    }

}
