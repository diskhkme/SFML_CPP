#include <iostream>
#include "Window.h"

float GetInterpolatedPosition(float start, float end, float t)
{
	//이전 보간 함수 1의 구현 결과를 활용하세요.
}

float GetCurrentPositionInRoute(const float route[], int currentRoute, float t)
{
	//GetCurrentPositionInRoute 내부에서 GetInterpolatedPosition 함수를 활용하면 효율적입니다.
}

int main()
{
	//-------------보간 함수 2--------------------------------
	//문제 : 여러 구간을 반복해서 이동하는 원을 만드려고 합니다. 
	//이를 위해 이전 보간 함수를 내부에서 호출해 구간 사이 위치를 계산하는 함수를
	//GetCurrentPositionInRoute를 구현하세요.
	//이 함수는 구간의 각 위치 배열, 현재 구간 및 파라메터 t를 받아 위치를 보간합니다.
	//예를 들어 currentRoute가 1이라면, xRoute[1]을 시작점으로, xRoute[2]까지 이동합니다.
	//아래 main 함수에서 새로운 보간 함수를 사용하여 여러 구간을 계속해서 이동하도록
	//만들어 보세요.

	Window myWindow("JBNU C++", 600, 600); //윈도우 생성

	float t = 0;
	float tChangeSpeed = 0.01f;
	float xRoute[] = { 0, 600, 300, 0 };
	float yRoute[] = { 0, 300, 100, 50 };
	int currentRoute = 0;

	while (myWindow.IsRunning()) //윈도우가 실행 중인 동안 반복
	{
		myWindow.CheckClosed(); //윈도우가 종료되었는지 확인
		myWindow.Clear(); //화면을 지우기

		// t와 tChangeSpeed를 사용해서 현재 구간(currentRoute)를 적절히 갱신해야 합니다.


		//---------------------------------------------------------
		myWindow.Show(); //그린 결과를 보여주기
	}
}