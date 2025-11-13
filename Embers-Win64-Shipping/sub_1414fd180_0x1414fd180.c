// 函数: sub_1414fd180
// 地址: 0x1414fd180
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r8 = *(arg1 + 0x10)
int64_t result = sx.q(*(r8 + 0x14))

if (result.d != 0)
    void* r9_2 = (result << 5) + r8
    *((sx.q(*(r9_2 + 0x18)) << 5) + r8 + 0x14) = *(r9_2 + 0x14)
    *((sx.q(*(r9_2 + 0x14)) << 5) + *(arg1 + 0x10) + 0x18) = *(r9_2 + 0x18)
    *(r9_2 + 0x18) = result.d
    *(r9_2 + 0x14) = result.d
    return result

int64_t rdi = sx.q(*(arg1 + 0x18))
int32_t rax = (rdi + 1).d
*(arg1 + 0x18) = rax

if (rax s> *(arg1 + 0x1c))
    sub_1405c4e40(arg1 + 0x10)

int64_t rdx_6 = rdi << 5
__builtin_memset(rdx_6 + *(arg1 + 0x10), 0, 0x20)
int64_t rcx_4 = *(arg1 + 0x10)
*(rdx_6 + rcx_4 + 0x18) = rdi.d
*(rdx_6 + rcx_4 + 0x14) = rdi.d
return zx.q(rdi.d)
