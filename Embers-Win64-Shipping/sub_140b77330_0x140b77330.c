// 函数: sub_140b77330
// 地址: 0x140b77330
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2
arg1[1].d = arg2[1].d
*(arg1 + 0xc) = *(arg2 + 0xc)
arg1[2] = 0
int32_t i_5 = arg2[3].d
void* rdi = arg2[2]
arg1[3].d = i_5

if (i_5 != 0)
    sub_1405a4be0(&arg1[2], i_5, 0)
    int64_t* rbx_1 = arg1[2]
    int32_t i
    
    do
        *rbx_1 = 0
        int32_t rsi_1 = *(rdi + 8)
        int64_t r15_1 = *rdi
        rbx_1[1].d = rsi_1
        
        if (rsi_1 != 0)
            sub_1405a4c70(rbx_1, rsi_1, 0)
            memcpy(*rbx_1, r15_1, rsi_1 * 2)
        else
            *(rbx_1 + 0xc) = 0
        
        rbx_1 = &rbx_1[2]
        rdi += 0x10
        i = i_5
        i_5 -= 1
    while (i != 1)
else
    *(arg1 + 0x1c) = 0

arg1[4] = 0
int32_t i_6 = arg2[5].d
void* rdi_1 = arg2[4]
arg1[5].d = i_6

if (i_6 != 0)
    sub_1405a4be0(&arg1[4], i_6, 0)
    int64_t* rbx_2 = arg1[4]
    int32_t i_1
    
    do
        *rbx_2 = 0
        int32_t rsi_2 = *(rdi_1 + 8)
        int64_t r15_2 = *rdi_1
        rbx_2[1].d = rsi_2
        
        if (rsi_2 != 0)
            sub_1405a4c70(rbx_2, rsi_2, 0)
            memcpy(*rbx_2, r15_2, rsi_2 * 2)
        else
            *(rbx_2 + 0xc) = 0
        
        rbx_2 = &rbx_2[2]
        rdi_1 += 0x10
        i_1 = i_6
        i_6 -= 1
    while (i_1 != 1)
else
    *(arg1 + 0x2c) = 0

arg1[6] = 0
uint32_t count = arg2[7].d
int64_t rsi_3 = arg2[6]
arg1[7].d = count

if (count != 0)
    sub_1405da9e0(&arg1[6], count, 0)
    memcpy(arg1[6], rsi_3, count)
else
    *(arg1 + 0x3c) = 0

arg1[8] = 0
uint32_t count_1 = arg2[9].d
int64_t rsi_4 = arg2[8]
arg1[9].d = count_1

if (count_1 != 0)
    sub_1405da9e0(&arg1[8], count_1, 0)
    memcpy(arg1[8], rsi_4, count_1)
else
    *(arg1 + 0x4c) = 0

arg1[0xa] = 0
uint32_t count_2 = arg2[0xb].d
int64_t rsi_5 = arg2[0xa]
arg1[0xb].d = count_2

if (count_2 != 0)
    sub_1405da9e0(&arg1[0xa], count_2, 0)
    memcpy(arg1[0xa], rsi_5, count_2)
else
    *(arg1 + 0x5c) = 0

arg1[0xc] = 0
uint32_t count_3 = arg2[0xd].d
int64_t rsi_6 = arg2[0xc]
arg1[0xd].d = count_3

if (count_3 != 0)
    sub_1405da9e0(&arg1[0xc], count_3, 0)
    memcpy(arg1[0xc], rsi_6, count_3)
else
    *(arg1 + 0x6c) = 0

arg1[0xe] = 0
int32_t i_7 = arg2[0xf].d
void* rdi_2 = arg2[0xe]
arg1[0xf].d = i_7

if (i_7 != 0)
    sub_1405a4be0(&arg1[0xe], i_7, 0)
    int64_t* rbx_3 = arg1[0xe]
    int32_t i_2
    
    do
        *rbx_3 = 0
        int32_t rsi_7 = *(rdi_2 + 8)
        int64_t r15_3 = *rdi_2
        rbx_3[1].d = rsi_7
        
        if (rsi_7 != 0)
            sub_1405a4c70(rbx_3, rsi_7, 0)
            memcpy(*rbx_3, r15_3, rsi_7 * 2)
        else
            *(rbx_3 + 0xc) = 0
        
        rbx_3 = &rbx_3[2]
        rdi_2 += 0x10
        i_2 = i_7
        i_7 -= 1
    while (i_2 != 1)
else
    *(arg1 + 0x7c) = 0

arg1[0x10] = 0
int32_t i_8 = arg2[0x11].d
void* rdi_3 = arg2[0x10]
arg1[0x11].d = i_8

if (i_8 != 0)
    sub_1405a4be0(&arg1[0x10], i_8, 0)
    int64_t* rbx_4 = arg1[0x10]
    int32_t i_3
    
    do
        *rbx_4 = 0
        int32_t rsi_8 = *(rdi_3 + 8)
        int64_t r15_4 = *rdi_3
        rbx_4[1].d = rsi_8
        
        if (rsi_8 != 0)
            sub_1405a4c70(rbx_4, rsi_8, 0)
            memcpy(*rbx_4, r15_4, rsi_8 * 2)
        else
            *(rbx_4 + 0xc) = 0
        
        rbx_4 = &rbx_4[2]
        rdi_3 += 0x10
        i_3 = i_8
        i_8 -= 1
    while (i_3 != 1)
else
    *(arg1 + 0x8c) = 0

arg1[0x12] = 0
int32_t i_9 = arg2[0x13].d
void* rdi_4 = arg2[0x12]
arg1[0x13].d = i_9

if (i_9 != 0)
    sub_1405a4be0(&arg1[0x12], i_9, 0)
    int64_t* rbx_5 = arg1[0x12]
    int32_t i_4
    
    do
        *rbx_5 = 0
        int32_t rsi_9 = *(rdi_4 + 8)
        int64_t r14_1 = *rdi_4
        rbx_5[1].d = rsi_9
        
        if (rsi_9 != 0)
            sub_1405a4c70(rbx_5, rsi_9, 0)
            memcpy(*rbx_5, r14_1, rsi_9 * 2)
        else
            *(rbx_5 + 0xc) = 0
        
        rbx_5 = &rbx_5[2]
        rdi_4 += 0x10
        i_4 = i_9
        i_9 -= 1
    while (i_4 != 1)
else
    *(arg1 + 0x9c) = 0

return arg1
