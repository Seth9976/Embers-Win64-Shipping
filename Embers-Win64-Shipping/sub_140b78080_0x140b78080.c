// 函数: sub_140b78080
// 地址: 0x140b78080
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140596d10(arg1, arg2)
arg1[2].b = arg2[2].b
*(arg1 + 0x11) = *(arg2 + 0x11)
sub_140596d10(&arg1[3], &arg2[3])
sub_140596d10(&arg1[5], &arg2[5])
arg1[7] = 0
int32_t i_3 = arg2[8].d
void* rdi = arg2[7]
arg1[8].d = i_3

if (i_3 != 0)
    sub_1405a4be0(&arg1[7], i_3, 0)
    int64_t* rbx_1 = arg1[7]
    int32_t i
    
    do
        *rbx_1 = 0
        int32_t rsi_1 = *(rdi + 8)
        int64_t r12_1 = *rdi
        rbx_1[1].d = rsi_1
        
        if (rsi_1 != 0)
            sub_1405a4c70(rbx_1, rsi_1, 0)
            memcpy(*rbx_1, r12_1, rsi_1 * 2)
        else
            *(rbx_1 + 0xc) = 0
        
        rbx_1 = &rbx_1[2]
        rdi += 0x10
        i = i_3
        i_3 -= 1
    while (i != 1)
else
    *(arg1 + 0x44) = 0

arg1[9] = 0
int32_t i_4 = arg2[0xa].d
void* rdi_1 = arg2[9]
arg1[0xa].d = i_4

if (i_4 != 0)
    sub_1405a4be0(&arg1[9], i_4, 0)
    int64_t* rbx_2 = arg1[9]
    int32_t i_1
    
    do
        *rbx_2 = 0
        int32_t rsi_2 = *(rdi_1 + 8)
        int64_t r12_2 = *rdi_1
        rbx_2[1].d = rsi_2
        
        if (rsi_2 != 0)
            sub_1405a4c70(rbx_2, rsi_2, 0)
            memcpy(*rbx_2, r12_2, rsi_2 * 2)
        else
            *(rbx_2 + 0xc) = 0
        
        rbx_2 = &rbx_2[2]
        rdi_1 += 0x10
        i_1 = i_4
        i_4 -= 1
    while (i_1 != 1)
else
    *(arg1 + 0x54) = 0

arg1[0xb] = 0
uint32_t count = arg2[0xc].d
int64_t rsi_3 = arg2[0xb]
arg1[0xc].d = count

if (count != 0)
    sub_1405da9e0(&arg1[0xb], count, 0)
    memcpy(arg1[0xb], rsi_3, count)
else
    *(arg1 + 0x64) = 0

arg1[0xd] = 0
uint32_t count_1 = arg2[0xe].d
int64_t rsi_4 = arg2[0xd]
arg1[0xe].d = count_1

if (count_1 != 0)
    sub_1405da9e0(&arg1[0xd], count_1, 0)
    memcpy(arg1[0xd], rsi_4, count_1)
else
    *(arg1 + 0x74) = 0

arg1[0xf] = 0
uint32_t count_2 = arg2[0x10].d
int64_t rsi_5 = arg2[0xf]
arg1[0x10].d = count_2

if (count_2 != 0)
    sub_1405da9e0(&arg1[0xf], count_2, 0)
    memcpy(arg1[0xf], rsi_5, count_2)
else
    *(arg1 + 0x84) = 0

arg1[0x11] = 0
uint32_t count_3 = arg2[0x12].d
int64_t rsi_6 = arg2[0x11]
arg1[0x12].d = count_3

if (count_3 != 0)
    sub_1405da9e0(&arg1[0x11], count_3, 0)
    memcpy(arg1[0x11], rsi_6, count_3)
else
    *(arg1 + 0x94) = 0

arg1[0x13] = 0
int32_t i_5 = arg2[0x14].d
void* rdi_2 = arg2[0x13]
arg1[0x14].d = i_5

if (i_5 != 0)
    sub_1405a4be0(&arg1[0x13], i_5, 0)
    int64_t* rbx_3 = arg1[0x13]
    int32_t i_2
    
    do
        *rbx_3 = 0
        int32_t rsi_7 = *(rdi_2 + 8)
        int64_t r14_1 = *rdi_2
        rbx_3[1].d = rsi_7
        
        if (rsi_7 != 0)
            sub_1405a4c70(rbx_3, rsi_7, 0)
            memcpy(*rbx_3, r14_1, rsi_7 * 2)
        else
            *(rbx_3 + 0xc) = 0
        
        rbx_3 = &rbx_3[2]
        rdi_2 += 0x10
        i_2 = i_5
        i_5 -= 1
    while (i_2 != 1)
else
    *(arg1 + 0xa4) = 0

return arg1
