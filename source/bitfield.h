#pragma once
#include <iostream>
#include <stdlib.h>
using namespace std;

typedef unsigned int TELEM;

class TBitField {
private:
	int BitLen;
	TELEM* pMem;
	int MemLen;
	int GetMemIndex(const int n) const;
	TELEM GetMemMask(const int n) const;
public:
	TBitField(int len);
	TBitField(const TBitField& b);
	~TBitField();
	int GetpMem(void) const;
	int GetLenght(void) const;
	void SetBit(const int n);
	void ClrBit(const int n);
	int GetBit(const int n) const;

	int operator==(const TBitField& bf);
	TBitField& operator= (const TBitField& bf);
	TBitField operator| (const TBitField& bf);
	TBitField operator& (const TBitField& bf);
	TBitField operator~ (void);
	friend istream& operator >> (istream& istr, TBitField& bf);
	friend ostream& operator << (ostream& ostr, const TBitField& bf);
};