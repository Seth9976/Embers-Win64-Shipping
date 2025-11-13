// 函数: sub_142b92db0
// 地址: 0x142b92db0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0 || arg2 == 0)
    return 

void* rax = arg1[1]
arg2[1] = 0
*arg2 = rax

if (rax != 0)
    *(rax + 8) = arg2
    arg1[1] = arg2
    return 

*arg1 = arg2
arg1[1] = arg2
