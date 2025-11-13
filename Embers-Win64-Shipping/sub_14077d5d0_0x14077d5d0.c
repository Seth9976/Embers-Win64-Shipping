// 函数: sub_14077d5d0
// 地址: 0x14077d5d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_14077e0c0(arg1, arg2)
sub_140767bd0(&arg1[4], arg2)
sub_140767bd0(&arg1[0xa], arg2)
int16_t* rax = *(arg2 + 0x10)
uint32_t rcx_2 = zx.d(*rax)
*(arg2 + 0x10) = &rax[1]
int32_t rcx_3 = rcx_2 & 0x7fff
arg1[0x10] = rcx_3
int32_t rax_2
rax_2.b = rcx_3 != 0x7fff
arg1[0x11] = rax_2
void* rax_3 = &arg1[0x12]
*rax_3 = 0
int32_t rcx_4 = arg1[0x10]

if (rcx_4 != 0x7fff)
    rax_3 = zx.q(*(arg2 + 0x80) * rcx_4) + *(arg2 + 0x70)

*(arg1 + 0x50) = rax_3
int16_t* rax_6 = *(arg2 + 0x10)
uint32_t rdx_2 = zx.d(*rax_6)
*(arg2 + 0x10) = &rax_6[1]
int32_t rdx_3 = rdx_2 & 0x7fff
arg1[0x16] = rdx_3
int32_t rax_8
rax_8.b = rdx_3 != 0x7fff
arg1[0x17] = rax_8
void* rcx_7

if (rdx_3 == 0x7fff)
    rcx_7 = &arg1[0x18]
else
    rcx_7 = zx.q(*(arg2 + 0x80) * rdx_3) + *(arg2 + 0x70)

*(arg1 + 0x68) = rcx_7
int16_t* rax_9 = *(arg2 + 0x10)
uint32_t rdx_4 = zx.d(*rax_9)
*(arg2 + 0x10) = &rax_9[1]
int32_t rdx_5 = rdx_4 & 0x7fff
arg1[0x1c] = rdx_5
int32_t rax_11
rax_11.b = rdx_5 != 0x7fff
arg1[0x1d] = rax_11
void* rcx_10

if (rdx_5 == 0x7fff)
    rcx_10 = &arg1[0x1e]
else
    rcx_10 = zx.q(*(arg2 + 0x80) * rdx_5) + *(arg2 + 0x70)

*(arg1 + 0x80) = rcx_10
int16_t* rax_12 = *(arg2 + 0x10)
uint32_t rdx_6 = zx.d(*rax_12)
*(arg2 + 0x10) = &rax_12[1]
int32_t rdx_7 = rdx_6 & 0x7fff
arg1[0x22] = rdx_7
int32_t rax_14
rax_14.b = rdx_7 != 0x7fff
arg1[0x23] = rax_14
void* rcx_13

if (rdx_7 == 0x7fff)
    rcx_13 = &arg1[0x24]
else
    rcx_13 = zx.q(*(arg2 + 0x80) * rdx_7) + *(arg2 + 0x70)

*(arg1 + 0x98) = rcx_13
int16_t* rax_15 = *(arg2 + 0x10)
int32_t rdx_9 = zx.d(*rax_15) & 0x7fff
*(arg2 + 0x10) = &rax_15[1]
arg1[0x28] = rdx_9
int32_t r8
r8.b = rdx_9 != 0x7fff
arg1[0x29] = r8

if (rdx_9 == 0x7fff)
    *(arg1 + 0xb0) = &arg1[0x2a]
    return arg1

*(arg1 + 0xb0) = zx.q(*(arg2 + 0x80) * rdx_9) + *(arg2 + 0x70)
return arg1
