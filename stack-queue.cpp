#include<iostream>
#include<stack>
#include<queue>
#include<algorithm>  //��׼�㷨ͷ�ļ�
using namespace std;


void test_stack()
{
	//stack�Ƚ������ֻ�ܶԶ��˲���ɾ������
	//ջ��ֻ�ж���Ԫ�ؿɱ�ʹ�ã������б�����Ϊ
	stack<int> st;
	st.empty();
	st.size(); //Ԫ�ظ���
	st.push(5); //��ջ
	st.pop();//��ջ

	//���캯��
	//stack<T> st;stack(const &stk);��������
	//��ֵ������=
	//���ݴ�ȡ
	//push(elem)��ջ��pop()��ջ��top()����ջ��Ԫ��
	//stack<int> stk = { 1,2,3,4 };������������
	stack<int> stk;
	stk.push(4);
	stk.push(3);
}

void test_queue()
{
	//queue�Ƚ��ȳ���ֻ�ܶ���β��
	//ֻ�ж�ͷ��β�ɱ����ʣ������б�������
	queue<int> q1;
	q1.push(2);
	q1.push(3);
	q1.push(8);
	q1.pop();

	//���캯��
	//queue<T> q;queue(const &Q);��������
	queue<int> q2;
	q2.front(); //��һ��Ԫ��
	q2.back(); //���һ��Ԫ��

	q2.empty();
	q2.size();



}

void main6()
{
	test_stack();
	test_queue();

}