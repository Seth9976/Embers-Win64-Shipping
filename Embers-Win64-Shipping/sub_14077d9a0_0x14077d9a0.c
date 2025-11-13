// 函数: sub_14077d9a0
// 地址: 0x14077d9a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rax_10 = *(arg2 + 0x10)
uint32_t rcx = zx.d(*rax_10)
*(arg2 + 0x10) = &rax_10[1]
int32_t rcx_1 = rcx & 0x7fff
*arg1 = rcx_1
int32_t rax_1
rax_1.b = rcx_1 != 0x7fff
arg1[1] = rax_1
void* rcx_3

if (rcx_1 == 0x7fff)
    rcx_3 = &arg1[2]
else
    rcx_3 = zx.q(rcx_1 * *(arg2 + 0x80)) + *(arg2 + 0x70)

*(arg1 + 0x10) = rcx_3
int16_t* rax_2 = *(arg2 + 0x10)
uint32_t r8 = zx.d(*rax_2)
*(arg2 + 0x10) = &rax_2[1]
int32_t r8_1 = r8 & 0x7fff
arg1[6] = r8_1
int32_t rax_4
rax_4.b = r8_1 != 0x7fff
arg1[7] = rax_4
void* rcx_6

if (r8_1 == 0x7fff)
    rcx_6 = &arg1[8]
else
    rcx_6 = zx.q(*(arg2 + 0x80) * r8_1) + *(arg2 + 0x70)

*(arg1 + 0x28) = rcx_6
int16_t* rax_5 = *(arg2 + 0x10)
int32_t r8_3 = zx.d(*rax_5) & 0x7fff
*(arg2 + 0x10) = &rax_5[1]
arg1[0xc] = r8_3
int32_t r10
r10.b = r8_3 != 0x7fff
arg1[0xd] = r10

if (r8_3 == 0x7fff)
    *(arg1 + 0x40) = &arg1[0xe]
    return arg1

*(arg1 + 0x40) = zx.q(*(arg2 + 0x80) * r8_3) + *(arg2 + 0x70)
return arg1
