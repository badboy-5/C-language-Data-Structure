/*通过函数完成对结构体变量的输入和输出*/
# include <stdio.h>
# include <string.h>  //使用strcpy需要定义头文件

struct Student
{
	int age;
	char sex;
	char name[50];
};

void InputStudent(struct Student stu);

int main(void)
{
	struct Student st;

	InputStudent(st);
	printf("%d %c %s\n", st.age, st.sex, st.name);

	return 0;
}


//此函数不能修改主函数中st的值
void InputStudent(struct Student stu)
{
	stu.age = 10;
	strcpy(stu.name, "Bad");  //对字符串的处理必须使用strcpy，不能直接使用stu.name='Bad'
	stu.sex = 'M';
}
/*
在Visual C++6.0中的运行结果
-----------------------
-858993460 ?烫烫烫烫烫烫烫烫烫烫烫烫烫烫烫烫烫烫烫烫烫烫烫烫烫蘰�.
Press any key to continue
-----------------------
 */