#pragma once
#include <Block.h>
class ZBlock
	: public Block
{
public:
	ZBlock(bool h);
	~ZBlock();
	virtual void rotateClock(std::vector <std::vector<bool>> const grid);
	virtual void rotateCounter(std::vector <std::vector<bool>> const grid);
};

