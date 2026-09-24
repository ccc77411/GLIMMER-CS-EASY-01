# part1 了解C语言配置文件  
## 文字说明
### 1. **什么是GCC，什么是MinGW？它的作用是什么？**  

- **GCC**的全称为 **GNU Compiler Collection**，通常是指GNU编译器套装，是一套开源的编译器工具集。  
作用：可用来编译C语言源代码，同时也可把C语言源代码翻译成电脑能执行的程序。  
- **MinGW**是一个Windows系统下的GCC的移植版本。   
作用：可让我们在Windows系统下下载GCC编译器，GDB调试器，让我们能在Windows上编译，调试C语言代码。   
### 2. **c_cpp_properties.json launch.json tasks.json这三个文件分别有什么作用？**  
-  **c_cpp_properties.json**是用来配置C/C++拓展的，它可以通过配置编译器路径，头文件位置等让编译器能进行代码提示和错误检查。  
-  **launch.json**是用来调试配置文件的，用来配置gdb调试器，启动调试，控制是否用外置控制台，指定调试程序路径等  
- **tasks.json**是用来编译任务配置的，它可让我们按下快捷键就能自动执行GCC，把.c文件编译生成exe程序。  
### 3. **为什么要在编译器内下载C语言的插件，插件的作用又是什么？**  
- 原因：因为编辑器本身并不支持C语言，它并不知道C语言的语法等  
- 作用：安装插件（像c/c++等）可以让编译器识别C语言，可以调用GCC等来进行编译和调试，并还可以进行错误检查。
## launch.json的注释补全  
```  {
    
    // 使⽤ IntelliSense 了解相关属性。
    
    // 悬停以查看现有属性的描述。
    
    // 欲了解更多信息，请访问: https://go.microsoft.com/fwlink/?linkid=830387     "version": "0.2.0",
    "configurations": [
        {
            "name": "gcc.exe - ⽣成和调试活动⽂件",  // 该调试任务的名字，启动调试时会在待选列表中显⽰
            "type": "cppdbg",
            "request": "launch",
            "program": "${fileDirname}\\${fileBasenameNoExtension}.exe",            "args": [],
            "stopAtEntry": false,  //用来控制是否在入口处暂停，如果设置为false则不暂停，如果为true则暂停
            "cwd": "${workspaceFolder}",
            "environment": [],
            "externalConsole": false,  //用来控制是否启动外部终端，flase表示不启动，true表示启动
            "MIMode": "gdb",
            "miDebuggerPath": "C:\\mingw64\\bin\\gdb.exe",  //表示调试器的路径，与电脑中的gdb.exe路径一致
            "setupCommands": [
                {
                    "description": "为 gdb 启⽤整⻬打印",
                    "text": "-enable-pretty-printing",
                    "ignoreFailures": true
                }
            ],
            "preLaunchTask": "C/C++: gcc.exe build active file"  // 调试前的预执⾏任务，这⾥的值是tasks.json⽂件中对应的编译任务，也就是调试前需要先编译
        }
    ]
}  
```
## 图片说明  
- 内置终端打印 "hello world"   
  <img width="2487" height="1456" alt="image" src="https://github.com/user-attachments/assets/363ebae2-3158-4c56-b97f-e4bf26be8ed0" />
- 外置终端打印 "hello world"
  <img width="1269" height="733" alt="image" src="https://github.com/user-attachments/assets/17c8a0b3-3f90-4062-b45c-51d02982612e" />
  - 可以看出成功在内外置终端打印出“hello world”。
  ---
  ps：感觉这一题主要是记忆一些配置c语言的基础概念，刚开始时搜概念的时候真的好痛苦，完全不理解，但在老师讲了之后才更理解了点，也稍对回答做出了些调整，至少让我自己理解了，但可能还是有些许瑕疵吧，还望学长学姐理解。





