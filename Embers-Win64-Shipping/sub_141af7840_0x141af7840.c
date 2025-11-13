// 函数: sub_141af7840
// 地址: 0x141af7840
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[1].b = 0
*(arg1 + 0x14) = 0xffffffff
arg1[3].d = 0
arg1[2].b = 0
*arg1 = &data_143056778
arg1[4] = 0
int32_t i_6 = *(arg2 + 0xf8)
int64_t* rbx = *(arg2 + 0xf0)
arg1[5].d = i_6

if (i_6 != 0)
    sub_140976950(&arg1[4], i_6, 0)
    int64_t* rdi_1 = arg1[4]
    int32_t i
    
    do
        *rdi_1 = *rbx
        sub_1407431a0(&rdi_1[1], &rbx[1])
        rdi_1 = &rdi_1[0x15]
        rbx = &rbx[0x15]
        i = i_6
        i_6 -= 1
    while (i != 1)
else
    *(arg1 + 0x2c) = 0

arg1[6] = 0
int32_t i_7 = *(arg2 + 0xe8)
int64_t* rbx_1 = *(arg2 + 0xe0)
arg1[7].d = i_7

if (i_7 != 0)
    sub_14174fef0(&arg1[6], i_7, 0)
    int64_t* rdi_2 = arg1[6]
    int32_t i_1
    
    do
        *rdi_2 = *rbx_1
        sub_141af6d00(&rdi_2[1], &rbx_1[1])
        rdi_2 = &rdi_2[0x13]
        rbx_1 = &rbx_1[0x13]
        i_1 = i_7
        i_7 -= 1
    while (i_1 != 1)
else
    *(arg1 + 0x3c) = 0

arg1[8] = 0
int32_t i_8 = *(arg2 + 0x108)
void* rdi_3 = *(arg2 + 0x100)
arg1[9].d = i_8

if (i_8 != 0)
    sub_141b303a0(&arg1[8], i_8, 0)
    int64_t* rbx_2 = arg1[8]
    void* rdi_4 = rdi_3 + 0xa8
    int32_t i_2
    
    do
        *rbx_2 = *(rdi_4 - 0xa8)
        sub_1407431a0(&rbx_2[1], rdi_4 - 0xa0)
        sub_1407431a0(&rbx_2[0x15], rdi_4)
        rdi_4 += 0x148
        rbx_2 = &rbx_2[0x29]
        i_2 = i_8
        i_8 -= 1
    while (i_2 != 1)
else
    *(arg1 + 0x4c) = 0

arg1[0xa] = 0
int32_t i_9 = *(arg2 + 0x118)
void* rdi_5 = *(arg2 + 0x110)
arg1[0xb].d = i_9

if (i_9 != 0)
    sub_141b30440(&arg1[0xa], i_9, 0)
    int64_t* rbx_3 = arg1[0xa]
    void* rdi_6 = rdi_5 + 0xa8
    int32_t i_3
    
    do
        *rbx_3 = *(rdi_6 - 0xa8)
        sub_1407431a0(&rbx_3[1], rdi_6 - 0xa0)
        sub_1407431a0(&rbx_3[0x15], rdi_6)
        sub_1407431a0(&rbx_3[0x29], rdi_6 + 0xa0)
        rdi_6 += 0x1e8
        rbx_3 = &rbx_3[0x3d]
        i_3 = i_9
        i_9 -= 1
    while (i_3 != 1)
else
    *(arg1 + 0x5c) = 0

arg1[0xc] = 0
int32_t i_10 = *(arg2 + 0x128)
void* rdi_7 = *(arg2 + 0x120)
arg1[0xd].d = i_10

if (i_10 != 0)
    sub_141b30170(&arg1[0xc], i_10, 0)
    int64_t* rbx_4 = arg1[0xc]
    void* rdi_8 = rdi_7 + 0xa8
    int32_t i_4
    
    do
        *rbx_4 = *(rdi_8 - 0xa8)
        sub_1407431a0(&rbx_4[1], rdi_8 - 0xa0)
        sub_1407431a0(&rbx_4[0x15], rdi_8)
        sub_1407431a0(&rbx_4[0x29], rdi_8 + 0xa0)
        sub_1407431a0(&rbx_4[0x3d], rdi_8 + 0x140)
        rdi_8 += 0x288
        rbx_4 = &rbx_4[0x51]
        i_4 = i_10
        i_10 -= 1
    while (i_4 != 1)
else
    *(arg1 + 0x6c) = 0

arg1[0xe] = 0
int32_t i_11 = *(arg2 + 0x138)
int64_t* rbx_5 = *(arg2 + 0x130)
arg1[0xf].d = i_11

if (i_11 != 0)
    sub_141b302f0(&arg1[0xe], i_11, 0)
    int64_t* rdi_9 = arg1[0xe]
    int32_t i_5
    
    do
        sub_141af84e0(rdi_9, rbx_5)
        rdi_9 = &rdi_9[0xb5]
        rbx_5 = &rbx_5[0xb5]
        i_5 = i_11
        i_11 -= 1
    while (i_5 != 1)
else
    *(arg1 + 0x7c) = 0

return arg1
