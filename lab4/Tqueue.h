#pragma once



template <class T>
class Tqueue
{
private:
	T* arr;
	int MaxSize;
	int head, tail;
	int countEl;

public:
	Tqueue(int _MaxSize=10) {
		if (_MaxSize < 0) { throw _MaxSize; }
		MaxSize = _MaxSize;
		arr = new T[MaxSize];
		head = 0;
		tail = -1;
		countEl = 0;
	}
	const bool Empty() {
		if (countEl == 0)
			return true;
		else
			return false;
	}
	const bool Full(){
		if (countEl == MaxSize)
			return true;
		else
			return false;
	}
	void Push(T el) {
		if (Full()) {
			throw countEl;
		}
		tail = (tail + 1) % MaxSize;
		arr[tail] = el;
		countEl++;
		

	}
	T Pop() {
		if (Empty()) {
			throw countEl;
		}
		T res = arr[head];
		head++;
		countEl--;
		return res;
	}
	const void Back() {

		return arr[tail];
	}
	const void Front() {
		return arr[head];
	}
	/*
	�������� ����� ���������� ��� ����� � ������ � ������ ��� � �����(��� ����������)
	back ����� ������� �� �� ����� �������
	front ������ ������� �� �� ������ �������
	� ������ ����� �� ������ ���� �����
	
	����� ���� ���� ���� + �������
	�� ���� ���� - ����
	����� ���� ���� �����
	���� ����� ��
	���� ������ ��
	���� �� �����������
	*/
	~Tqueue() {
		delete[] arr;
	}

};

