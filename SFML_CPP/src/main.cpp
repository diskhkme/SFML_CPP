#include <iostream>
#include "Window.h"

int main()
{
	Window myWindow("JBNU C++", 600, 600); //������ ����

	while (myWindow.IsRunning()) //�����찡 ���� ���� ���� �ݺ�
	{
		myWindow.CheckClosed(); //�����찡 ����Ǿ����� Ȯ��
		myWindow.Clear(); //ȭ���� �����

		//-------------ȭ�鿡 �׸���--------------------------------
		myWindow.DrawCircle(50, //���� ������ ũ��
							10, //���� x��ġ
							10, //���� y��ġ
							ColorNames::BLUE); //���� ����
		

		

		//---------------------------------------------------------
		myWindow.Show(); //�׸� ����� �����ֱ�
	}
}