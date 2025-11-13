// 函数: sub_140db22a0
// 地址: 0x140db22a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax_3 = *(arg1 + 0x128)
void* rcx = arg1 + 8

if (rax_3 != 0)
    rcx = rax_3

*arg2 = *(rcx + 0x38)
void* rax_1 = *(rcx + 0x40)
arg2[1] = rax_1

if (rax_1 != 0)
    *(rax_1 + 8) += 1

return arg2
