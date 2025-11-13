// 函数: sub_14225aae0
// 地址: 0x14225aae0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_14330f468
__builtin_memset(&arg1[1], 0, 0x18)
*arg1 = &data_143310350
arg1[4].d = 0
void* rax = *arg2
arg1[5] = rax

if (rax != 0)
    *(rax + 0x48) += 1

arg1[6] = arg4
arg1[4].d = 1
arg1[3] = 0
arg1[2] = arg3
return arg1
