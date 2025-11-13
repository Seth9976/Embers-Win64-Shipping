// 函数: sub_140d94310
// 地址: 0x140d94310
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2
arg1[1] = arg2[1]
arg1[2] = arg2[2]
arg1[3].q = arg2[3].q
*(arg1 + 0x38) = *(arg2 + 0x38)
void* rax_1 = arg2[4].q
arg1[4].q = rax_1

if (rax_1 != 0)
    *(rax_1 + 8) += 1

*(arg1 + 0x48) = *arg3
void* rax_3 = arg3[1]
arg1[5].q = rax_3

if (rax_3 != 0)
    *(rax_3 + 8) += 1

return arg1
