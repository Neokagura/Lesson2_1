#include <iostream>
#include <string>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int passengerTotal = 0;
	int passengerCount = 0;
	int passengerEnter = 0;
	int passengerExit = 0;
	int ticketPrice = 20;
	int totalIncome = 0;

	std::cout << "��������� �� ��������� ����� �������������. � ������ ����������:" << passengerTotal << "\n";
	std::cout << "������� ���������� ����� �� ���������?";
	std::cin >> passengerExit;
	std::cout << "������� ���������� ����� �� ���������?";
	std::cin >> passengerEnter;
	passengerTotal = passengerTotal - passengerExit + passengerEnter;
	passengerCount += passengerEnter;
	std::cout << "������������ � ��������� ����� �������������. � ������ ����������: " << passengerTotal << "\n";
	std::cout << "-------- ���� ----------";
	std::cout << "��������� �� ��������� ����� ����������. � ������ ����������:" << passengerTotal << "\n";
	std::cout << "������� ���������� ����� �� ���������?";
	std::cin >> passengerExit;
	std::cout << "������� ���������� ����� �� ���������?";
	std::cin >> passengerEnter;
	passengerTotal = passengerTotal - passengerExit + passengerEnter;
	passengerCount += passengerEnter;
	std::cout << "������������ � ��������� ����� ����������. � ������ ����������: " << passengerTotal << "\n";
	std::cout << "-------- ���� ----------";
	std::cout << "��������� �� ��������� ����� ���������. � ������ ����������:" << passengerTotal << "\n";
	std::cout << "������� ���������� ����� �� ���������?";
	std::cin >> passengerExit;
	std::cout << "������� ���������� ����� �� ���������?";
	std::cin >> passengerEnter;
	passengerTotal = passengerTotal - passengerExit + passengerEnter;
	passengerCount += passengerEnter;
	std::cout << "������������ � ��������� ����� ����������. � ������ ����������: " << passengerTotal << "\n";
	std::cout << "-------- ���� ----------";
	std::cout << "��������� �� ��������� ������� ������. � ������ ����������:" << passengerTotal << "\n";
	std::cout << "������� ���������� ����� �� ���������?";
	std::cin >> passengerExit;
	std::cout << "������� ���������� ����� �� ���������?";
	std::cin >> passengerEnter;
	passengerTotal = passengerTotal - passengerExit + passengerEnter;
	passengerCount += passengerEnter;
	std::cout << "������������ � ��������� ������� ������. � ������ ����������: " << passengerTotal << "\n";

	totalIncome = ticketPrice * passengerCount;
	std::cout << "����� ����������: " << totalIncome << " ���.\n";
	int driverSalary = totalIncome / 4;
	std::cout << "�������� ��������: " << driverSalary << " ���.\n";
	int fuelPayment = totalIncome / 5;
	std::cout << "������� �� �������: " << fuelPayment << " ���.\n";
	int taxes = totalIncome / 5;
	std::cout << "������: " << taxes << " ���.\n";
	int renovationPayment = totalIncome / 5;
	std::cout << "������� �� ������ ������: " << renovationPayment << " ���.\n";
	int totalProfit = totalIncome - driverSalary - fuelPayment - taxes - renovationPayment;
	std::cout << "����� �����: " << renovationPayment << " ���.\n";


	

	return 0;
}