#pragma once
#include "commendDeco.h"
class levelUpcmd :
	public commendDeco
{
public:
	levelUpcmd(absCommend* c);
	~levelUpcmd();
	Board* execute();
};

