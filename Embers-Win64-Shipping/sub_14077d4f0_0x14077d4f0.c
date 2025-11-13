// 函数: sub_14077d4f0
// 地址: 0x14077d4f0
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
int32_t rdx_3 = zx.d(*rax_6) & 0x7fff
*(arg2 + 0x10) = &rax_6[1]
arg1[0x16] = rdx_3
int32_t r8
r8.b = rdx_3 != 0x7fff
arg1[0x17] = r8

if (rdx_3 == 0x7fff)
    *(arg1 + 0x68) = &arg1[0x18]
    return arg1

*(arg1 + 0x68) = zx.q(*(arg2 + 0x80) * rdx_3) + *(arg2 + 0x70)
return arg1
