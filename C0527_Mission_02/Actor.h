#pragma once


class FActor
{

	public:

		FActor();
		virtual ~FActor();				//	�߻� class

		virtual void AActor() = 0;		//	virtual�� = 0;�� �ٿ��ָ� ���� ���� �Լ���
										//	���� ���ִ°�. (Pointers�θ� ����Ҷ� ���)
										//	Child class���� ���ض� , �ش� class������ �ν��Ͻ� �Ұ�

};

