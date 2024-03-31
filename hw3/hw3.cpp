#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);

class Figure abstract
{
protected:
	string name;
	int color;
	string figureData[6][6];
public:
	virtual void CreateFigure() = 0;

	Figure(string n, int col)
	{
		name = n;
		color = col;

		for (int i = 0; i < 6; ++i) {
			for (int j = 0; j < 6; ++j) {
				figureData[i][j] = " ";
			}
		}
	}

	void ShowFigure()
	{
		cout << name << endl;
		for (int i = 0; i < 6; i++)
		{
			for (int j = 0; j < 6; j++)
			{
				SetConsoleTextAttribute(h, this->color);
				cout << figureData[i][j];
			}
			cout << endl;
		}
		SetConsoleTextAttribute(h, 7);
	}

};

class Figure1 : public Figure
{
public:
	Figure1() : Figure("Figure one", 13) {
		CreateFigure();
	}
	void CreateFigure() override
	{
		figureData[0][0] = " ";
		figureData[0][1] = " ";
		figureData[0][2] = " ";
		figureData[0][3] = " ";
		figureData[0][4] = " ";
		figureData[0][5] = " ";

		figureData[1][0] = " ";
		figureData[1][1] = " ";
		figureData[1][2] = "#";
		figureData[1][3] = "#";
		figureData[1][4] = " ";
		figureData[1][5] = " ";

		figureData[2][0] = " ";
		figureData[2][1] = " ";
		figureData[2][2] = "#";
		figureData[2][3] = "#";
		figureData[2][4] = " ";
		figureData[2][5] = " ";

		figureData[3][0] = " ";
		figureData[3][1] = " ";
		figureData[3][2] = "#";
		figureData[3][3] = "#";
		figureData[3][4] = " ";
		figureData[3][5] = " ";

		figureData[4][0] = " ";
		figureData[4][1] = " ";
		figureData[4][2] = "#";
		figureData[4][3] = "#";
		figureData[4][4] = " ";
		figureData[4][5] = " ";

		figureData[5][0] = " ";
		figureData[5][1] = " ";
		figureData[5][2] = " ";
		figureData[5][3] = " ";
		figureData[5][4] = " ";
		figureData[5][5] = " ";
	}
};

class Figure2 : public Figure
{
public:
	Figure2() : Figure("Figure two", 10) {
		CreateFigure();
	}
	void CreateFigure() override
	{
		figureData[0][0] = " ";
		figureData[0][1] = " ";
		figureData[0][2] = " ";
		figureData[0][3] = " ";
		figureData[0][4] = " ";
		figureData[0][5] = " ";

		figureData[1][0] = " ";
		figureData[1][1] = " ";
		figureData[1][2] = "#";
		figureData[1][3] = " ";
		figureData[1][4] = " ";
		figureData[1][5] = " ";

		figureData[2][0] = " ";
		figureData[2][1] = " ";
		figureData[2][2] = "#";
		figureData[2][3] = " ";
		figureData[2][4] = " ";
		figureData[2][5] = " ";

		figureData[3][0] = " ";
		figureData[3][1] = " ";
		figureData[3][2] = "#";
		figureData[3][3] = " ";
		figureData[3][4] = " ";
		figureData[3][5] = " ";

		figureData[4][0] = " ";
		figureData[4][1] = " ";
		figureData[4][2] = "#";
		figureData[4][3] = "#";
		figureData[4][4] = "#";
		figureData[4][5] = " ";

		figureData[5][0] = " ";
		figureData[5][1] = " ";
		figureData[5][2] = " ";
		figureData[5][3] = " ";
		figureData[5][4] = " ";
		figureData[5][5] = " ";
	}
};

class Figure3 : public Figure
{
public:
	Figure3() : Figure("Figure three", 6) {
	 	CreateFigure();
	}
	void CreateFigure() override
	{
		figureData[0][0] = " ";
		figureData[0][1] = " ";
		figureData[0][2] = " ";
		figureData[0][3] = " ";
		figureData[0][4] = " ";
		figureData[0][5] = " ";

		figureData[1][0] = " ";
		figureData[1][1] = " ";
		figureData[1][2] = " ";
		figureData[1][3] = " ";
		figureData[1][4] = " ";
		figureData[1][5] = " ";

		figureData[2][0] = " ";
		figureData[2][1] = "#";
		figureData[2][2] = "#";
		figureData[2][3] = "#";
		figureData[2][4] = " ";
		figureData[2][5] = " ";

		figureData[3][0] = " ";
		figureData[3][1] = " ";
		figureData[3][2] = " ";
		figureData[3][3] = "#";
		figureData[3][4] = "#";
		figureData[3][5] = "#";

		figureData[4][0] = " ";
		figureData[4][1] = " ";
		figureData[4][2] = " ";
		figureData[4][3] = " ";
		figureData[4][4] = " ";
		figureData[4][5] = " ";

		figureData[5][0] = " ";
		figureData[5][1] = " ";
		figureData[5][2] = " ";
		figureData[5][3] = " ";
		figureData[5][4] = " ";
		figureData[5][5] = " ";
	}
};

