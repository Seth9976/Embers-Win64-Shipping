// 函数: sub_14077d160
// 地址: 0x14077d160
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
uint32_t rdx_5 = zx.d(*rax_9)
*(arg2 + 0x10) = &rax_9[1]
int32_t rdx_6 = rdx_5 & 0x7fff
arg1[0x16] = rdx_6
int32_t rax_11
rax_11.b = rdx_6 != 0x7fff
arg1[0x17] = rax_11
void* rcx_7

if (rdx_6 == 0x7fff)
    rcx_7 = &arg1[0x18]
else
    rcx_7 = zx.q(*(arg2 + 0x80) * rdx_6) + *(arg2 + 0x70)

*(arg1 + 0x68) = rcx_7
int16_t* rax_12 = *(arg2 + 0x10)
uint32_t rdx_7 = zx.d(*rax_12)
*(arg2 + 0x10) = &rax_12[1]
int32_t rdx_8 = rdx_7 & 0x7fff
arg1[0x1c] = rdx_8
int32_t rax_14
rax_14.b = rdx_8 != 0x7fff
arg1[0x1d] = rax_14
void* rcx_10

if (rdx_8 == 0x7fff)
    rcx_10 = &arg1[0x1e]
else
    rcx_10 = zx.q(*(arg2 + 0x80) * rdx_8) + *(arg2 + 0x70)

*(arg1 + 0x80) = rcx_10
int16_t* rax_15 = *(arg2 + 0x10)
int32_t rdx_10 = zx.d(*rax_15) & 0x7fff
*(arg2 + 0x10) = &rax_15[1]
arg1[0x22] = rdx_10
int32_t r8
r8.b = rdx_10 != 0x7fff
arg1[0x23] = r8

if (rdx_10 == 0x7fff)
    *(arg1 + 0x98) = &arg1[0x24]
    return arg1

*(arg1 + 0x98) = zx.q(*(arg2 + 0x80) * rdx_10) + *(arg2 + 0x70)
return arg1
