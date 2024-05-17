#include <bits/stdc++.h>
#include "Server.h"

using namespace std;

    Server::Server()
    {
        nUsers = 0;
        userList.resize(0);
    }

    void Server::printUserList()
    {
        for(auto x : userList)
        {
            cout << x.getuserID() << ' ' << x.getuserName() << ' ' << x.getpubKey() << '\n';
        }
    }

    bool Server::userIsAlreadyRegistered(int uid)
    {
        for(auto x : userList)
        {
            if(x.getuserID() == uid) return true;
        }
        return false;
    }

    void Server::addUser(int uid, string uname, int pubkey)
    {
        UserDetail deet(uid, uname, pubkey);
        userList.push_back(deet);
        nUsers++;
    }

    bool Server::usernameAlreadyExists(string uname)
    {
        for(auto x : userList)
        {
            if(x.getuserName() == uname) return true;
        }
        return false;
    }

    int Server::getPubKey(string uname)
    {
        for(auto x : userList)
        {
            if(x.getuserName() == uname)
            {
                return x.getpubKey();
            }
        }
        return -1;
    }
