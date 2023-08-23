#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Calculator.h"
class Calculator : public QMainWindow
{
	Q_OBJECT

public:
	int firstnum=0, secondnum=0, result;
	char op;
	Calculator(QWidget *parent = Q_NULLPTR);
	public slots:
	void handleAddBtn();
	void handleSubBtn();
	void handleMulBtn();
	void handleDivBtn();
	void num_btn_0();
	void num_btn_1();
	void num_btn_2();
	void num_btn_3();
	void num_btn_4();
	void num_btn_5();
	void num_btn_6();
	void num_btn_7();
	void num_btn_8();
	void num_btn_9();
	void clearAll();
	int displayResult();





private:
	Ui::CalculatorClass ui;
};