class Figure4 : public Figure
{
public:
	Figure4() : Figure("Figure four", 5) {
		CreateFigure();
	}
	void CreateFigure() override
	{
		figureData[0][0] = " ";
		figureData[0][1] = " ";
		figureData[0][2] = " ";
		figureData[0][3] = " ";
		figureData[0][4] = " ";
		figureData[0][5] = " ";

		figureData[1][0] = " ";
		figureData[1][1] = " ";
		figureData[1][2] = " ";
		figureData[1][3] = " ";
		figureData[1][4] = " ";
		figureData[1][5] = " ";

		figureData[2][0] = " ";
		figureData[2][1] = " ";
		figureData[2][2] = "#";
		figureData[2][3] = " ";
		figureData[2][4] = " ";
		figureData[2][5] = " ";

		figureData[3][0] = " ";
		figureData[3][1] = " ";
		figureData[3][2] = "#";
		figureData[3][3] = "#";
		figureData[3][4] = " ";
		figureData[3][5] = " ";

		figureData[4][0] = " ";
		figureData[4][1] = " ";
		figureData[4][2] = " ";
		figureData[4][3] = "#";
		figureData[4][4] = " ";
		figureData[4][5] = " ";

		figureData[5][0] = " ";
		figureData[5][1] = " ";
		figureData[5][2] = " ";
		figureData[5][3] = " ";
		figureData[5][4] = " ";
		figureData[5][5] = " ";
	}
};

class Figure5 : public Figure
{
public:
	Figure5() : Figure("Figure five", 12) {
		CreateFigure();
	}
	void CreateFigure() override
	{
		figureData[0][0] = " ";
		figureData[0][1] = " ";
		figureData[0][2] = " ";
		figureData[0][3] = " ";
		figureData[0][4] = " ";
		figureData[0][5] = " ";

		figureData[1][0] = " ";
		figureData[1][1] = " ";
		figureData[1][2] = " ";
		figureData[1][3] = " ";
		figureData[1][4] = " ";
		figureData[1][5] = " ";

		figureData[2][0] = " ";
		figureData[2][1] = "#";
		figureData[2][2] = "#";
		figureData[2][3] = "#";
		figureData[2][4] = "#";
		figureData[2][5] = "#";

		figureData[3][0] = " ";
		figureData[3][1] = "#";
		figureData[3][2] = " ";
		figureData[3][3] = " ";
		figureData[3][4] = " ";
		figureData[3][5] = " ";

		figureData[4][0] = " ";
		figureData[4][1] = " ";
		figureData[4][2] = " ";
		figureData[4][3] = " ";
		figureData[4][4] = " ";
		figureData[4][5] = " ";

		figureData[5][0] = " ";
		figureData[5][1] = " ";
		figureData[5][2] = " ";
		figureData[5][3] = " ";
		figureData[5][4] = " ";
		figureData[5][5] = " ";
	}
};

class Figure6 : public Figure
{
public:
	Figure6() : Figure("Figure six", 14) {
		CreateFigure();
	}
	void CreateFigure() override
	{
		figureData[0][0] = " ";
		figureData[0][1] = " ";
		figureData[0][2] = " ";
		figureData[0][3] = " ";
		figureData[0][4] = " ";
		figureData[0][5] = " ";

		figureData[1][0] = " ";
		figureData[1][1] = " ";
		figureData[1][2] = " ";
		figureData[1][3] = " ";
		figureData[1][4] = " ";
		figureData[1][5] = " ";

		figureData[2][0] = " ";
		figureData[2][1] = "#";
		figureData[2][2] = "#";
		figureData[2][3] = "#";
		figureData[2][4] = "#";
		figureData[2][5] = "#";

		figureData[3][0] = " ";
		figureData[3][1] = "#";
		figureData[3][2] = "#";
		figureData[3][3] = "#";
		figureData[3][4] = "#";
		figureData[3][5] = "#";

		figureData[4][0] = " ";
		figureData[4][1] = " ";
		figureData[4][2] = " ";
		figureData[4][3] = " ";
		figureData[4][4] = " ";
		figureData[4][5] = " ";

		figureData[5][0] = " ";
		figureData[5][1] = " ";
		figureData[5][2] = " ";
		figureData[5][3] = " ";
		figureData[5][4] = " ";
		figureData[5][5] = " ";
	}
};


