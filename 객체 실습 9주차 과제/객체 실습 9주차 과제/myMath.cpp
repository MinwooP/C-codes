#include "mymath.h" // ����ڰ� ������ ������� mymath.h ����
#include <ctime> // time �Լ��� ����ϱ� ���� �������
#include <stdlib.h> //rand �Լ� ����ϱ� ���� �������
#include <cmath> // pow, fmod �Լ��� ����ϱ� ���� �������

// ShowMenu - �޴��� ����ϴ� myMath class�� ����Լ� 
void myMath::ShowMenu()
{
	cout << "***********************\n"
		<< "1. Power Function\n"
		<< "2. Greatest Common Divisiors\n"
		<< "3. Fibonacci Sequence\n"
		<< "4. Exit\n"
		<< "************************\n";
	management();  // management �Լ� ȣ��
}

// management - ��ü�� �����ϴ� �Լ� 
void myMath::management()
{
	cout << "select the number:  ";
	int menu = 0;
	cin >> menu;
	switch (menu)  //����ڰ� �Է��� menu�� ���� �ٸ� �Լ� ȣ��
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

// PowerFunction - n�� k���� ���ϴ� �Լ��� PowerFunction1�� �����ϴ� �Լ�
// PowerFunction1 - �Ű����� Ÿ���� int�� double�� �����Ͽ� �����ε�

void myMath::PowerFunction() 
{
	srand(time(NULL));
	n = rand() % 4 + 2; // 3~5 ������ ���� ����
	k = rand() % 11; // 0~10 ������ ���� ����
	cout << "Power Function <recursive>\n";
	PowerFunction1(n, k);
	double newN = n; // �Լ��� �ٲ� n, k�� ���ƾ� �ϱ� ������ ���ο� double Ÿ�� ���� newN ����
	double newK = k; // double Ÿ�� ���� newK ����
	cout << "Power Function <iterative>\n";
	PowerFunction1(newN, newK);
	cout << "\n";
}

// PowerFunction1 - n�� k�� ���ϴ� �Լ�, �����ε�
// ù��° PowerFunction(�Ű����� Ÿ��-int) - ����Լ� ���
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

// �ι�° PowerFunction1(�Ű����� Ÿ��-double) - for�� ���
void myMath::PowerFunction1(double num1, double num2)
{
	int result = 1;
	for (int i = 1; i <= num2; i++)
	{
		result = result*num1; // result�� ��� num1�� ���� ������Ʈ
	}
	cout << num1 << "^" << num2 << " = " << result
		<< endl;
}

//CommonDivisiors - �ִ� ������� ���ϴ� �Լ��� CommonDivisiors1�� �����ϴ� �Լ�
//CommonDivisiors - �Ű����� Ÿ���� int�� double�� �����Ͽ� �����ε�
void myMath::CommonDivisiors()
{
	srand(time(NULL));
	n = rand(); //���� ������ ���� ���� ����
	k = rand();
	cout << "Greatest Common Divisiors <recursive>\n";
	CommonDivisiors1(n, k);
	double newN = n;
	double newK = k;
	cout << "Greatest Common Divisiors <iterative>\n";
	CommonDivisiors1(newN, newK);
}

// CommonDivisiors1 - �� ������ �ִ����� ���ϴ� �Լ�, �����ε�
// ù��° CommonDivisiors(�Ű����� Ÿ��-int) - ����Լ� ��뤩
void myMath::CommonDivisiors1(int num1, int num2)
{
	if (num1 >= num2) //ū ���� ���� ���� ������ �ϹǷ� num1 >= num2 �� ���� �� �ܷ� ��츦 ����� ������
	{
		cout << "GCD<" << num1 << ", " << num2 << ">\n";
		int left = num1%num2; //�������� ��Ÿ���� ���� left ����

		if (left == 0) // �������� 0�� ��, �� ��������� ��, �� �� �ִ����� 
		{
			cout << "GCD = " << num2 << "\n";
			return;
		}
		else
		{
			CommonDivisiors1(num2, left); // ���� ���� �������� ����
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

// �ι�° CommonDivisiors1(�Ű����� Ÿ��-double) - for�� ���
void myMath::CommonDivisiors1(double num1, double num2)
{
	if (num1 >= num2)
	{
		double originalnum2 = num2;
		double left = fmod(num1, num2); // %�� ������ �ۿ� ������� ���ϹǷ� fmod �Լ� ���
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
		double originalnum1 = num1; //�ʱ� num1 ���� ������ ���� originalnum1 ����
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

//Fibonacci - �Ǻ���ġ ������ ���ϴ� Fibonacci1 �Լ��� �����ϴ� �Լ�
//Fibonacci1 - 30���� �Ǻ���ġ ������ ���, ��� , �����ε�
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

//ù��° Fibonacci1 - (�Ű����� Ÿ��-int) - ����Լ� ���
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

// �ι�° Fibonacci1(�Ű����� Ÿ��-double) - for�� ���
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