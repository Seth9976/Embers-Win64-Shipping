// 函数: sub_141c059d0
// 地址: 0x141c059d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 8) = *(arg2 + 8)
*(arg1 + 0x10) = *(arg2 + 0x10)
*(arg1 + 0x14) = *(arg2 + 0x14)
*(arg1 + 0x20) = *(arg2 + 0x20)
sub_140597df0(arg1 + 0x28, arg2 + 0x28)
void* rbx = arg1 + 0x64
*(arg1 + 0x38) = *(arg2 + 0x38)
int64_t i_3 = 2
int64_t i_4 = 2
void* rdi_1 = arg2 - arg1
*(arg1 + 0x40) = *(arg2 + 0x40)
int64_t i

do
    *(rbx - 0x14) = *(rdi_1 + rbx - 0x14)
    *(rbx - 0x13) = *(rdi_1 + rbx - 0x13)
    int64_t* rax_9 = rdi_1 - 0xc + rbx
    
    if (rbx - 0xc != rax_9)
        int64_t rsi_1 = sx.q(*(rbx + rdi_1 - 4))
        int64_t rbp_1 = *rax_9
        int32_t r8_1 = *rbx
        *(rbx - 4) = rsi_1.d
        
        if (rsi_1.d != 0 || r8_1 != 0)
            sub_1405c4a90(rbx - 0xc, rsi_1.d, r8_1)
            memcpy(*(rbx - 0xc), rbp_1, (rsi_1 << 2).d)
        else
            *rbx = rsi_1.d
    
    int64_t* rax_11 = rdi_1 + 4 + rbx
    
    if (rbx + 4 != rax_11)
        int32_t rsi_2 = *(rdi_1 + rbx + 0xc)
        int64_t rbp_2 = *rax_11
        int32_t r8_4 = *(rbx + 0x10)
        *(rbx + 0xc) = rsi_2
        
        if (rsi_2 != 0 || r8_4 != 0)
            sub_1405c4b20(rbx + 4, rsi_2, r8_4)
            memcpy(*(rbx + 4), rbp_2, rsi_2 * 0x1c)
        else
            *(rbx + 0x10) = rsi_2
    
    *(rbx + 0x14) = *(rdi_1 + rbx + 0x14)
    *(rbx + 0x18) = *(rdi_1 + rbx + 0x18)
    sub_141f98dc0(rbx + 0x1c)
    *(rbx + 0x7c) = *(rbx + rdi_1 + 0x7c)
    rbx += 0xa0
    i = i_4
    i_4 -= 1
while (i != 1)
sub_1405af700(arg1 + 0x188, arg2 + 0x188)
void* rbx_1 = arg1 + 0x244
int64_t i_5 = 2
int64_t i_1

do
    *(rbx_1 - 0x14) = *(rdi_1 + rbx_1 - 0x14)
    *(rbx_1 - 0x13) = *(rdi_1 + rbx_1 - 0x13)
    int64_t* rax_18 = rdi_1 - 0xc + rbx_1
    
    if (rbx_1 - 0xc != rax_18)
        int64_t rsi_3 = sx.q(*(rdi_1 + rbx_1 - 4))
        int64_t rbp_3 = *rax_18
        int32_t r8_6 = *rbx_1
        *(rbx_1 - 4) = rsi_3.d
        
        if (rsi_3.d != 0 || r8_6 != 0)
            sub_1405c4a90(rbx_1 - 0xc, rsi_3.d, r8_6)
            memcpy(*(rbx_1 - 0xc), rbp_3, (rsi_3 << 2).d)
        else
            *rbx_1 = rsi_3.d
    
    int64_t* rax_20 = rdi_1 + 4 + rbx_1
    
    if (rbx_1 + 4 != rax_20)
        int32_t rsi_4 = *(rdi_1 + rbx_1 + 0xc)
        int64_t rbp_4 = *rax_20
        int32_t r8_9 = *(rbx_1 + 0x10)
        *(rbx_1 + 0xc) = rsi_4
        
        if (rsi_4 != 0 || r8_9 != 0)
            sub_1405c4b20(rbx_1 + 4, rsi_4, r8_9)
            memcpy(*(rbx_1 + 4), rbp_4, rsi_4 * 0x1c)
        else
            *(rbx_1 + 0x10) = rsi_4
    
    *(rbx_1 + 0x14) = *(rdi_1 + rbx_1 + 0x14)
    *(rbx_1 + 0x18) = *(rdi_1 + rbx_1 + 0x18)
    sub_141f98dc0(rbx_1 + 0x1c)
    *(rbx_1 + 0x7c) = *(rbx_1 + rdi_1 + 0x7c)
    rbx_1 += 0xa0
    i_1 = i_5
    i_5 -= 1
while (i_1 != 1)
void* rbx_2 = arg1 + 0x384
int64_t i_2

do
    *(rbx_2 - 0x14) = *(rdi_1 + rbx_2 - 0x14)
    *(rbx_2 - 0x13) = *(rdi_1 + rbx_2 - 0x13)
    int64_t* rax_27 = rdi_1 - 0xc + rbx_2
    
    if (rbx_2 - 0xc != rax_27)
        int64_t rsi_5 = sx.q(*(rdi_1 + rbx_2 - 4))
        int64_t rbp_5 = *rax_27
        int32_t r8_11 = *rbx_2
        *(rbx_2 - 4) = rsi_5.d
        
        if (rsi_5.d != 0 || r8_11 != 0)
            sub_1405c4a90(rbx_2 - 0xc, rsi_5.d, r8_11)
            memcpy(*(rbx_2 - 0xc), rbp_5, (rsi_5 << 2).d)
        else
            *rbx_2 = rsi_5.d
    
    void* rax_29 = rdi_1 + 4 + rbx_2
    
    if (rbx_2 + 4 != rax_29)
        int32_t rsi_6 = *(rdi_1 + rbx_2 + 0xc)
        int64_t rbp_6 = *rax_29
        int32_t r8_14 = *(rbx_2 + 0x10)
        *(rbx_2 + 0xc) = rsi_6
        
        if (rsi_6 != 0 || r8_14 != 0)
            sub_1405c4b20(rbx_2 + 4, rsi_6, r8_14)
            memcpy(*(rbx_2 + 4), rbp_6, rsi_6 * 0x1c)
        else
            *(rbx_2 + 0x10) = rsi_6
    
    *(rbx_2 + 0x14) = *(rdi_1 + rbx_2 + 0x14)
    *(rbx_2 + 0x18) = *(rdi_1 + rbx_2 + 0x18)
    sub_141f98dc0(rbx_2 + 0x1c)
    *(rbx_2 + 0x7c) = *(rbx_2 + rdi_1 + 0x7c)
    rbx_2 += 0xa0
    i_2 = i_3
    i_3 -= 1
while (i_2 != 1)
*(arg1 + 0x4a8) = *(arg2 + 0x4a8)
*(arg1 + 0x4ac) = *(arg2 + 0x4ac)
return arg1
