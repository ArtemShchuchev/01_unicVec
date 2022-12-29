#include <iostream>
#include <vector>
#include <algorithm>

void printHeader();

void delDubls(std::vector<int>& vec)
{
	std::sort(vec.begin(), vec.end());
	vec.erase( (std::unique(vec.begin(), vec.end())), vec.end() );
}

// ���������� �������� << ��� cout (����� �������� std::vector<VType>)
template <typename VType>
std::ostream& operator<< (std::ostream& out, const std::vector<VType>& vect)
{
	for (const auto& val : vect) out << val << " ";
	return out;
}

int main()
{
	printHeader();

	std::vector<int> vec{ 1, 1, 2, 5, 6, 1, 2, 4 };
	std::cout << "[IN]: " << vec << std::endl;

	delDubls(vec);

	std::cout << "[OUT]: " << vec << std::endl;

	return 0;
}

// �������
// ��������� 
void printHeader()
{
	using namespace std;
	setlocale(LC_ALL, "Russian");   // ����� ������� �����
	system("chcp 1251");            // ����������� ��������� �������
	std::system("cls");
	cout << "������ 1. ���������� ������\n"
		 << "---------------------------\n" << endl;
}