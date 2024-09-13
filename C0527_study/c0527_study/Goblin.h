#pragma once

#include"Monster.h"

//		Child			Parent
class FGoblin :public FMonster
{

public:

	FGoblin();							//	class 필수 양식
	virtual ~FGoblin();					//	

	void Jump();

	virtual void Move() override;		// virtual을 사용 할 때는 Child 변수에게도 
										// virtual을 사용해주고 끝에 override; 를 붙여준다
										//	override = 재정의 (사용 방식 고블린 cpp 참고)

};
