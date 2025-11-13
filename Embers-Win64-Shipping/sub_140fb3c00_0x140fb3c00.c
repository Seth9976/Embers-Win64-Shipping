// 函数: sub_140fb3c00
// 地址: 0x140fb3c00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r8 = *(arg1 + 0x3a0)
*arg2 = *(r8 + 0x10)
void* rax_1 = *(r8 + 0x18)
arg2[1] = rax_1

if (rax_1 != 0)
    *(rax_1 + 8) += 1

arg2[2].d = *(r8 + 0x20)
return arg2
