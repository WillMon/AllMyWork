#ifndef _HEADER_H_
#define _HEADER_H_

#include <iostream>
using namespace std;

template <typename T>
class Tepms
{
public:
	T Min(T, T);
	T Max(T, T);
	T Clamp(T, T, T);
	T AlphaMin (T, T);
	T AlphaMax(T, T);


};

template <typename T>
T Tepms<T>::Min(T a, T b)
{

	if (a < b)
		return a;
	else if ( a < b)
		return b;
}

template <typename T>
T Tepms<T>::Max(T a, T b)
{
	if (a > b)
		return a;
	else if (a < b)
		return b;
}

template <typename T>
T Tepms<T>::Clamp(T min, T max, T val)
{
	val = ((min - val) / (max - val));
	return val;
}

template <typename T>
T Tepms<T>::AlphaMin(T a, T b)
{
	if (a < b)
		return a;
	else if (a > b)
		return b;
}

template <typename T>
T Tepms<T>::AlphaMax(T a, T b)
{
	if (a > b)
		return a;
	else if (a < b)
		return b;
}
#endif
