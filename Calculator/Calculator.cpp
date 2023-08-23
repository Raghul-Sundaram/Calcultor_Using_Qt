#include "Calculator.h"

Calculator::Calculator(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	op = '\0';
	connect(ui.addbtn, &QPushButton::clicked, this, &Calculator::handleAddBtn);
	connect(ui.subbtn, &QPushButton::clicked, this, &Calculator::handleSubBtn);
	connect(ui.mulbtn, &QPushButton::clicked, this, &Calculator::handleMulBtn);
	connect(ui.divbtn, &QPushButton::clicked, this, &Calculator::handleDivBtn);
	connect(ui.btn_0, &QPushButton::clicked, this, &Calculator::num_btn_0);
	connect(ui.btn_1, &QPushButton::clicked, this, &Calculator::num_btn_1);
	connect(ui.btn_2, &QPushButton::clicked, this, &Calculator::num_btn_2);
	connect(ui.btn_3, &QPushButton::clicked, this, &Calculator::num_btn_3);
	connect(ui.btn_4, &QPushButton::clicked, this, &Calculator::num_btn_4);
	connect(ui.btn_5, &QPushButton::clicked, this, &Calculator::num_btn_5);
	connect(ui.btn_6, &QPushButton::clicked, this, &Calculator::num_btn_6);
	connect(ui.btn_7, &QPushButton::clicked, this, &Calculator::num_btn_7);
	connect(ui.btn_8, &QPushButton::clicked, this, &Calculator::num_btn_8);
	connect(ui.btn_9, &QPushButton::clicked, this, &Calculator::num_btn_9);
	connect(ui.ac_btn, &QPushButton::clicked, this, &Calculator::clearAll);
	connect(ui.res_btn, &QPushButton::clicked, this, &Calculator::displayResult);
}

void Calculator::handleAddBtn()
{
	if (op == '\0') {
		op = '+';
		ui.lineEdit->setText(ui.lineEdit->text() + "+");
	}
	else {
		firstnum = displayResult();
		op = '+';
		ui.lineEdit->setText(ui.lineEdit->text() + "+");
	}
	
}
void Calculator::handleSubBtn()
{
	if (op == '\0') {
		op = '-';
		ui.lineEdit->setText(ui.lineEdit->text() + "-");
	}
	else {
		firstnum = displayResult();
		op = '-';
		ui.lineEdit->setText(ui.lineEdit->text() + "-");
	}
}

void Calculator::handleMulBtn()
{
	if (op == '\0') {
		op = '*';
		ui.lineEdit->setText(ui.lineEdit->text() + "*");
	}
	else {
		firstnum = displayResult();
		op = '*';
		ui.lineEdit->setText(ui.lineEdit->text() + "*");
	}
}

void Calculator::handleDivBtn()
{
	if (op == '\0') {
		op = '/';
		ui.lineEdit->setText(ui.lineEdit->text() + "/");
	}
	else {
		firstnum = displayResult();
		op = '/';
		ui.lineEdit->setText(ui.lineEdit->text() + "/");
	}
}

void Calculator::num_btn_0()
{
	if (op == '\0') {
		firstnum = firstnum*10 + 0;
	}
	else {
		secondnum = secondnum*10 + 0;
	}
}

void Calculator::num_btn_1()
{
	if (op == '\0') {
		firstnum = firstnum*10 + 1;
	}
	else {
		secondnum = secondnum * 10 + 1;
	}
	ui.lineEdit->setText(ui.lineEdit->text()+"1");
}

void Calculator::num_btn_2()
{
	if (op == '\0') {
		firstnum = firstnum * 10 + 2;
	}
	else {
		secondnum = secondnum * 10 + 2;
	}
	ui.lineEdit->setText(ui.lineEdit->text() + "2");
}

void Calculator::num_btn_3()
{
	if (op == '\0') {
		firstnum = firstnum * 10 + 3;
	}
	else {
		secondnum = secondnum * 10 + 3;
	}
	ui.lineEdit->setText(ui.lineEdit->text() + "3");
}

void Calculator::num_btn_4()
{
	if (op == '\0') {
		firstnum = firstnum * 10 + 4;
	}
	else {
		secondnum = secondnum * 10 + 4;
	}
	ui.lineEdit->setText(ui.lineEdit->text() + "4");
}

void Calculator::num_btn_5()
{
	if (op == '\0') {
		firstnum = firstnum * 10 + 5;
	}
	else {
		secondnum = secondnum * 10 + 5;
	}
	ui.lineEdit->setText(ui.lineEdit->text() + "5");
}

void Calculator::num_btn_6()
{
	if (op == '\0') {
		firstnum = firstnum * 10 + 6;
	}
	else {
		secondnum = secondnum * 10 + 6;
	}
	ui.lineEdit->setText(ui.lineEdit->text() + "6");
}

void Calculator::num_btn_7()
{
	if (op == '\0') {
		firstnum = firstnum * 10 + 7;
	}
	else {
		secondnum = secondnum * 10 + 7;
	}
	ui.lineEdit->setText(ui.lineEdit->text() + "7");
}

void Calculator::num_btn_8()
{
	if (op == '\0') {
		firstnum = firstnum * 10 + 8;
	}
	else {
		secondnum = secondnum * 10 + 8;
	}
	ui.lineEdit->setText(ui.lineEdit->text() + "8");
}

void Calculator::num_btn_9()
{
	if (op == '\0') {
		firstnum = firstnum * 10 + 9;
	}
	else {
		secondnum = secondnum * 10 + 9;
	}
	ui.lineEdit->setText(ui.lineEdit->text() + "9");
}

void Calculator::clearAll()
{
	ui.lineEdit->clear();
	firstnum = 0;
	secondnum = 0;
	op = '\0';
}

int Calculator::displayResult()
{
	switch (op)
	{
	case '+':
		result = firstnum + secondnum;
		break;
	case '-':
		result = firstnum - secondnum;
		break;
	case '*':
		result = firstnum * secondnum;
		break;
	case '/':
		result = firstnum / secondnum;
		break;
	}
	ui.lineEdit->setText(QString::number(result));
	firstnum = 0;
	secondnum = 0;
	op = '\0';

	return result;
	
}
