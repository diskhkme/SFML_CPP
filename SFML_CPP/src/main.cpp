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
		//문제 : myWindow.IsKeyPressed() 함수를 사용하여 원을 좌우상하로
		//움직이도록 구현해보세요. myWindow.IsKeyPressed() 함수의 인자로
		//"Left","Right","Up","Down"등을 넣으면 해당 화살표키가 눌렸는지
		//확인하여 눌린 상태라면 true를, 아니라면 false를 반환합니다.
		
		myWindow.DrawCircle(50, //원의 반지름 크기
			10, //원의 x위치
			10, //원의 y위치
			ColorNames::BLUE); //원의 색상

		if (myWindow.IsKeyPressed("Left") == true)
		{
			//왼쪽 화살표 키가 눌렸다면 이 함수 안으로 진입합니다.
		}

		//---------------------------------------------------------
		myWindow.Show(); //그린 결과를 보여주기
	}
}