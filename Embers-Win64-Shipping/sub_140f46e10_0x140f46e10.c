// 函数: sub_140f46e10
// 地址: 0x140f46e10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *(*(arg1 + 0x10) + (sx.q(arg3) << 3))
*arg2 = *(rcx + 0x20)
void* rax_1 = *(rcx + 0x28)
arg2[1] = rax_1

if (rax_1 != 0)
    *(rax_1 + 8) += 1

return arg2
