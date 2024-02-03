#pragma once


#pragma region Deprecated 标记 弃用
/*
[[deprecated]]可用于将某些内容标记为己弃用， 这意味着仍可以使用它，
但不鼓励使用。 此属性 接受一个可选参数， 该参数可用于解释弃用的原因

*/

[[deprecated("Unsafe method , please use xyz")]] void func();
#pragma endregion







int main() {
  func();
  return 0;
}