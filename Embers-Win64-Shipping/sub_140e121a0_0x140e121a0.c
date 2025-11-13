// 函数: sub_140e121a0
// 地址: 0x140e121a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *(*(arg1 + 0x10) + (sx.q(arg3) << 3))
*arg2 = *(rcx + 0x10)
void* rax_1 = *(rcx + 0x18)
arg2[1] = rax_1

if (rax_1 != 0)
    *(rax_1 + 8) += 1

return arg2
