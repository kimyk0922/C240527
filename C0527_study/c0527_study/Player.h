#pragma once
class FPlayer
{

public:					//	접근지정자

	FPlayer();
	~FPlayer();



//======interface=======

	void Move();
	void Attack();
	void Gotcha();

//======accessor=========

	int GetGold();

//======mutator==========


	void SetGold(int NewGold);




private:				//	사적인 , 특정 함수 내에서만 사용할 수 있는 기능 , public과 반대
						//	Encapsulation : 객체 지향의 특징 , 정보 은닉 
	int HP;
	int Gold;

	void Die();

};


//				
//
//				|	상속		|	외부 사용(캡슐화)
//	public		|	 O		|			O
//	protected	|	 O		|			X
//	private		|	 X		|			X
//
//
//
//
//