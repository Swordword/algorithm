#include "common.h"
#include "1603.设计停车系统.cpp"

int main()
{

  ParkingSystem parkingSystem = new ParkingSystem(1, 1, 0);
  parkingSystem.addCar(1); // 返回 true ，因为有 1 个空的大车位
  parkingSystem.addCar(2); // 返回 true ，因为有 1 个空的中车位
  parkingSystem.addCar(3); // 返回 false ，因为没有空的小车位
  parkingSystem.addCar(1);

  return 0;
}