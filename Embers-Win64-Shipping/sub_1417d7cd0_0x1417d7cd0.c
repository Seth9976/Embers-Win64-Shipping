// 函数: sub_1417d7cd0
// 地址: 0x1417d7cd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(*(arg1 + 0x50))
int32_t rax = (rdi + 1).d
*(arg1 + 0x50) = rax

if (rax s> *(arg1 + 0x54))
    sub_1405a4d70(arg1 + 0x48)

int64_t result = *(arg1 + 0x48)
*(result + (rdi << 3)) = arg2
return result
