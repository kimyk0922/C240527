#pragma once
class FMonster
{
	
public:

	FMonster();
	~FMonster();


	virtual void Move();		//	Parent에서 찾았을 시 없다면 Child에서 찾아 사용.
	void Attack();				//	virtual function table.
	void Gotcha();				//	virtual을 사용 할 때는 Child 변수에게도 
								//	virtual을 사용해주고 끝에 override; 를 붙여준다. (고블린 Move() 참고)

	void SetGold(int NewGold);



protected:				//	보호하다

	int HP;
	int Gold;

	void Die();

};

