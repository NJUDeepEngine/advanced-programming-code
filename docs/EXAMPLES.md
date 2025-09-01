# C++ OOP 示例详解

本文档详细说明了每个示例的内容和学习要点。

## 📁 目录结构

### 01. 类与对象基础 (`src/01_classes_and_objects/`)

#### 01_class_basics.cpp
**学习要点**: 类的基本概念、封装、访问控制
- 类的定义和成员变量
- 公有和私有成员
- getter/setter方法
- const成员函数

#### 05_static_members.cpp
**学习要点**: 静态成员
- 静态数据成员
- 静态成员函数
- 静态成员的作用域和生命周期

#### 12_composition.cpp
**学习要点**: 组合关系
- has-a关系的实现
- 成员对象的构造和析构
- 组合vs继承

#### 13_friend_stream.cpp
**学习要点**: 友元函数和流操作
- friend关键字的使用
- 流操作符重载
- 友元函数的访问权限

#### 14_array_vector_objects.cpp
**学习要点**: 对象容器
- 对象数组的使用
- std::vector与对象
- 容器的内存管理

### 02. this指针 (`src/02_this_pointer/`)

#### 02_this_implicit.cpp
**学习要点**: this指针的隐式使用
- this指针的概念
- 成员函数中的this
- 隐式this指针

#### 03_this_pass_to_func.cpp
**学习要点**: this指针的显式传递
- 显式使用this指针
- this指针传递给函数
- 指针和引用的使用

#### 04_method_chaining.cpp
**学习要点**: 方法链式调用
- 返回*this实现链式调用
- 链式调用的优势
- 实际应用场景

### 03. 构造函数与析构函数 (`src/03_constructors_destructors/`)

#### 06_ctor_overload.cpp
**学习要点**: 构造函数重载
- 多个构造函数
- 参数不同的重载
- 默认构造函数

#### 07_init_list_const_ref.cpp
**学习要点**: 初始化列表和const引用
- 成员初始化列表
- const引用参数
- 性能优化

#### 08_default_member_init_order.cpp
**学习要点**: 默认成员初始化和初始化顺序
- 默认成员初始化
- 初始化顺序规则
- 注意事项

#### 09_destructor_resource.cpp
**学习要点**: 析构函数和资源管理
- 析构函数的作用
- 资源释放
- RAII原则

#### 10_copy_vs_assignment.cpp
**学习要点**: 拷贝构造和赋值操作
- 拷贝构造函数
- 赋值操作符
- Rule of Three

#### 11_member_object_order.cpp
**学习要点**: 成员对象的构造和析构顺序
- 构造顺序
- 析构顺序
- 依赖关系

### 00. 综合示例 (`examples/`)

#### 00_demo.cpp
**学习要点**: 一站式演示
- 静态成员的使用
- this指针和链式调用
- const成员函数
- 对象容器
- 构造和析构过程

## 🎯 学习路径建议

### 初学者路径
1. 从 `01_class_basics.cpp` 开始，理解类的基本概念
2. 学习 `05_static_members.cpp`，了解静态成员
3. 进入 `02_this_pointer/` 目录，学习this指针
4. 最后学习 `03_constructors_destructors/` 目录的内容

### 进阶学习路径
1. 先运行 `00_demo.cpp` 获得整体认识
2. 按主题深入学习各个示例
3. 尝试修改代码，观察不同行为
4. 结合实际项目应用所学知识

## 💡 实践建议

1. **编译运行**: 每个示例都要编译运行，观察输出
2. **修改实验**: 尝试修改参数、添加功能
3. **理解原理**: 不仅要知道怎么做，更要理解为什么
4. **实际应用**: 将学到的概念应用到自己的项目中

## 🔧 常见问题

### 编译警告
- `unqualified call to 'std::move'`: 需要包含 `<utility>` 头文件
- `field will be initialized after field`: 注意成员初始化顺序

### 运行时问题
- 内存泄漏: 确保正确实现析构函数
- 段错误: 检查指针和引用的使用

## 📚 扩展阅读

- [C++ Core Guidelines](https://isocpp.github.io/CppCoreGuidelines/)
- [Effective C++](https://www.amazon.com/Effective-C-Addison-Wesley-Professional-Computing/dp/0321334876)
- [Modern C++ Design](https://www.amazon.com/Modern-Design-Generic-Programming-Patterns/dp/0201704315)
