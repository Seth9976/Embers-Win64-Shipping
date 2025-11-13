// 函数: sub_14077d790
// 地址: 0x14077d790
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
arg1[0x18] = 0
int32_t rcx_5 = arg1[0x16]

if (rcx_5 == 0x7fff)
    *(arg1 + 0x68) = &arg1[0x18]
    return arg1

*(arg1 + 0x68) = zx.q(rcx_5 * *(arg2 + 0x80)) + *(arg2 + 0x70)
return arg1
