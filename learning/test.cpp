#include <iostream>

using namespace std;

int main()
{
	//new �� delete �ؼ���
	//new��ʵ���Ǽ���calloc (�����ڶ���) delete����free
	//1.new���ص��Ǹ��������͵�ָ��
	//2.Ҫ�ͷ�new���ٵĿռ�delete������

	//new �������� (��ʼֵ)
	int* num =new int(10);
	cout << *num << endl;
	delete num;
	//cout << *num << endl;
	//��Ҫ�����ѱ� delete �����ݣ�����

	//new��������

	int* arr1 = new int[10] {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
	//�ͷ�����ü���[]
	delete[] arr1;

	int(*arr)[10] = new int[10][10]{1,2,3,4,5,6,7,8,9,0};
	delete[] arr;

	//
	return 0;
}