// 函数: sub_142745090
// 地址: 0x142745090
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x680) == 0)
    return arg1 + 0x2a8

int32_t rax = sub_141f5e0e0(arg1, arg2)
int64_t* rcx = *(arg1 + 0x680)
uint64_t rdx = 0
int64_t r9 = *rcx

if (rax - 1 s>= 0)
    rdx = zx.q(rax - 1)

int64_t rax_1 = (*(r9 + 0xd0))(rcx, rdx, rax - 1, r9)

if (*(arg1 + 0xa8) == 0)
    sub_141ee69e0(arg1)

*(arg1 + 0x398) = rax_1
*(arg1 + 0x2a8) = rax
return arg1 + 0x2a8
