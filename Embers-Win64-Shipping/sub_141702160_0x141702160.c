// 函数: sub_141702160
// 地址: 0x141702160
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[1].w = 0x104
*arg1 = &data_142fc4b40
arg1[2] = *(arg2 + 0x10)
arg1[3].d = *(arg2 + 0x18)
*(arg1 + 0x1c) = *(arg2 + 0x1c)
*(arg1 + 0x24) = *(arg2 + 0x24)
arg1[5] = 0
int32_t i_3 = *(arg2 + 0x30)
void* r14 = *(arg2 + 0x28)
arg1[6].d = i_3

if (i_3 != 0)
    sub_14174fdd0(&arg1[5], i_3, 0)
    int64_t* r8_1 = arg1[5]
    void* rcx_1 = r14 + 0x18
    void* rdx_1 = &r8_1[3]
    int32_t i
    
    do
        rdx_1 += 0x3c
        *r8_1 = *(rcx_1 - 0x18)
        r8_1 += 0x3c
        int32_t rax_2 = *(rcx_1 - 0x10)
        rcx_1 += 0x3c
        *(r8_1 - 0x34) = rax_2
        *(rdx_1 - 0x48) = *(rcx_1 - 0x48)
        *(rdx_1 - 0x40) = *(rcx_1 - 0x40)
        *(rdx_1 - 0x3c) = *(rcx_1 - 0x3c)
        *(rdx_1 - 0x34) = *(rcx_1 - 0x34)
        *(rdx_1 - 0x30) = *(rcx_1 - 0x30)
        *(rdx_1 - 0x28) = *(rcx_1 - 0x28)
        *(rdx_1 - 0x24) = *(rcx_1 - 0x24)
        *(rdx_1 - 0x1c) = *(rcx_1 - 0x1c)
        i = i_3
        i_3 -= 1
    while (i != 1)
else
    *(arg1 + 0x34) = 0

arg1[7] = 0
sub_141554790(&arg1[7], *(arg2 + 0x38), *(arg2 + 0x40), 0, 0)
arg1[9] = 0
int32_t i_4 = *(arg2 + 0x50)
void* rbp = *(arg2 + 0x48)
arg1[0xa].d = i_4

if (i_4 != 0)
    sub_1405c4b20(&arg1[9], i_4, 0)
    int32_t* r8_3 = arg1[9]
    int64_t* rcx_4 = rbp + 4
    void* rdx_4 = &r8_3[1]
    int32_t i_1
    
    do
        rdx_4 += 0x1c
        *r8_3 = *(rcx_4 - 4)
        r8_3 = &r8_3[7]
        int64_t zmm0_2 = *rcx_4
        rcx_4 += 0x1c
        *(rdx_4 - 0x1c) = zmm0_2
        *(rdx_4 - 0x14) = *(rcx_4 - 0x14)
        *(rdx_4 - 0x10) = rcx_4[-2]
        *(rdx_4 - 8) = rcx_4[-1].d
        i_1 = i_4
        i_4 -= 1
    while (i_1 != 1)
else
    *(arg1 + 0x54) = 0

arg1[0xb] = 0
int32_t i_5 = *(arg2 + 0x60)
void* rbp_1 = *(arg2 + 0x58)
arg1[0xc].d = i_5

if (i_5 != 0)
    sub_1405c4b20(&arg1[0xb], i_5, 0)
    int32_t* r8_4 = arg1[0xb]
    int64_t* rcx_6 = rbp_1 + 4
    void* rdx_6 = &r8_4[1]
    int32_t i_2
    
    do
        rdx_6 += 0x1c
        *r8_4 = *(rcx_6 - 4)
        r8_4 = &r8_4[7]
        int64_t zmm0_3 = *rcx_6
        rcx_6 += 0x1c
        *(rdx_6 - 0x1c) = zmm0_3
        *(rdx_6 - 0x14) = *(rcx_6 - 0x14)
        *(rdx_6 - 0x10) = rcx_6[-2]
        *(rdx_6 - 8) = rcx_6[-1].d
        i_2 = i_5
        i_5 -= 1
    while (i_2 != 1)
else
    *(arg1 + 0x64) = 0

sub_1405d5180(&arg1[0xd], arg2 + 0x68)
arg1[0xf].d = *(arg2 + 0x78)
*(arg1 + 0x7c) = *(arg2 + 0x7c)
arg1[0x10].d = *(arg2 + 0x80)
*(arg1 + 0x84) = *(arg2 + 0x84)
arg1[0x11].d = *(arg2 + 0x88)
__builtin_memset(&arg1[0x12], 0, 0x30)
return arg1
