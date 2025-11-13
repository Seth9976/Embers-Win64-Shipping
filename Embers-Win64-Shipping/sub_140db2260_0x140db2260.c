// 函数: sub_140db2260
// 地址: 0x140db2260
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r8 = *(arg1 + 0x10) + 8
void* rax = *(r8 + 0x120)

if (rax != 0)
    r8 = rax

*arg2 = *(r8 + 0x38)
void* rax_2 = *(r8 + 0x40)
arg2[1] = rax_2

if (rax_2 != 0)
    *(rax_2 + 8) += 1

return arg2
