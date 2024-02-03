#pragma once


int main()
{
	//func();
  return 0;
}

// [[nodiscani]]属性可用于有一个返回值的函数， 以使编译器在该函数被调用却没有对返回的值进行任何处理时发出警告
[[nodiscard("Some explanatiion")]]
int func() {
	return 42;
}