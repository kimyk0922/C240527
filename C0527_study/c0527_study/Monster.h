#pragma once
class FMonster
{
	
public:

	FMonster();
	~FMonster();


	virtual void Move();		//	Parent���� ã���� �� ���ٸ� Child���� ã�� ���.
	void Attack();				//	virtual function table.
	void Gotcha();				//	virtual�� ��� �� ���� Child �������Ե� 
								//	virtual�� ������ְ� ���� override; �� �ٿ��ش�. (��� Move() ����)

	void SetGold(int NewGold);



protected:				//	��ȣ�ϴ�

	int HP;
	int Gold;

	void Die();

};

