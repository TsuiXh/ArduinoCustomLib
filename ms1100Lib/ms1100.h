#pragma once
#ifndef ms1100
#define ms1100


#if defined(ARDUINO) && (ARDUINO >= 100)
#include <Arduino.h>
#endif

#define MS1100LIB_VERSION "1.0"
/*
	MS1100 VOC SENSOR CUSTOM LIBRARY
	AUTHOR:	TsuiXh
	MAIL:	smartcyh@hotmail.com
	TIME:	2017/4/7 18:08
*/
class ms1100
{
public:
	/*
	 *	获取甲醛浓度
	*/
	double getFormaldehydeConcentration(int sensorPin);
	/*
	 *	获取甲苯浓度
	*/
	double getTolueneConcentration(int sensorPin);
};
#endif // !ms1100

