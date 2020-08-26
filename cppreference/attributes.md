# attributes 属性说明符序列  

参考资料  
[attribute specifier sequence](https://en.cppreference.com/w/cpp/language/attributes)  
[c++ - 属性说明符序列是否继承？](https://www.coder.work/article/113113)

在windows平台我们用过__declspec()，在linux平台有attribute((...))。C++语言一直在做统一，希望能让developer更好地开发跨平台应用，从std::thread上我们能看到这一点（当然std::thread还是差了些意思，线程的pause resume start stop都没有抽离出来）。而attribute也是肩负着这样的使命。  

[[attr]]  
[[attr1, attr2, attr3]]
[[attr(argv)]]  
[[attr1, attr2, attr3(argv)]]  
[[namespace attr]]  
[[namespace attr1, attr2, attr3(argv)]] 

## [C++ 属性：noreturn (C++11 起)](https://zh.cppreference.com/w/cpp/language/attributes/noreturn)  
noreturn是说调用的function不会返回了。
    void [[noreturn]] func(){}  

这样的func是错误的，因为如果我们在  https://gcc.godbolt.org/　　看程序对应的汇编代码，可以发现，最终还是会有一个retq
一般func就是throw exit(3) 或者是一个永远在执行的代码块。  
在noreturn页面上，列举了具有noreturn属性的函数声明。  

## [C++ 属性：carries_dependency (C++11 起)](https://zh.cppreference.com/w/cpp/language/attributes/carries_dependency)

