// 函数: sub_14077d3e0
// 地址: 0x14077d3e0
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
uint32_t rdx_3 = zx.d(*rax_6)
*(arg2 + 0x10) = &rax_6[1]
int32_t rdx_4 = rdx_3 & 0x7fff
arg1[0x10] = rdx_4
int32_t rax_8
rax_8.b = rdx_4 != 0x7fff
arg1[0x11] = rax_8
void* rcx_4

if (rdx_4 == 0x7fff)
    rcx_4 = &arg1[0x12]
else
    rcx_4 = zx.q(*(arg2 + 0x80) * rdx_4) + *(arg2 + 0x70)

*(arg1 + 0x50) = rcx_4
int16_t* rax_9 = *(arg2 + 0x10)
int32_t rdx_6 = zx.d(*rax_9) & 0x7fff
*(arg2 + 0x10) = &rax_9[1]
arg1[0x16] = rdx_6
int32_t r8
r8.b = rdx_6 != 0x7fff
arg1[0x17] = r8

if (rdx_6 == 0x7fff)
    *(arg1 + 0x68) = &arg1[0x18]
    return arg1

*(arg1 + 0x68) = zx.q(*(arg2 + 0x80) * rdx_6) + *(arg2 + 0x70)
return arg1
