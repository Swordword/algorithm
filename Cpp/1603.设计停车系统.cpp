/*
 * @lc app=leetcode.cn id=1603 lang=cpp
 *
 * [1603] 设计停车系统
 */

// @lc code=start
class ParkingSystem
{
public:
    ParkingSystem(int big, int medium, int small) : bigData(big), mediumData(medium), smallData(small){};

    bool addCar(int carType)
    {
        switch (carType)
        {
        case 1:
            return (--bigData) >= 0;
        case 2:
            return (--mediumData) >= 0;
        case 3:
            return (--smallData) >= 0;
        default:
            return false;
        }
    }

private:
    int bigData, mediumData, smallData;
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */
// @lc code=end
