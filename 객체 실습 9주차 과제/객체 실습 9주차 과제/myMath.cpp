#include "mymath.h" // 사용자가 지정한 헤더파일 mymath.h 포함
#include <ctime> // time 함수를 사용하기 위한 헤더파일
#include <stdlib.h> //rand 함수 사용하기 위한 헤더파일
#include <cmath> // pow, fmod 함수를 사용하기 위한 헤더파일

// ShowMenu - 메뉴를 출력하는 myMath class의 멤버함수 
void myMath::ShowMenu()
{
	cout << "***********************\n"
		<< "1. Power Function\n"
		<< "2. Greatest Common Divisiors\n"
		<< "3. Fibonacci Sequence\n"
		<< "4. Exit\n"
		<< "************************\n";
	management();  // management 함수 호출
}

// management - 전체를 관리하는 함수 
void myMath::management()
{
	cout << "select the number:  ";
	int menu = 0;
	cin >> menu;
	switch (menu)  //사용자가 입력한 menu에 따라 다른 함수 호출
	{
	case 1:
		PowerFunction(); 
		management();
		break;

	case 2:
		CommonDivisiors(); 
		management();
		break;

	case 3:
		Fibonacci();
		management();
		break;

	case 4: cout << "\nFinish the program\n";
		break;
	}
}

// PowerFunction - n의 k승을 구하는 함수인 PowerFunction1을 관리하는 함수
// PowerFunction1 - 매개변수 타입을 int와 double로 구분하여 오버로딩

void myMath::PowerFunction() 
{
	srand(time(NULL));
	n = rand() % 4 + 2; // 3~5 범위의 난수 생성
	k = rand() % 11; // 0~10 범위의 난수 생성
	cout << "Power Function <recursive>\n";
	PowerFunction1(n, k);
	double newN = n; // 함수가 바뀌어도 n, k는 같아야 하기 때문에 새로운 double 타입 변수 newN 선언
	double newK = k; // double 타입 변수 newK 선언
	cout << "Power Function <iterative>\n";
	PowerFunction1(newN, newK);
	cout << "\n";
}

// PowerFunction1 - n의 k승 구하는 함수, 오버로딩
// 첫번째 PowerFunction(매개변수 타입-int) - 재귀함수 사용
void myMath::PowerFunction1(int num1, int num2)
{
	cout << num1 << "^" << num2 << " = " << pow(num1, num2)
		<< endl;

	if ((num2 - 1) < 0)
	{
		return;
	}

	else
	{
		PowerFunction1(num1, (num2 - 1));
	}

}

// 두번째 PowerFunction1(매개변수 타입-double) - for문 사용
void myMath::PowerFunction1(double num1, double num2)
{
	int result = 1;
	for (int i = 1; i <= num2; i++)
	{
		result = result*num1; // result를 계속 num1을 곱해 업데이트
	}
	cout << num1 << "^" << num2 << " = " << result
		<< endl;
}

//CommonDivisiors - 최대 공약수를 구하는 함수인 CommonDivisiors1를 관리하는 함수
//CommonDivisiors - 매개변수 타입을 int와 double로 구분하여 오버로딩
void myMath::CommonDivisiors()
{
	srand(time(NULL));
	n = rand(); //범위 제한이 없는 난수 생성
	k = rand();
	cout << "Greatest Common Divisiors <recursive>\n";
	CommonDivisiors1(n, k);
	double newN = n;
	double newK = k;
	cout << "Greatest Common Divisiors <iterative>\n";
	CommonDivisiors1(newN, newK);
}

// CommonDivisiors1 - 두 난수의 최대공약수 구하는 함수, 오버로딩
// 첫번째 CommonDivisiors(매개변수 타입-int) - 재귀함수 사용ㄹ
void myMath::CommonDivisiors1(int num1, int num2)
{
	if (num1 >= num2) //큰 수를 작은 수로 나눠야 하므로 num1 >= num2 일 때와 그 외로 경우를 나누어서 생각ㅣ
	{
		cout << "GCD<" << num1 << ", " << num2 << ">\n";
		int left = num1%num2; //나머지를 나타내는 변수 left 선언

		if (left == 0) // 나머지가 0일 때, 즉 나누어떨어질 때, 그 때 최대공약수 
		{
			cout << "GCD = " << num2 << "\n";
			return;
		}
		else
		{
			CommonDivisiors1(num2, left); // 작은 수를 나머지로 나눔
		} 

	}
	else
	{
		cout << "GCD<" << num2 << ", " << num1 << ">\n";
		int left = num2%num1;

		if (left == 0)
		{
			cout << "GCD = " << num2 << "\n";
		}
		else
		{
			CommonDivisiors1(num1, left);
		}
	}
}

// 두번째 CommonDivisiors1(매개변수 타입-double) - for문 사용
void myMath::CommonDivisiors1(double num1, double num2)
{
	if (num1 >= num2)
	{
		double originalnum2 = num2;
		double left = fmod(num1, num2); // %는 정수형 밖에 계산하지 못하므로 fmod 함수 사용
		double finalleft = 0;
		while (left != 0)
		{
			double left1 = left;
			left = fmod(num2, left);
			num2 = left1;
		}

		finalleft = num2;

		cout << "GCD of " << num1 << " and " << originalnum2 << " is " << finalleft
			<< "\n\n";
	}

	else
	{
		double originalnum1 = num1; //초기 num1 값을 저장할 변수 originalnum1 선언
		double left = fmod(num2, num1);
		double finalleft = 0;
		while (left != 0)
		{
			int left1 = left;
			left = fmod(num1, left);
			num1 = left1;
		}

		finalleft = num1;

		cout << "GCD of " << num2 << " and " << originalnum1 << " is " << finalleft
			<< "\n\n";
	}
}

//Fibonacci - 피보나치 수열을 구하는 Fibonacci1 함수를 관리하는 함수
//Fibonacci1 - 30항의 피보나치 수열을 계산, 출력 , 오버로딩
void myMath::Fibonacci()
{
	cout << "Fibonacci Sequence <recursive>\n";
	for (int i = 0; i <= 31; i++)
	{
		cout << Fibonacci1(i) << " ";
	}
	cout << "\n";
	n = 0;
	double newN = n;
	cout << "Fibonacci Sequence <iterative>\n";
	Fibonacci1(newN);
	cout << "\n";
}

//첫번째 Fibonacci1 - (매개변수 타입-int) - 재귀함수 사용
int myMath::Fibonacci1(int num1)
{
	if (num1 == 0)
	{
		return 0;
	}

	if (num1 == 1)
	{
		return 1;
	}
	if (num1 == 2)
	{
		return 1;
	}

	else return Fibonacci1(num1 - 1) + Fibonacci1(num1 - 2);
}

// 두번째 Fibonacci1(매개변수 타입-double) - for문 사용
void myMath::Fibonacci1(double num1)
{
	int n1, n2, n3;
	n1 = num1;
	n2 = 1;

	cout << n1 << " ";
	cout << n2 << " ";
	for (int i = 1; i <= 30; i++)
	{
		n3 = n1 + n2;
		cout << n3 << " ";
		n1 = n2;
		n2 = n3;
	}
	cout << "\n";
}