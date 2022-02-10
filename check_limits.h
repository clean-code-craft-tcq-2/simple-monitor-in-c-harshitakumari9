#include <stdio.h>

#define Low_temp_limit         (float)0U
#define High_temp_limit        (float)45U

#define soc_lower_limit        (float)20U
#define soc_upper_limit        (float)80U

#define chargeRate_threshold   (float)0.8

int Check_Temperature_Range(float);
int Check_SOC_Range(float);
int Charge_Rate_Limit(float);
int batteryIsOk(float, float, float);

int Battery_Range_Check(float, float, float, int);
void test_battery_status(int, float, float, float, int (*fnPtrForCheckBatteryStatus)(float,float,float));
