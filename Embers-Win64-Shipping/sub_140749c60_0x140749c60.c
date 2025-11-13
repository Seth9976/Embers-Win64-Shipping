// 函数: sub_140749c60
// 地址: 0x140749c60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(*(arg1 + 0x60))
int32_t rax = (rdi + 1).d
*(arg1 + 0x60) = rax

if (rax s> *(arg1 + 0x64))
    sub_1405a4d70(arg1 + 0x58)

int64_t result = *(arg1 + 0x58)
*(result + (rdi << 3)) = arg2
return result
