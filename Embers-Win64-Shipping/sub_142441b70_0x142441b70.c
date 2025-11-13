// 函数: sub_142441b70
// 地址: 0x142441b70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s< 0 || arg2 s>= *(arg1 + 0xa0))
    int64_t rax
    rax.b = 0
    return rax

int64_t r10 = sx.q(arg2) << 3
void* rsi = *(r10 + *(arg1 + 0x98))

if (rsi != 0 && *(rsi + 0xb8) == 3)
    *(arg1 + 0x56a) -= 1

int32_t rcx = *(arg1 + 0xa0)
int32_t rax_4 = rcx - arg2

if (rax_4 != 1)
    int64_t r9_1 = *(arg1 + 0x98)
    memmove(r9_1 + r10, r9_1 + (sx.q(arg2 + 1) << 3), (rax_4 - 1) << 3)
    rcx = *(arg1 + 0xa0)

*(arg1 + 0xa0) = rcx - 1
sub_1405c53d0(arg1 + 0x98)
sub_142440650(arg1 + 0xa8, rsi)
sub_1420e7830(rsi)
int64_t rax_8
rax_8.b = 1
return rax_8
