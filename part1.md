# part1 了解C语言配置文件  
## 文字说明
1. **什么是GCC，什么是MinGW？它的作用是什么？**  

- **GCC**的全称为 **GNU Compiler Collection**，通常是指GNU编译器套装，是一套开源的编译器工具集。  
作用：可用来编译C语言源代码，同时也可把C语言源代码翻译成电脑能执行的程序。  
- **MinGW**是一个Windows系统下的GCC的移植版本。 
作用：可让我们在Windows系统下下载GCC编译器，GDB调试器，让我们能在Windows上编译，调试C语言代码。   
2. **c_cpp_properties.json launch.json tasks.json这三个文件分别有什么作用？**  
-  **c_cpp_properties.json**是用来配置C/C++拓展的，它可以通过配置编译器路径，头文件位置等让编译器能进行代码提示和错误检查。  
-  **launch.json**是用来编译任务配置的，它可让我们按下快捷键就能自动执行GCC，把.c文件编译生成exe程序。  
- **tasks.json**是用来调试配置文件的，用来配置gdb调试器，启动调试，控制是否用外置控制台，指定调试程序路径等。  
3. **为什么要在编译器内下载C语言的插件，插件的作用又是什么？**  
- 原因：因为编辑器本身并不支持C语言，它并不知道C语言的语法等  
- 作用：安装插件可以让编译器识别C语言，可以调用GCC等来进行编译和调试，并还可以进行错误检查。  
## 图片说明  
- 内置终端打印 "hello world"   
  <img width="2487" height="1456" alt="image" src="https://github.com/user-attachments/assets/363ebae2-3158-4c56-b97f-e4bf26be8ed0" />
- 外置终端打印 "hello world"
  <img width="2556" height="1486" alt="image" src="https://github.com/user-attachments/assets/05a34a0a-1e24-417d-b7fd-3f0856435649" />




