// 函数: sub_140ae6310
// 地址: 0x140ae6310
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2
*(arg1 + 8) = 0
int32_t i_3 = *(arg2 + 0x10)
void* rdi = *(arg2 + 8)
*(arg1 + 0x10) = i_3

if (i_3 != 0)
    sub_1405a4be0(&arg1[8], i_3, 0)
    int64_t* rbx_1 = *(arg1 + 8)
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
    *(arg1 + 0x14) = 0

*(arg1 + 0x18) = *(arg2 + 0x18)
*(arg1 + 0x20) = 0
int32_t i_5 = *(arg2 + 0x28)
void* rdi_1 = *(arg2 + 0x20)
*(arg1 + 0x28) = i_5

if (i_5 != 0)
    sub_140afef10(&arg1[0x20], i_5, 0)
    char* rbx_2 = *(arg1 + 0x20)
    int64_t* rdi_2 = rdi_1 + 0x18
    int32_t i_1
    
    do
        *rbx_2 = rdi_2[-3].b
        sub_140596d10(&rbx_2[8], &rdi_2[-2])
        sub_140596d10(&rbx_2[0x18], rdi_2)
        *(rbx_2 + 0x28) = *(rdi_2 + 0x10)
        sub_140596d10(&rbx_2[0x38], &rdi_2[4])
        *(rbx_2 + 0x48) = rdi_2[6].d
        rbx_2 = &rbx_2[0x58]
        int64_t rax_4 = rdi_2[7]
        rdi_2 = &rdi_2[0xb]
        *(rbx_2 - 8) = rax_4
        i_1 = i_5
        i_5 -= 1
    while (i_1 != 1)
else
    *(arg1 + 0x2c) = 0

*(arg1 + 0x30) = *(arg2 + 0x30)
*(arg1 + 0x34) = *(arg2 + 0x34)
*(arg1 + 0x38) = 0
int32_t i_4 = *(arg2 + 0x40)
void* rdi_3 = *(arg2 + 0x38)
*(arg1 + 0x40) = i_4

if (i_4 != 0)
    sub_1405a4be0(&arg1[0x38], i_4, 0)
    int64_t* rbx_3 = *(arg1 + 0x38)
    int32_t i_2
    
    do
        *rbx_3 = 0
        int32_t rsi_2 = *(rdi_3 + 8)
        int64_t r14_1 = *rdi_3
        rbx_3[1].d = rsi_2
        
        if (rsi_2 != 0)
            sub_1405a4c70(rbx_3, rsi_2, 0)
            memcpy(*rbx_3, r14_1, rsi_2 * 2)
        else
            *(rbx_3 + 0xc) = 0
        
        rbx_3 = &rbx_3[2]
        rdi_3 += 0x10
        i_2 = i_4
        i_4 -= 1
    while (i_2 != 1)
else
    *(arg1 + 0x44) = 0

return arg1
