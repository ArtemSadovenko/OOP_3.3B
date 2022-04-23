#pragma once
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

class Pair
{
private:
	long high;
	long low;
public:
	void set_high(long a) { high = a; }
	void set_low(long  a) { low = a; }

	long get_high() { return high; }
	long get_low() { return low; }

	Pair();
	Pair(long a, long b);
	Pair(Pair&a);
	~Pair();
};

