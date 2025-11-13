// 函数: sub_1420cf450
// 地址: 0x1420cf450
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (not(arg1 > 0f))
    int64_t rax
    rax.b = 0
    return rax

int32_t rax_2 = *(arg2 + 4) * 0xbb38435 + 0x3619636b
*(arg2 + 4) = rax_2
float rax_4
rax_4.b = arg1 >= (rax_2 u>> 9 | 0x3f800000) - 1f
return rax_4
