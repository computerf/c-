#define _CRT _SECURE_NO_ WARNINGS 1
#include"employee.h"

//构造函数
Employee:: Employee(int id, string name, int dId)
{
	this->m_Id = id;
	this->m_Name = name;
	this->m_DeptId = dId;
}
//显示个人信息
void Employee::showInfo()
{
	cout << "职工编号:" << this->m_Id
		<< "\t职工姓名:" << this->m_Name
		<< "\t岗位:" << this->GetDeptName()
		 << "\t岗位职责:完成经理交给的任务" << endl;
}
string Employee::GetDeptName()
{
	return string("员工");
}