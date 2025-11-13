// 函数: sub_141c4bed0
// 地址: 0x141c4bed0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = j_sub_140a82f30(0x40)

if (rax == 0)
    *arg2 = rax
    return arg2

*rax = &data_143208358
rax[1] = 0
int64_t r14 = sx.q(*(arg1 + 0x10))
int64_t r15 = *(arg1 + 8)
rax[2].d = r14.d

if (r14.d != 0)
    sub_141c457d0(&rax[1], r14.d, 0)
    memcpy(rax[1], r15, (r14 << 2).d)
else
    *(rax + 0x14) = 0

rax[3].d = *(arg1 + 0x18)
int128_t zmm0 = *(arg1 + 0x20)
*arg2 = rax
*(rax + 0x20) = zmm0
*(rax + 0x30) = *(arg1 + 0x30)
return arg2
