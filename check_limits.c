#include <stdio.h>
#include <assert.h>
#include "check_limits.h"

int Check_Temperature_Range(float temp_in_celcius)
{
  if((temp_in_celcius <= Low_temp_limit) || (temp_in_celcius >= High_temp_limit)) 
  {
    printf("Temperature out of range!\n");
    return 0;
  }
  else
    return 1;
}

int Check_SOC_Range(float soc_value)
{
  if((soc_value <= soc_lower_limit) || (soc_value >= soc_upper_limit)) 
  {
    printf("State of Charge out of range!\n");
    return 0;
  }
  else
    return 1;
}

int Charge_Rate_Limit(float chargeRate)
{
  if(chargeRate <= chargeRate_threshold) 
  {
    printf("Charge Rate out of range!\n");
    return 0;
  }
  else
    return 1;
}

int batteryIsOk(float battery_temp, float soc, float ChargeRate) 
{    
   return (Check_Temperature_Range(battery_temp) && Check_SOC_Range(soc) && Charge_Rate_Limit(ChargeRate));
}

int Battery_Range_Check(float battery_temp, float soc_val, float charge_rate)
{
    int range_check = batteryIsOk(battery_temp, soc_val, charge_rate);
    if(range_check)
   { 
     printf("\n Battery Status is Ok!");
     return 1;
   }
  else
  {
    printf("\n Battery Not Ok!");
    return 0;
  }
}
    
void test_battery_status(int expectedRange, float actual_temperature, float actual_soc, float actual_charge, int (*fnPtrForCheckBatteryStatus)(float,float,float))
{ 
   int battery_status = fnPtrForCheckBatteryStatus(actual_temperature, actual_soc, actual_charge);
   assert (battery_status == expectedRange);
}