class Figure7 : public Figure
{
public:
	Figure7() : Figure("Figure seven", 2) {
		CreateFigure();
	}
	void CreateFigure() override
	{
		figureData[0][0] = " ";
		figureData[0][1] = " ";
		figureData[0][2] = " ";
		figureData[0][3] = " ";
		figureData[0][4] = " ";
		figureData[0][5] = " ";

		figureData[1][0] = " ";
		figureData[1][1] = " ";
		figureData[1][2] = " ";
		figureData[1][3] = " ";
		figureData[1][4] = "#";
		figureData[1][5] = " ";

		figureData[2][0] = " ";
		figureData[2][1] = " ";
		figureData[2][2] = " ";
		figureData[2][3] = " ";
		figureData[2][4] = "#";
		figureData[2][5] = " ";

		figureData[3][0] = " ";
		figureData[3][1] = " ";
		figureData[3][2] = " ";
		figureData[3][3] = " ";
		figureData[3][4] = "#";
		figureData[3][5] = " ";

		figureData[4][0] = " ";
		figureData[4][1] = "#";
		figureData[4][2] = "#";
		figureData[4][3] = "#";
		figureData[4][4] = "#";
		figureData[4][5] = " ";

		figureData[5][0] = " ";
		figureData[5][1] = " ";
		figureData[5][2] = " ";
		figureData[5][3] = " ";
		figureData[5][4] = " ";
		figureData[5][5] = " ";
	}
};

class Creator abstract
{
public:
	virtual Figure* CreateFigure() = 0;
};

class CreatorFig1 : public Creator
{
public:

	Figure* CreateFigure() override
	{
		return new Figure1;
	}
};

class CreatorFig2 : public Creator
{
public:

	Figure* CreateFigure() override
	{
		return new Figure2;
	}
};

class CreatorFig3 : public Creator
{
public:

	Figure* CreateFigure() override
	{
		return new Figure3;
	}
};

class CreatorFig4 : public Creator
{
public:

	Figure* CreateFigure() override
	{
		return new Figure4;
	}
};

class CreatorFig5 : public Creator
{
public:

	Figure* CreateFigure() override
	{
		return new Figure5;
	}
};

class CreatorFig6 : public Creator
{
public:

	Figure* CreateFigure() override
	{
		return new Figure6;
	}
};

class CreatorFig7 : public Creator
{
public:

	Figure* CreateFigure() override
	{
		return new Figure7;
	}
};

Figure* Client(Creator* pDev)
{
	return pDev->CreateFigure();
}

int main()
{

	Creator* pCreatef1 = new CreatorFig1();
	Figure* figure1 = Client(pCreatef1);
	figure1->CreateFigure();
	figure1->ShowFigure();
	delete figure1;
	delete pCreatef1;

	cout << endl << endl;

	Creator* pCreatef2 = new CreatorFig2();
	Figure* figure2 = Client(pCreatef2);
	figure2->CreateFigure();
	figure2->ShowFigure();
	delete figure2;
	delete pCreatef2;

	cout << endl << endl;

	Creator* pCreatef3 = new CreatorFig3();
	Figure* figure3 = Client(pCreatef3);
	figure3->CreateFigure();
	figure3->ShowFigure();
	delete figure3;
	delete pCreatef3;

	cout << endl << endl;

	Creator* pCreatef4 = new CreatorFig4();
	Figure* figure4 = Client(pCreatef4);
	figure4->CreateFigure();
	figure4->ShowFigure();
	delete figure4;
	delete pCreatef4;

	cout << endl << endl;

	Creator* pCreatef5 = new CreatorFig5();
	Figure* figure5 = Client(pCreatef5);
	figure5->CreateFigure();
	figure5->ShowFigure();
	delete figure5;
	delete pCreatef5;

	cout << endl << endl;

	Creator* pCreatef6 = new CreatorFig6();
	Figure* figure6 = Client(pCreatef6);
	figure6->CreateFigure();
	figure6->ShowFigure();
	delete figure6;
	delete pCreatef6;

	cout << endl << endl;

	Creator* pCreatef7 = new CreatorFig7();
	Figure* figure7 = Client(pCreatef7);
	figure7->CreateFigure();
	figure7->ShowFigure();
	delete figure7;
	delete pCreatef7;

}
