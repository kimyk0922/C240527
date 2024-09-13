#pragma once

#include "Actor.h"

class FTriangle : public FActor
{
public:

	FTriangle();
	virtual~FTriangle() override;



	

	// Inherited via FActor
	void AActor() override;

};

