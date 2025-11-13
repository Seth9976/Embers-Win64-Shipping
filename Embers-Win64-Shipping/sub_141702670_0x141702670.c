// 函数: sub_141702670
// 地址: 0x141702670
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[1].w = 0x102
*arg1 = &data_142fc5920
arg1[2] = *(arg2 + 0x10)
arg1[3].d = *(arg2 + 0x18)
*(arg1 + 0x1c) = *(arg2 + 0x1c)
*(arg1 + 0x24) = *(arg2 + 0x24)
arg1[5] = 0
int32_t i_5 = *(arg2 + 0x30)
void* rbp = *(arg2 + 0x28)
arg1[6].d = i_5

if (i_5 != 0)
    sub_14174fdd0(&arg1[5], i_5, 0)
    int64_t* r8_1 = arg1[5]
    void* rcx_1 = rbp + 0x18
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
        i = i_5
        i_5 -= 1
    while (i != 1)
else
    *(arg1 + 0x34) = 0

arg1[7] = 0
int32_t i_4 = *(arg2 + 0x40)
void* rdi = *(arg2 + 0x38)
arg1[8].d = i_4

if (i_4 != 0)
    sub_14174fef0(&arg1[7], i_4, 0)
    void*** rsi = arg1[7]
    int32_t i_1
    
    do
        sub_141702e20(rsi, rdi)
        rsi = &rsi[0x13]
        rdi += 0x98
        i_1 = i_4
        i_4 -= 1
    while (i_1 != 1)
else
    *(arg1 + 0x44) = 0

arg1[9] = 0
int32_t i_6 = *(arg2 + 0x50)
void* rbp_1 = *(arg2 + 0x48)
arg1[0xa].d = i_6

if (i_6 != 0)
    sub_1407c35c0(&arg1[9], i_6, 0)
    void* r8_2 = arg1[9]
    void* rcx_5 = rbp_1 + 0x28
    void* rdx_5 = r8_2 + 0x28
    int32_t i_2
    
    do
        rdx_5 += 0x40
        r8_2 += 0x40
        uint128_t zmm0_2 = *(rcx_5 - 0x28)
        rcx_5 += 0x40
        *(r8_2 - 0x40) = zmm0_2
        *(r8_2 - 0x30) = *(rcx_5 - 0x58)
        *(r8_2 - 0x20) = *(rcx_5 - 0x48)
        *(rdx_5 - 0x40) = *(rcx_5 - 0x40)
        *(rdx_5 - 0x38) = *(rcx_5 - 0x38)
        *(rdx_5 - 0x34) = *(rcx_5 - 0x34)
        *(rdx_5 - 0x2c) = *(rcx_5 - 0x2c)
        i_2 = i_6
        i_6 -= 1
    while (i_2 != 1)
else
    *(arg1 + 0x54) = 0

arg1[0xb] = 0
int32_t i_7 = *(arg2 + 0x60)
void* rbp_2 = *(arg2 + 0x58)
arg1[0xc].d = i_7

if (i_7 != 0)
    sub_1407c35c0(&arg1[0xb], i_7, 0)
    void* r8_3 = arg1[0xb]
    void* rcx_7 = rbp_2 + 0x28
    void* rdx_7 = r8_3 + 0x28
    int32_t i_3
    
    do
        rdx_7 += 0x40
        r8_3 += 0x40
        uint128_t zmm0_3 = *(rcx_7 - 0x28)
        rcx_7 += 0x40
        *(r8_3 - 0x40) = zmm0_3
        *(r8_3 - 0x30) = *(rcx_7 - 0x58)
        *(r8_3 - 0x20) = *(rcx_7 - 0x48)
        *(rdx_7 - 0x40) = *(rcx_7 - 0x40)
        *(rdx_7 - 0x38) = *(rcx_7 - 0x38)
        *(rdx_7 - 0x34) = *(rcx_7 - 0x34)
        *(rdx_7 - 0x2c) = *(rcx_7 - 0x2c)
        i_3 = i_7
        i_7 -= 1
    while (i_3 != 1)
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
