// 函数: sub_1420c3620
// 地址: 0x1420c3620
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *(arg2 + 0x18)
arg1[1] = *(arg2 + 0x20)
void* rax_1 = *(arg2 + 0x28)
arg1[2] = rax_1

if (rax_1 != 0)
    *(rax_1 + 8) += 1

return arg1
