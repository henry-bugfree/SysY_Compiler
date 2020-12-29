key features completed:  
全局变量声明，全局常数声明，函数内变量声明，函数内常数声明，常数表达式，含有identifier或函数调用的表达式，RETURN语句。  
以上功能经测试基本可达到与'clang -S -emit-llvm FILENAME'生成的.llvm文件一致**。  
*以上功能测试均不含数组。  
*针对测试，命令行输入./SysY可从test[NUM].c(NUM = 0,1,2,3,4...)中分别读取.c程序后生成对应的llvm[NUM].ll文件。    

key features 还在做:  
IF语句，WHILE语句，数组。    

关于genllvm.h中的两组函数:  
namespace ES//expression scout:  
先行遍历表达式，检查有无identifier或函数调用，若有返回非0，若无返回0;  
namespace FS//function scout:
先行遍历函数，将该函数中所有变量声明存入std::map<std::string,int> id_local中(string成员为变量名称,int成员为变量序号),以便后续操作;  

