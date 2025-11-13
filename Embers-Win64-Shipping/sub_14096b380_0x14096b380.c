// 函数: sub_14096b380
// 地址: 0x14096b380
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(*(arg1 + 0x240))
int32_t rax = (rdi + 1).d
*(arg1 + 0x240) = rax

if (rax s> *(arg1 + 0x244))
    sub_1405a4d70(arg1 + 0x238)

int64_t result = *(arg1 + 0x238)
*(result + (rdi << 3)) = arg2
return result
