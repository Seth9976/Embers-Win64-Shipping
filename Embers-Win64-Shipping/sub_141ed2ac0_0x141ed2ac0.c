// 函数: sub_141ed2ac0
// 地址: 0x141ed2ac0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_143258940
arg1[1] = 0
int32_t i_2 = *(arg2 + 0x10)
int64_t* rbx = *(arg2 + 8)
arg1[2].d = i_2

if (i_2 != 0)
    sub_1405a4be0(&arg1[1], i_2, 0)
    int64_t* rcx_1 = arg1[1]
    int32_t i
    
    do
        *rcx_1 = *rbx
        void* rax_2 = rbx[1]
        rcx_1[1] = rax_2
        
        if (rax_2 != 0)
            *(rax_2 + 8) += 1
        
        rcx_1 = &rcx_1[2]
        rbx = &rbx[2]
        i = i_2
        i_2 -= 1
    while (i != 1)
else
    *(arg1 + 0x14) = 0

arg1[3] = 0
int32_t i_3 = *(arg2 + 0x20)
int64_t* rbx_1 = *(arg2 + 0x18)
arg1[4].d = i_3

if (i_3 != 0)
    sub_1405a4be0(&arg1[3], i_3, 0)
    int64_t* rcx_3 = arg1[3]
    int32_t i_1
    
    do
        *rcx_3 = *rbx_1
        void* rax_4 = rbx_1[1]
        rcx_3[1] = rax_4
        
        if (rax_4 != 0)
            *(rax_4 + 8) += 1
        
        rcx_3 = &rcx_3[2]
        rbx_1 = &rbx_1[2]
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)
else
    *(arg1 + 0x24) = 0

arg1[5].b ^= (arg1[5].b ^ *(arg2 + 0x28)) & 1
char rcx_4 = ((arg1[5].b ^ *(arg2 + 0x28)) & 2) ^ arg1[5].b
arg1[5].b = rcx_4
char rdx_2 = ((rcx_4 ^ *(arg2 + 0x28)) & 4) ^ rcx_4
arg1[5].b = rdx_2
arg1[5].b = ((rdx_2 ^ *(arg2 + 0x28)) & 8) ^ rdx_2
*(arg1 + 0x29) = *(arg2 + 0x29)
*(arg1 + 0x2c) = *(arg2 + 0x2c)
*(arg1 + 0x34) = *(arg2 + 0x34)
return arg1
