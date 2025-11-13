// 函数: sub_141e140b0
// 地址: 0x141e140b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(*(arg1 + 0x18))
int32_t rax = (rdi + 1).d
*(arg1 + 0x18) = rax

if (rax s> *(arg1 + 0x1c))
    sub_1405a4f90(arg1 + 0x10)

int64_t* result = (rdi << 4) + *(arg1 + 0x10)
*result = arg2
result[1] = arg3
return result
