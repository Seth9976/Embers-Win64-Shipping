// 函数: sub_140d429c0
// 地址: 0x140d429c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2
arg1[1] = arg2[1]
void* rax_1 = arg2[2]
arg1[2] = rax_1

if (rax_1 != 0)
    *(rax_1 + 8) += 1

return arg1
