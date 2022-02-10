#include "check_limits.h"

int main() 
{
  void (*fnPtrForCheckBatteryStatus)(float,float,float) = batteryIsOk;
  int (*fnPtrForRange_Check)(float,float,float) = Battery_Range_Check;
  
  test_battery_status(1, 45, 63, 0.5);
  test_battery_status(0, 54, 90, 0.9);
}
