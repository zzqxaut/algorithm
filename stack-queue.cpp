#include<iostream>
#include<stack>
#include<queue>
#include<algorithm>  //标准算法头文件
using namespace std;


void test_stack()
{
	//stack先进后出，只能对顶端插入删除操作
	//栈中只有顶端元素可被使用，不能有遍历行为
	stack<int> st;
	st.empty();
	st.size(); //元素个数
	st.push(5); //入栈
	st.pop();//出栈

	//构造函数
	//stack<T> st;stack(const &stk);拷贝构造
	//赋值：重载=
	//数据存取
	//push(elem)入栈；pop()出栈；top()返回栈顶元素
	//stack<int> stk = { 1,2,3,4 };不能这样构造
	stack<int> stk;
	stk.push(4);
	stk.push(3);
}

void test_queue()
{
	//queue先进先出，只能顶进尾出
	//只有队头队尾可被访问，不能有遍历操作
	queue<int> q1;
	q1.push(2);
	q1.push(3);
	q1.push(8);
	q1.pop();

	//构造函数
	//queue<T> q;queue(const &Q);拷贝构造
	queue<int> q2;
	q2.front(); //第一个元素
	q2.back(); //最后一个元素

	q2.empty();
	q2.size();



}

void main6()
{
	test_stack();
	test_queue();

}