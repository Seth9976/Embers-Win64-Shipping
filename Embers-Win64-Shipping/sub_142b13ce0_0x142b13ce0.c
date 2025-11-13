// 函数: sub_142b13ce0
// 地址: 0x142b13ce0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &icu_64::BMPSet::`vftable'
arg1[0x6c].d = arg4
int64_t i_5 = 2
arg1[0x21].b = *(arg2 + 0x108)
void* rax_1 = &arg1[1]
arg1[0x6b] = arg3
int64_t i_3 = 2
void* r8 = arg2 + 8
uint128_t zmm0
int64_t i

do
    rax_1 += 0x80
    zmm0 = *r8
    r8 += 0x80
    *(rax_1 - 0x80) = zmm0
    *(rax_1 - 0x70) = *(r8 - 0x70)
    *(rax_1 - 0x60) = *(r8 - 0x60)
    *(rax_1 - 0x50) = *(r8 - 0x50)
    *(rax_1 - 0x40) = *(r8 - 0x40)
    *(rax_1 - 0x30) = *(r8 - 0x30)
    *(rax_1 - 0x20) = *(r8 - 0x20)
    *(rax_1 - 0x10) = *(r8 - 0x10)
    i = i_3
    i_3 -= 1
while (i != 1)
void* rax_2 = arg1 + 0x10c
int64_t i_4 = 2
void* rcx = arg2 + 0x10c
int64_t i_1

do
    rax_2 += 0x80
    zmm0 = *rcx
    rcx += 0x80
    *(rax_2 - 0x80) = zmm0
    *(rax_2 - 0x70) = *(rcx - 0x70)
    *(rax_2 - 0x60) = *(rcx - 0x60)
    *(rax_2 - 0x50) = *(rcx - 0x50)
    *(rax_2 - 0x40) = *(rcx - 0x40)
    *(rax_2 - 0x30) = *(rcx - 0x30)
    *(rax_2 - 0x20) = *(rcx - 0x20)
    *(rax_2 - 0x10) = *(rcx - 0x10)
    i_1 = i_4
    i_4 -= 1
while (i_1 != 1)
void* rax_3 = arg1 + 0x20c
void* rcx_1 = arg2 + 0x20c
int64_t i_2

do
    rax_3 += 0x80
    zmm0 = *rcx_1
    rcx_1 += 0x80
    *(rax_3 - 0x80) = zmm0
    *(rax_3 - 0x70) = *(rcx_1 - 0x70)
    *(rax_3 - 0x60) = *(rcx_1 - 0x60)
    *(rax_3 - 0x50) = *(rcx_1 - 0x50)
    *(rax_3 - 0x40) = *(rcx_1 - 0x40)
    *(rax_3 - 0x30) = *(rcx_1 - 0x30)
    *(rax_3 - 0x20) = *(rcx_1 - 0x20)
    *(rax_3 - 0x10) = *(rcx_1 - 0x10)
    i_2 = i_5
    i_5 -= 1
while (i_2 != 1)
*(arg1 + 0x30c) = *(arg2 + 0x30c)
*(arg1 + 0x31c) = *(arg2 + 0x31c)
*(arg1 + 0x32c) = *(arg2 + 0x32c)
*(arg1 + 0x33c) = *(arg2 + 0x33c)
*(arg1 + 0x34c) = *(arg2 + 0x34c)
return arg1
