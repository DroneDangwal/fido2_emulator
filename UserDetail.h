#include <bits/stdc++.h>
using namespace std;

#pragma once

class UserDetail
{
  private:
    int userID;
    string username;
    int publicKey;

  public:
    UserDetail();

    UserDetail(int uid, string uname, int pkey);

    int getuserID()
    {
        return userID;
    }

    string getuserName()
    {
        return username;
    }

    int getpubKey()
    {
        return publicKey;
    }
};
