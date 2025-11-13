// 函数: sub_1423b00a0
// 地址: 0x1423b00a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*arg1 == 0)
    return 0

int64_t r8 = sx.q(*(arg1 + 0x68))
int32_t rax_2 = r8.d - *(arg1 + 0x64) - 1

if (rax_2 s<= arg2)
    arg2 = rax_2

return sx.q(*(arg1 + (r8 << 2) + 0x18) - *(arg1 + (sx.q(r8.d - arg2) << 2) + 0x18))
