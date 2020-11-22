#pragma once
#include "bitfield.h"
using namespace std;

class TSet {
private:
	int MaxPower;
	TBitField BitField;
public:
	TSet(int mp);
	TSet(const TSet& s);
	TSet(const TBitField& bf);
	operator TBitField();

	int GetMaxPower(void) const;
	void InsElem(const int n);
	void DelElem(const int n);
	int IsMember(const int n) const;
	int GetpMem2(void) const;
	int operator==(const TSet& s);
	TSet& operator=(const TSet& s);
	TSet operator+ (const int n);
	TSet operator- (const int n);
	TSet operator+ (const TSet& s);
	TSet operator* (const TSet& s);
	TSet operator~ (void);
	friend istream& operator>>(istream& istr, TSet& bf);
	friend ostream& operator<<(ostream& ostr, const TSet& bf);
}; 
