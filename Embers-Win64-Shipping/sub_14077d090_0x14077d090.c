// 函数: sub_14077d090
// 地址: 0x14077d090
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_14077e0c0(arg1, arg2)
sub_140767bd0(&arg1[4], arg2)
int16_t* rax = *(arg2 + 0x10)
uint32_t rdx_1 = zx.d(*rax)
*(arg2 + 0x10) = &rax[1]
int32_t rdx_2 = rdx_1 & 0x7fff
arg1[0xa] = rdx_2
int32_t rax_2
rax_2.b = rdx_2 != 0x7fff
arg1[0xb] = rax_2
void* rax_3 = &arg1[0xc]
*rax_3 = 0
int32_t rcx_1 = arg1[0xa]

if (rcx_1 != 0x7fff)
    rax_3 = zx.q(*(arg2 + 0x80) * rcx_1) + *(arg2 + 0x70)

*(arg1 + 0x38) = rax_3
int16_t* rax_6 = *(arg2 + 0x10)
int32_t rdx_4 = zx.d(*rax_6) & 0x7fff
*(arg2 + 0x10) = &rax_6[1]
arg1[0x10] = rdx_4
int32_t r8
r8.b = rdx_4 != 0x7fff
arg1[0x11] = r8

if (rdx_4 == 0x7fff)
    *(arg1 + 0x50) = &arg1[0x12]
    return arg1

*(arg1 + 0x50) = zx.q(*(arg2 + 0x80) * rdx_4) + *(arg2 + 0x70)
return arg1
