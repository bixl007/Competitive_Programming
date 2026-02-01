#include <bits/stdc++.h>
using namespace std;

class RideSharingSystem
{
public:
    unordered_set<int> st;
    queue<int> rider, driver;
    RideSharingSystem()
    {
    }

    void addRider(int riderId)
    {
        rider.push(riderId);
        st.insert(riderId);
    }

    void addDriver(int driverId)
    {
        driver.push(driverId);
    }

    vector<int> matchDriverWithRider()
    {
        while (!rider.empty())
        {
            if (st.find(rider.front()) != st.end())
                break;
            rider.pop();
        }

        vector<int> res = {-1, -1};
        if (rider.empty() || driver.empty())
            return res;

        res[1] = rider.front();
        res[0] = driver.front();

        rider.pop();
        driver.pop();

        return res;
    }

    void cancelRider(int riderId)
    {
        if (st.find(riderId) != st.end())
            st.erase(riderId);
    }
};

/**
 * Your RideSharingSystem object will be instantiated and called as such:
 * RideSharingSystem* obj = new RideSharingSystem();
 * obj->addRider(riderId);
 * obj->addDriver(driverId);
 * vector<int> param_3 = obj->matchDriverWithRider();
 * obj->cancelRider(riderId);
 */