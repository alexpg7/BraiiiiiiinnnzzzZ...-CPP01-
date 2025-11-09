# 🧟 BraiiiiiiinnnzzzZ...-CPP01- ![Static Badge](https://img.shields.io/badge/Barcelona-black?style=for-the-badge&logo=42&logoColor=%23FFFFFF)
![Static Badge](https://img.shields.io/badge/C++-blue?style=flat&logo=cplusplus)
![Static Badge](https://img.shields.io/badge/Makefile-green?style=flat&logo=AnkerMake)
![Static Badge](https://img.shields.io/badge/status-completed-green?style=flat)

A first exercise as an introduction to C++ syntax.

## ⚒️ Compilation

All exercises can be compilated with the command ``make``
```bash
make
```

## 0️⃣ Ex00

This exercise has the goal to show you the **new** keyword *new* in C++. When using *new* in front of a variable when declaring a class, it returns a pointer to that object. That means allocating the object in the *heap* instead of the stack, so you can use it in any function (it has the same utility that ``malloc`` in C). In C, for each ``malloc`` you need a ``free`` to avoid memory leaks. Here, in C++, for each *new* you need a *delete* keyword. These four lines would be equivalent:

```C
Zombie *a = (Zombie *)malloc(sizeof(Zombie));
free(a);
```
```C++
Zombie *a = new Zombie();
delete a;
```

What is the advantage? *new*'s do not need to be protected 😎!

## 1️⃣ Ex01

This is just the implementation of the *new* keyword to a real case :D

## 2️⃣ Ex02

Here, the thing gets more interesting... As in C, we can use an objects value or pointer to use them in another function. So, for these two cases we have what we already know:

```C++
void   ft_changeval(std::string str)
{
  str = "Goodbye";
}

void  ft_changeptr(std::string *str)
{
  *str = "Goodbye";
}

int   main(void)
{
  std::string str = "Hello";
  ft_changeval(str);
  std::cout << str << std::endl;
  ft_changeptr(&str);
  std::cout << str << std::endl;
  return 0;
}
```
```output
Hello
Goodbye
```
This happens because when inserting the value of the object inside a function, the function is executed with new memory allocations, so the values are just changed inside the scope of the function.

In C++, we are introduced a new way to use variables in a function: references. When calling the function, the object has to be inserted in the same way as if we put the value. In the definition of the function, instead, it has to be put the keychar ``&`` (as if we were inserting the pointer, a little bit messy). This makes the function to use the same memory allocation that the mother function had for that object, it doesn't create a new one.

```c++
void   ft_changeval(std::string str)
{
  str = "Goodbye";
}

void  ft_changeref(std::string &str)
{
  str = "Goodbye";
}

int   main(void)
{
  std::string str = "Hello";
  ft_changeval(str);
  std::cout << str << std::endl;
  ft_changeref(&str);
  std::cout << str << std::endl;
  return 0;
}
```
```output
Hello
Goodbye
```

In this case, it is the same as using the pointer. The key advantage of using references instead of pointers is that references must be initialized when declared. So, you can skip adding the null pointer exception (``if (!ptr) protect()``). The disadvantage is that you cannot reassign a reference; so, using references as single objects (``obj &ref = x``) is not that useful in the end.
