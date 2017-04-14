#include "ms1100.h"


/*
	获取甲醛浓度
*/
double ms1100::getFormaldehydeConcentration(int sensorPin)
{
	//wait before inquery
	delay(5);
	//读取模拟输入量
	int val = analogRead(sensorPin);
	//转换成电压
	double voltage = val * (5 / 1023);
	//根据电压计算出气体浓度
	double logTemp = (-2.631) + 1.528 * voltage + (-0.125) * voltage * voltage;
	//返回浓度值
	return pow(10, logTemp);
}

/*
*	获取甲苯浓度
*/
double ms1100::getTolueneConcentration(int sensorPin)
{
	//wait before inquery
	delay(5);
	//读取模拟输入量
	int val = analogRead(sensorPin);
	//转换成电压
	double voltage = val * (5 / 1023);
	//根据电压计算出气体浓度
	double logTemp = (-7.071) + 2.852 * voltage + (-0.210) * voltage * voltage;
	//返回浓度值
	return pow(10, logTemp);
}


