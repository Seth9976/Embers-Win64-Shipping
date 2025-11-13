// 函数: sub_142ba9d60
// 地址: 0x142ba9d60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 - 1 u> 2)
    *(arg1 + 0x18) = 0x84
    int32_t rax_3
    rax_3.b = 1
    return rax_3

int64_t r9_2 = (sx.q(arg2 - 1) + 0x28) * 2
int64_t rax_1 = *(arg1 + (r9_2 << 3))

if (rax_1 == 0)
    *(arg1 + 0x18) = 0x8a
    rax_1.b = 1
    return rax_1

if (arg3 s> *(arg1 + (r9_2 << 3) + 8))
    *(arg1 + 0x18) = 0x83
    rax_1.b = 1
    return rax_1

*(arg1 + 0x208) = rax_1
*(arg1 + 0x214) = *(arg1 + (r9_2 << 3) + 8)
int32_t rax_2
rax_2.b = 0
*(arg1 + 0x210) = arg3
*(arg1 + 0x204) = arg2
return rax_2
