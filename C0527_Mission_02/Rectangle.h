#pragma once

#include "Actor.h"

class FRectangle : public FActor
{
	
public:

	FRectangle();
	virtual	~FRectangle() override;


	

	// Inherited via FActor
	void AActor() override;

};

