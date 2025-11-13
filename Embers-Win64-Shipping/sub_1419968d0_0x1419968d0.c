// 函数: sub_1419968d0
// 地址: 0x1419968d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg2 + 0x10) = *(arg1 + 0x1a0)
*(arg2 + 0x18) = *(arg1 + 0x218)
int64_t rdi = sx.q(*(arg1 + 0x18))
int32_t rax_2 = (rdi + 1).d
*(arg1 + 0x18) = rax_2

if (rax_2 s> *(arg1 + 0x1c))
    sub_14083a440(arg1 + 0x10, rdi.d)

int64_t result = *(arg1 + 0x10)
*(result + (rdi << 3)) = arg2
return result
