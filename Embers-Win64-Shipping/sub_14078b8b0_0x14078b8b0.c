// 函数: sub_14078b8b0
// 地址: 0x14078b8b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char result = sub_14074d7c0(arg1, arg2)

if (result == 0)
    return result

int32_t rax_1 = *(arg2 + 0x50) & 1
int32_t rcx_1 = *(arg1 + 0x50) & 1
int64_t rbx
rbx.b = rax_1 == rcx_1

if (rax_1 == rcx_1 && rcx_1 != 0)
    int64_t rax_2 = sx.q(*(arg2 + 0x38))
    int32_t rax_3
    
    if (rax_2.d == *(arg1 + 0x38))
        rax_3 = memcmp(*(arg2 + 0x30), *(arg1 + 0x30), rax_2 << 2)
    
    if (rax_2.d != *(arg1 + 0x38) || rax_3 != 0)
        rbx.b = 0

return zx.q(rbx.b)
