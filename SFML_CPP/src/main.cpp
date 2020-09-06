#include <iostream>
#include "Window.h"

int main()
{
	Window myWindow("JBNU C++", 600, 600); //윈도우 생성

	//배열 선언

	while (myWindow.IsRunning()) //윈도우가 실행 중인 동안 반복
	{
		myWindow.CheckClosed(); //윈도우가 종료되었는지 확인
		myWindow.Clear(); //화면을 지우기

		//-------------화면에 그리기--------------------------------
		//문제 : 세 개의 원을 동시에 표시하고 움직이고 싶습니다. 이를 위해 
		//각 원의 x위치, y위치를 저장하는 배열을 만들고, for문을 사용해 배열의
		//길이만큼의 원을 그려 보세요. 추가적으로 ColorNames 배열을 만들면
		//각 원의 색깔도 다르게 그릴 수 있습니다!
		//또한 키보드 입력을 통해 세 원을 동시에 움직이려 할 때, 최대한 효율적으로
		//구현하는 방법을 생각해 보세요.
		
		for (int i = 0; i < 3; i++)
		{
			myWindow.DrawCircle(50,	xPos[i], yPos[i], colors[i]);
		}

		if (myWindow.IsKeyPressed("Left") == true)
		{
		}


		//---------------------------------------------------------
		myWindow.Show(); //그린 결과를 보여주기
	}
}