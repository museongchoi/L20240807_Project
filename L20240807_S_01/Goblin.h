#pragma once
#include "Actor.h"

class AGoblin : public AActor
{
public:
	AGoblin();
	~AGoblin();

	virtual void Move() override;

};

