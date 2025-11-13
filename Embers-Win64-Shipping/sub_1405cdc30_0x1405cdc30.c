// 函数: sub_1405cdc30
// 地址: 0x1405cdc30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 8) = *(arg2 + 8)
*(arg1 + 0x10) = *(arg2 + 0x10)
*(arg1 + 0x14) = *(arg2 + 0x14)
*(arg1 + 0x20) = *(arg2 + 0x20)

if (arg1 + 0x28 != arg2 + 0x28)
    int32_t rdi_1 = *(arg2 + 0x30)
    int64_t rsi_1 = *(arg2 + 0x28)
    int32_t r8_1 = *(arg1 + 0x34)
    *(arg1 + 0x30) = rdi_1
    
    if (rdi_1 != 0 || r8_1 != 0)
        sub_1405a4c70(arg1 + 0x28, rdi_1, r8_1)
        memcpy(*(arg1 + 0x28), rsi_1, rdi_1 * 2)
    else
        *(arg1 + 0x34) = rdi_1

void* rbx_1 = arg1 + 0x64
*(arg1 + 0x38) = *(arg2 + 0x38)
void* rdi_3 = arg2 - arg1
*(arg1 + 0x40) = *(arg2 + 0x40)
int64_t i_2 = 2
int64_t i

do
    *(rbx_1 - 0x14) = *(rdi_3 + rbx_1 - 0x14)
    *(rbx_1 - 0x13) = *(rdi_3 + rbx_1 - 0x13)
    void* rax_10 = rdi_3 - 0xc + rbx_1
    
    if (rbx_1 - 0xc != rax_10)
        int64_t rsi_2 = sx.q(*(rbx_1 + rdi_3 - 4))
        int64_t rbp_1 = *rax_10
        int32_t r8_4 = *rbx_1
        *(rbx_1 - 4) = rsi_2.d
        
        if (rsi_2.d != 0 || r8_4 != 0)
            sub_1405c4a90(rbx_1 - 0xc, rsi_2.d, r8_4)
            memcpy(*(rbx_1 - 0xc), rbp_1, (rsi_2 << 2).d)
        else
            *rbx_1 = rsi_2.d
    
    int64_t* rax_12 = rdi_3 + 4 + rbx_1
    
    if (rbx_1 + 4 != rax_12)
        int32_t rsi_3 = *(rdi_3 + rbx_1 + 0xc)
        int64_t rbp_2 = *rax_12
        int32_t r8_7 = *(rbx_1 + 0x10)
        *(rbx_1 + 0xc) = rsi_3
        
        if (rsi_3 != 0 || r8_7 != 0)
            sub_1405c4b20(rbx_1 + 4, rsi_3, r8_7)
            memcpy(*(rbx_1 + 4), rbp_2, rsi_3 * 0x1c)
        else
            *(rbx_1 + 0x10) = rsi_3
    
    *(rbx_1 + 0x14) = *(rdi_3 + rbx_1 + 0x14)
    *(rbx_1 + 0x18) = *(rdi_3 + rbx_1 + 0x18)
    sub_141f98dc0(rbx_1 + 0x1c)
    *(rbx_1 + 0x7c) = *(rdi_3 + rbx_1 + 0x7c)
    rbx_1 += 0xa0
    i = i_2
    i_2 -= 1
while (i != 1)
uint64_t i_3 = zx.q((i_2 + 2).d)
int32_t* rbx_2 = arg1 + 0x1a4
uint64_t i_1

do
    rbx_2[-5].b = *(rdi_3 + rbx_2 - 0x14)
    *(rbx_2 - 0x13) = *(rdi_3 + rbx_2 - 0x13)
    int64_t* rax_19 = rdi_3 - 0xc + rbx_2
    
    if (&rbx_2[-3] != rax_19)
        int64_t rsi_4 = sx.q(*(rdi_3 + rbx_2 - 4))
        int64_t rbp_3 = *rax_19
        int32_t r8_9 = *rbx_2
        rbx_2[-1] = rsi_4.d
        
        if (rsi_4.d != 0 || r8_9 != 0)
            sub_1405c4a90(&rbx_2[-3], rsi_4.d, r8_9)
            memcpy(*(rbx_2 - 0xc), rbp_3, (rsi_4 << 2).d)
        else
            *rbx_2 = rsi_4.d
    
    int64_t* rax_21 = rdi_3 + 4 + rbx_2
    
    if (&rbx_2[1] != rax_21)
        int32_t rsi_5 = *(rdi_3 + rbx_2 + 0xc)
        int64_t rbp_4 = *rax_21
        int32_t r8_12 = rbx_2[4]
        rbx_2[3] = rsi_5
        
        if (rsi_5 != 0 || r8_12 != 0)
            sub_1405c4b20(&rbx_2[1], rsi_5, r8_12)
            memcpy(*(rbx_2 + 4), rbp_4, rsi_5 * 0x1c)
        else
            rbx_2[4] = rsi_5
    
    rbx_2[5] = *(rdi_3 + rbx_2 + 0x14)
    rbx_2[6].b = *(rdi_3 + rbx_2 + 0x18)
    sub_141f98dc0(&rbx_2[7])
    *(rbx_2 + 0x7c) = *(rdi_3 + rbx_2 + 0x7c)
    rbx_2 = &rbx_2[0x28]
    i_1 = i_3
    i_3 -= 1
while (i_1 != 1)
sub_1405af700(arg1 + 0x2c8, arg2 + 0x2c8)
sub_1405af700(arg1 + 0x368, arg2 + 0x368)
*(arg1 + 0x408) = *(arg2 + 0x408)
return arg1
