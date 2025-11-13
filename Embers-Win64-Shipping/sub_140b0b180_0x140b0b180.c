// 函数: sub_140b0b180
// 地址: 0x140b0b180
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 0
int32_t i_2 = arg2[1].d
void* rdi = *arg2
arg1[1].d = i_2

if (i_2 != 0)
    sub_1405a4be0(arg1, i_2, 0)
    int64_t* rbx_1 = *arg1
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
        i = i_2
        i_2 -= 1
    while (i != 1)
else
    *(arg1 + 0xc) = 0

arg1[2].b = arg2[2].b
*(arg1 + 0x11) = *(arg2 + 0x11)
sub_140596d10(&arg1[3], &arg2[3])
arg1[5] = 0
int32_t i_3 = arg2[6].d
void* rdi_1 = arg2[5]
arg1[6].d = i_3

if (i_3 != 0)
    sub_1405a4be0(&arg1[5], i_3, 0)
    int64_t* rbx_2 = arg1[5]
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
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)
else
    *(arg1 + 0x34) = 0

arg1[7].d = arg2[7].d
*(arg1 + 0x3c) = *(arg2 + 0x3c)
*(arg1 + 0x3d) = *(arg2 + 0x3d)
*(arg1 + 0x3e) = *(arg2 + 0x3e)
*(arg1 + 0x3f) = *(arg2 + 0x3f)
return arg1
