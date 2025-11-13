// 函数: sub_1422c5bb0
// 地址: 0x1422c5bb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result
uint32_t rcx

if (*(arg1 + 0x21) == 0)
    rcx = *(arg1 + 0x24)
    int32_t rax_2
    rax_2.b = *(arg1 + 0x28) != 0
    result = zx.q((rax_2 + 2) * rcx * arg2.d)
else
    int32_t r9_1 = *(zx.q((arg2 << 2).d) + *(arg1 + 0x78))
    result = zx.q(r9_1 u>> 8)
    rcx = zx.d(r9_1.b)

if (arg3 u>= rcx)
    result.b = 0
    return result

int32_t r10
r10.b = *(arg1 + 0x28) != 0
return zx.q(*(zx.q(rcx * (r10 + 1) + arg3) + *(arg1 + 0x38) + result))
