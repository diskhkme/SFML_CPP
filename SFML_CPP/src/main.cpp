#include <iostream>
#include "Window.h"

float GetInterpolatedPosition(float start, float end, float t)
{
	//���� ���� �Լ� 1�� ���� ����� Ȱ���ϼ���.
}

float GetCurrentPositionInRoute(const float route[], int currentRoute, float t)
{
	//GetCurrentPositionInRoute ���ο��� GetInterpolatedPosition �Լ��� Ȱ���ϸ� ȿ�����Դϴ�.
}

int main()
{
	//-------------���� �Լ� 2--------------------------------
	//���� : ���� ������ �ݺ��ؼ� �̵��ϴ� ���� ������� �մϴ�. 
	//�̸� ���� ���� ���� �Լ��� ���ο��� ȣ���� ���� ���� ��ġ�� ����ϴ� �Լ���
	//GetCurrentPositionInRoute�� �����ϼ���.
	//�� �Լ��� ������ �� ��ġ �迭, ���� ���� �� �Ķ���� t�� �޾� ��ġ�� �����մϴ�.
	//���� ��� currentRoute�� 1�̶��, xRoute[1]�� ����������, xRoute[2]���� �̵��մϴ�.
	//�Ʒ� main �Լ����� ���ο� ���� �Լ��� ����Ͽ� ���� ������ ����ؼ� �̵��ϵ���
	//����� ������.

	Window myWindow("JBNU C++", 600, 600); //������ ����

	float t = 0;
	float tChangeSpeed = 0.01f;
	float xRoute[] = { 0, 600, 300, 0 };
	float yRoute[] = { 0, 300, 100, 50 };
	int currentRoute = 0;

	while (myWindow.IsRunning()) //�����찡 ���� ���� ���� �ݺ�
	{
		myWindow.CheckClosed(); //�����찡 ����Ǿ����� Ȯ��
		myWindow.Clear(); //ȭ���� �����

		// t�� tChangeSpeed�� ����ؼ� ���� ����(currentRoute)�� ������ �����ؾ� �մϴ�.


		//---------------------------------------------------------
		myWindow.Show(); //�׸� ����� �����ֱ�
	}
}