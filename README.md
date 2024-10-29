### 利用Antlr4 实现一个支持整型加、减、乘、除的计算器  by dcc

#### 首先配置相关环境

```
1. Antlr4 https://www.antlr.org/    #包括Antlr4的Cpp依赖
2. g++
3. cmake VERSION 3.20
```

#### 编译项目

```
1. mkdir build
2. cd build
3. cmake ..
4. make
```

#### 测试

```
#编译后会在build目录产生一个compute可执行文件   test.txt是在上一目录的测试文件
./compute ../test.txt
```

<img src="D:/研究生课程/高级编译技术/work/Antlr4-compute/test.png" style="zoom: 50%;" />

测试结果正确：

<img src="D:/研究生课程/高级编译技术/work/Antlr4-compute/test-result.png" style="zoom:50%;" />

#### 实现代码

词法文件computeLex.g4 

语法文件compute.g4

```
antlr4 -Dlanguage=Cpp -visitor -o visitor compute.g4 #生成的文件在visitor目录
```

主程序main.cpp 以visitor模式计算结果

