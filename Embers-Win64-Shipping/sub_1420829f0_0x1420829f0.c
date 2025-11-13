// 函数: sub_1420829f0
// 地址: 0x1420829f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = sub_140758d90(arg1 + 0x40, arg2)
int64_t result_1 = sx.q(result)

if (result_1.d == 0xffffffff)
    return result

int32_t rax = *(arg1 + 0x48)
int32_t rcx_2 = rax - result_1.d

if (rcx_2 != 1)
    memmove((result_1 << 4) + *(arg1 + 0x40), (sx.q((result_1 + 1).d) << 4) + *(arg1 + 0x40), 
        (rcx_2 - 1) << 4)
    rax = *(arg1 + 0x48)

*(arg1 + 0x48) = rax - 1
return sub_1405a5010(arg1 + 0x40) __tailcall
