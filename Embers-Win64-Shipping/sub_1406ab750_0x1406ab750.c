// 函数: sub_1406ab750
// 地址: 0x1406ab750
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg2 = &data_142d8be70
arg2[1] = *(arg1 + 8)
arg2[2] = 0
arg2[3] = 0
void* rax_1 = *(arg1 + 0x18)

if (rax_1 != 0)
    *(rax_1 + 8) += 1

arg2[2] = *(arg1 + 0x10)
arg2[3] = *(arg1 + 0x18)
return arg2
