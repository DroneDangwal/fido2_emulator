#include <bits/stdc++.h>
#include "UserDetail.h"
using namespace std;

#pragma once

class Server
{
  private:
    int nUsers;
    vector<UserDetail> userList;

  public:

    Server();

    void printUserList();

    bool userIsAlreadyRegistered(int uid);

    void addUser(int uid, string uname, int pubkey);

    bool usernameAlreadyExists(string uname);

    int getPubKey(string uname);

};
