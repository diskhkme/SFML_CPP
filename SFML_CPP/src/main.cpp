#include <iostream>
#include "Window.h"

float GetInterpolatedPosition(float start, float end, float t)
{
	//함수의 본문을 구현하시오.
}

int main()
{
	//-------------보간 함수--------------------------------
	//문제 : 두 점 사이를 반복해서 이동하는 원을 만드려고 합니다. 
	//이를 위해 보간 함수를 구현합니다. 보간 함수는 위에 정의된 
	//것과 같습니다.(GetInterpolatedPosition)
	//이 함수는 시작위치, 끝 위치 및 파라메터 t를 받아 위치를 계산하여 반환합니다.
	//보간 식은 아래와 같습니다.
	// : start * (1.0f - t) + end * t;
	//따라서 t가 0일때는 시작 위치, 1일때는 끝 위치, 0.5일때는 중간 위치를 반환합니다.
	//아래 main 함수에서 보간 함수를 사용하여 두 점 사이를 계속해서 왔다갔다하도록
	//만들어 보세요.

	Window myWindow("JBNU C++", 600, 600); //윈도우 생성

	float t = 0;
	float tChangeSpeed = 0.01f;
	float startX = 100;
	float startY = 100;
	float endX = 200;
	float endY = 150;

	while (myWindow.IsRunning()) //윈도우가 실행 중인 동안 반복
	{
		myWindow.CheckClosed(); //윈도우가 종료되었는지 확인
		myWindow.Clear(); //화면을 지우기

		//반복문 진행에 따라 t값을 바꾸고, GetInterpolatedPosition의 세 번째 인자로 전달하여
		//새로운 X,Y 위치를 얻어 원을 의도하는 위치에 그리시오.


		//---------------------------------------------------------
		myWindow.Show(); //그린 결과를 보여주기
	}
}