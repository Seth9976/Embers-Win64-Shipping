// 函数: sub_141702b10
// 地址: 0x141702b10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[1].w = 0x100
*arg1 = &data_142fc4938
arg1[2] = 0
int32_t i_3 = *(arg2 + 0x18)
void* r14 = *(arg2 + 0x10)
arg1[3].d = i_3

if (i_3 != 0)
    sub_1405c4b20(&arg1[2], i_3, 0)
    void* r8_1 = arg1[2]
    void* rcx_1 = r14 + 4
    void* rdx_1 = r8_1 + 4
    int32_t i
    
    do
        rdx_1 += 0x1c
        *r8_1 = *(rcx_1 - 4)
        r8_1 += 0x1c
        uint128_t zmm0 = zx.o(*rcx_1)
        rcx_1 += 0x1c
        *(rdx_1 - 0x1c) = zmm0.q
        *(rdx_1 - 0x14) = *(rcx_1 - 0x14)
        *(rdx_1 - 0x10) = *(rcx_1 - 0x10)
        *(rdx_1 - 8) = *(rcx_1 - 8)
        i = i_3
        i_3 -= 1
    while (i != 1)
else
    *(arg1 + 0x1c) = 0

*(arg1 + 0x20) = *(arg2 + 0x20)
*(arg1 + 0x30) = *(arg2 + 0x30)
*(arg1 + 0x40) = *(arg2 + 0x40)
arg1[0xa] = *(arg2 + 0x50)
arg1[0xb].d = *(arg2 + 0x58)
arg1[0xc] = 0
sub_141554c90(&arg1[0xc], *(arg2 + 0x60), *(arg2 + 0x68), 0, 0)
arg1[0xe] = 0
int32_t i_4 = *(arg2 + 0x78)
void* r14_1 = *(arg2 + 0x70)
arg1[0xf].d = i_4

if (i_4 != 0)
    sub_14174fe60(&arg1[0xe], i_4, 0)
    int64_t* rcx_4 = arg1[0xe]
    void* rdx_4 = r14_1 + 0x18
    int32_t i_1
    
    do
        int64_t zmm0_1 = *(rdx_4 - 0x18)
        rdx_4 += 0x34
        *rcx_4 = zmm0_1
        rcx_4 += 0x34
        *(rcx_4 - 0x2c) = *(rdx_4 - 0x44)
        rcx_4[-5] = *(rdx_4 - 0x40)
        rcx_4[-4].d = *(rdx_4 - 0x38)
        *(rcx_4 - 0x1c) = *(rdx_4 - 0x34)
        rcx_4[-3] = *(rdx_4 - 0x30)
        rcx_4[-2].d = *(rdx_4 - 0x28)
        *(rcx_4 - 0xc) = *(rdx_4 - 0x24)
        *(rcx_4 - 4) = *(rdx_4 - 0x1c)
        i_1 = i_4
        i_4 -= 1
    while (i_1 != 1)
else
    *(arg1 + 0x7c) = 0

arg1[0x10] = 0
int32_t i_5 = *(arg2 + 0x88)
int128_t* rbx = *(arg2 + 0x80)
arg1[0x11].d = i_5

if (i_5 != 0)
    sub_1409912e0(&arg1[0x10], i_5, 0)
    void* rcx_6 = arg1[0x10]
    int32_t i_2
    
    do
        rcx_6 += 0x24
        int128_t zmm0_2 = *rbx
        rbx += 0x24
        *(rcx_6 - 0x24) = zmm0_2
        *(rcx_6 - 0x14) = *(rbx - 0x14)
        *(rcx_6 - 4) = *(rbx - 4)
        i_2 = i_5
        i_5 -= 1
    while (i_2 != 1)
else
    *(arg1 + 0x8c) = 0

arg1[0x12].d = *(arg2 + 0x90)
*(arg1 + 0x94) = *(arg2 + 0x94)
return arg1
