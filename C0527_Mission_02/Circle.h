#pragma once

#include "Actor.h"

class FCircle :public FActor
{

public:

	FCircle();
	virtual ~FCircle() override;




	// Inherited via FActor
	void AActor() override;

};

