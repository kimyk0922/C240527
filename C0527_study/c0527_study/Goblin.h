#pragma once

#include"Monster.h"

//		Child			Parent
class FGoblin :public FMonster
{

public:

	FGoblin();							//	class �ʼ� ���
	virtual ~FGoblin();					//	

	void Jump();

	virtual void Move() override;		// virtual�� ��� �� ���� Child �������Ե� 
										// virtual�� ������ְ� ���� override; �� �ٿ��ش�
										//	override = ������ (��� ��� ��� cpp ����)

};
