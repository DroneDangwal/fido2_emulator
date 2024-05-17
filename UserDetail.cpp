#include <bits/stdc++.h>
#include "UserDetail.h"

using namespace std;

    UserDetail::UserDetail()
    {
        userID = -1;
        username = "";
        publicKey = -1;
    }

    UserDetail::UserDetail(int uid, string uname, int pkey)
    {
        userID = uid;
        username = uname;
        publicKey = pkey;
    }
