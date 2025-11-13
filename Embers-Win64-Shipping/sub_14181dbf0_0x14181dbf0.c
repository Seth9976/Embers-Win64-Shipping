// 函数: sub_14181dbf0
// 地址: 0x14181dbf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 0
int32_t i_5 = arg2[1].d
int64_t* rbx = *arg2
arg1[1].d = i_5

if (i_5 != 0)
    sub_140880030(arg1, i_5, 0)
    int64_t* rdi_1 = *arg1
    int32_t i
    
    do
        sub_1418209d0(rdi_1, rbx)
        rdi_1 = &rdi_1[0xf]
        rbx = &rbx[0xf]
        i = i_5
        i_5 -= 1
    while (i != 1)
else
    *(arg1 + 0xc) = 0

sub_140596d10(&arg1[2], &arg2[2])
sub_140596d10(&arg1[4], &arg2[4])
sub_140596d10(&arg1[6], &arg2[6])
arg1[8] = 0
int32_t i_3 = arg2[9].d
void* rdi_2 = arg2[8]
arg1[9].d = i_3

if (i_3 != 0)
    sub_1405a4be0(&arg1[8], i_3, 0)
    int64_t* rbx_1 = arg1[8]
    int32_t i_1
    
    do
        *rbx_1 = 0
        int32_t rsi = *(rdi_2 + 8)
        int64_t r12_1 = *rdi_2
        rbx_1[1].d = rsi
        
        if (rsi != 0)
            sub_1405a4c70(rbx_1, rsi, 0)
            memcpy(*rbx_1, r12_1, rsi * 2)
        else
            *(rbx_1 + 0xc) = 0
        
        rbx_1 = &rbx_1[2]
        rdi_2 += 0x10
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)
else
    *(arg1 + 0x4c) = 0

arg1[0xa] = 0
int32_t i_4 = arg2[0xb].d
void* rdi_3 = arg2[0xa]
arg1[0xb].d = i_4

if (i_4 != 0)
    sub_1405a4be0(&arg1[0xa], i_4, 0)
    int64_t* rbx_2 = arg1[0xa]
    int32_t i_2
    
    do
        *rbx_2 = 0
        int32_t rsi_1 = *(rdi_3 + 8)
        int64_t r12_2 = *rdi_3
        rbx_2[1].d = rsi_1
        
        if (rsi_1 != 0)
            sub_1405a4c70(rbx_2, rsi_1, 0)
            memcpy(*rbx_2, r12_2, rsi_1 * 2)
        else
            *(rbx_2 + 0xc) = 0
        
        rbx_2 = &rbx_2[2]
        rdi_3 += 0x10
        i_2 = i_4
        i_4 -= 1
    while (i_2 != 1)
else
    *(arg1 + 0x5c) = 0

arg1[0xc].d = arg2[0xc].d
*(arg1 + 0x64) = *(arg2 + 0x64)
arg1[0xd].d = arg2[0xd].d
*(arg1 + 0x6c) = *(arg2 + 0x6c)
*(arg1 + 0x6d) = *(arg2 + 0x6d)
return arg1
