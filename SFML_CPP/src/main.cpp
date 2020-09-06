#include <iostream>
#include "Window.h"

int main()
{
	Window myWindow("JBNU C++", 600, 600); //윈도우 생성

	while (myWindow.IsRunning()) //윈도우가 실행 중인 동안 반복
	{
		myWindow.CheckClosed(); //윈도우가 종료되었는지 확인
		myWindow.Clear(); //화면을 지우기

		//-------------화면에 그리기--------------------------------
		myWindow.DrawCircle(50, //원의 반지름 크기
							10, //원의 x위치
							10, //원의 y위치
							ColorNames::BLUE); //원의 색상
		

		

		//---------------------------------------------------------
		myWindow.Show(); //그린 결과를 보여주기
	}
}