#include <iostream>
#include "Window.h"

float GetInterpolatedPosition(float start, float end, float t)
{
	//�Լ��� ������ �����Ͻÿ�.
}

int main()
{
	//-------------���� �Լ�--------------------------------
	//���� : �� �� ���̸� �ݺ��ؼ� �̵��ϴ� ���� ������� �մϴ�. 
	//�̸� ���� ���� �Լ��� �����մϴ�. ���� �Լ��� ���� ���ǵ� 
	//�Ͱ� �����ϴ�.(GetInterpolatedPosition)
	//�� �Լ��� ������ġ, �� ��ġ �� �Ķ���� t�� �޾� ��ġ�� ����Ͽ� ��ȯ�մϴ�.
	//���� ���� �Ʒ��� �����ϴ�.
	// : start * (1.0f - t) + end * t;
	//���� t�� 0�϶��� ���� ��ġ, 1�϶��� �� ��ġ, 0.5�϶��� �߰� ��ġ�� ��ȯ�մϴ�.
	//�Ʒ� main �Լ����� ���� �Լ��� ����Ͽ� �� �� ���̸� ����ؼ� �Դٰ����ϵ���
	//����� ������.

	Window myWindow("JBNU C++", 600, 600); //������ ����

	float t = 0;
	float tChangeSpeed = 0.01f;
	float startX = 100;
	float startY = 100;
	float endX = 200;
	float endY = 150;

	while (myWindow.IsRunning()) //�����찡 ���� ���� ���� �ݺ�
	{
		myWindow.CheckClosed(); //�����찡 ����Ǿ����� Ȯ��
		myWindow.Clear(); //ȭ���� �����

		//�ݺ��� ���࿡ ���� t���� �ٲٰ�, GetInterpolatedPosition�� �� ��° ���ڷ� �����Ͽ�
		//���ο� X,Y ��ġ�� ��� ���� �ǵ��ϴ� ��ġ�� �׸��ÿ�.


		//---------------------------------------------------------
		myWindow.Show(); //�׸� ����� �����ֱ�
	}
}