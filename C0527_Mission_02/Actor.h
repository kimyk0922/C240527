#pragma once


class FActor
{

	public:

		FActor();
		virtual ~FActor();				//	추상 class

		virtual void AActor() = 0;		//	virtual에 = 0;을 붙여주면 순수 가상 함수라
										//	정의 해주는것. (Pointers로만 사용할때 사용)
										//	Child class에서 구해라 , 해당 class에서는 인스턴스 불가

};

