// 函数: sub_1422c5b30
// 地址: 0x1422c5b30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t rax_2
uint32_t rcx

if (*(arg1 + 0x21) == 0)
    rcx = *(arg1 + 0x24)
    int32_t rax_3
    rax_3.b = *(arg1 + 0x28) != 0
    rax_2 = (rax_3 + 2) * rcx * arg2.d
else
    int32_t r9_1 = *(zx.q((arg2 << 2).d) + *(arg1 + 0x78))
    rax_2 = r9_1 u>> 8
    rcx = zx.d(r9_1.b)

if (arg3 u>= rcx)
    return 0

int64_t rcx_2 = zx.q(rax_2) + *(arg1 + 0x38)
uint64_t rax_6 = zx.q(arg3)

if (*(arg1 + 0x28) == 0)
    return zx.q(*(rax_6 + rcx_2))

return zx.q(*(rcx_2 + (rax_6 << 1)))
