// 函数: sub_141af84e0
// 地址: 0x141af84e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** r12 = &arg1[1]
*arg1 = *arg2
int64_t rdi_1 = arg2 - arg1
void* rbx = &r12[0xd]
int64_t i

for (i = 3; i != 0; )
    *r12 = &data_142d4c350
    i -= 1
    *(rbx - 0x60) = *(rbx + rdi_1 - 0x60)
    *(rbx - 0x5f) = *(rbx + rdi_1 - 0x5f)
    *(rbx - 0x58) = 0
    int64_t rsi_1 = sx.q(*(rbx + rdi_1 - 0x50))
    int64_t rbp_1 = *(rbx + rdi_1 - 0x58)
    *(rbx - 0x50) = rsi_1.d
    
    if (rsi_1.d != 0)
        sub_1405c4a90(rbx - 0x58, rsi_1.d, 0)
        memcpy(*(rbx - 0x58), rbp_1, (rsi_1 << 2).d)
    else
        *(rbx - 0x4c) = 0
    
    *(rbx - 0x48) = 0
    int32_t rsi_2 = *(rbx + rdi_1 - 0x40)
    int64_t rbp_2 = *(rbx + rdi_1 - 0x48)
    *(rbx - 0x40) = rsi_2
    
    if (rsi_2 != 0)
        sub_1405c4b20(rbx - 0x48, rsi_2, 0)
        memcpy(*(rbx - 0x48), rbp_2, rsi_2 * 0x1c)
    else
        *(rbx - 0x3c) = 0
    
    void* rcx_4 = rbx - 0x10
    *(rbx - 0x38) = *(rbx + rdi_1 - 0x38)
    *(rbx - 0x34) = *(rbx + rdi_1 - 0x34)
    __builtin_memset(rbx - 0x30, 0, 0x20)
    *rbx = 0
    *(rbx + 8) = 0
    *(rbx + 0xc) = 0x80
    void* rax_5 = *rbx
    
    if (rax_5 != 0)
        rcx_4 = rax_5
    
    r12 = &r12[0x14]
    *rcx_4 = 0
    *(rcx_4 + 8) = 0
    *(rbx + 0x10) = 0xffffffff
    *(rbx + 0x14) = 0
    *(rbx + 0x20) = 0
    *(rbx + 0x28) = 0
    *(rbx + 0x30) = *(rbx + rdi_1 + 0x30)
    rbx += 0xa0

uint64_t i_1 = zx.q((i + 3).d)
void*** r15_1 = &arg1[0x3d]
void* rbx_1 = &r15_1[0xd]

do
    *r15_1 = &data_142d4c350
    i_1 -= 1
    *(rbx_1 - 0x60) = *(rbx_1 + rdi_1 - 0x60)
    *(rbx_1 - 0x5f) = *(rbx_1 + rdi_1 - 0x5f)
    *(rbx_1 - 0x58) = 0
    int64_t rsi_3 = sx.q(*(rbx_1 + rdi_1 - 0x50))
    int64_t rbp_3 = *(rbx_1 + rdi_1 - 0x58)
    *(rbx_1 - 0x50) = rsi_3.d
    
    if (rsi_3.d != 0)
        sub_1405c4a90(rbx_1 - 0x58, rsi_3.d, 0)
        memcpy(*(rbx_1 - 0x58), rbp_3, (rsi_3 << 2).d)
    else
        *(rbx_1 - 0x4c) = 0
    
    *(rbx_1 - 0x48) = 0
    int32_t rsi_4 = *(rbx_1 + rdi_1 - 0x40)
    int64_t rbp_4 = *(rbx_1 + rdi_1 - 0x48)
    *(rbx_1 - 0x40) = rsi_4
    
    if (rsi_4 != 0)
        sub_1405c4b20(rbx_1 - 0x48, rsi_4, 0)
        memcpy(*(rbx_1 - 0x48), rbp_4, rsi_4 * 0x1c)
    else
        *(rbx_1 - 0x3c) = 0
    
    void* rcx_9 = rbx_1 - 0x10
    *(rbx_1 - 0x38) = *(rbx_1 + rdi_1 - 0x38)
    *(rbx_1 - 0x34) = *(rbx_1 + rdi_1 - 0x34)
    __builtin_memset(rbx_1 - 0x30, 0, 0x20)
    *rbx_1 = 0
    *(rbx_1 + 8) = 0
    *(rbx_1 + 0xc) = 0x80
    void* rax_11 = *rbx_1
    
    if (rax_11 != 0)
        rcx_9 = rax_11
    
    r15_1 = &r15_1[0x14]
    *rcx_9 = 0
    *(rcx_9 + 8) = 0
    *(rbx_1 + 0x10) = 0xffffffff
    *(rbx_1 + 0x14) = 0
    *(rbx_1 + 0x20) = 0
    *(rbx_1 + 0x28) = 0
    *(rbx_1 + 0x30) = *(rbx_1 + rdi_1 + 0x30)
    rbx_1 += 0xa0
while (i_1 != 0)

int64_t i_2 = 3
void* r15_3 = &arg1[0x79]
void* rbx_2 = r15_3 + 0x68

do
    *r15_3 = &data_142d4c350
    i_2 -= 1
    *(rbx_2 - 0x60) = *(rbx_2 + rdi_1 - 0x60)
    *(rbx_2 - 0x5f) = *(rbx_2 + rdi_1 - 0x5f)
    *(rbx_2 - 0x58) = 0
    int64_t rsi_5 = sx.q(*(rbx_2 + rdi_1 - 0x50))
    int64_t rbp_5 = *(rbx_2 + rdi_1 - 0x58)
    *(rbx_2 - 0x50) = rsi_5.d
    
    if (rsi_5.d != 0)
        sub_1405c4a90(rbx_2 - 0x58, rsi_5.d, 0)
        memcpy(*(rbx_2 - 0x58), rbp_5, (rsi_5 << 2).d)
    else
        *(rbx_2 - 0x4c) = 0
    
    *(rbx_2 - 0x48) = 0
    int32_t rsi_6 = *(rbx_2 + rdi_1 - 0x40)
    int64_t rbp_6 = *(rbx_2 + rdi_1 - 0x48)
    *(rbx_2 - 0x40) = rsi_6
    
    if (rsi_6 != 0)
        sub_1405c4b20(rbx_2 - 0x48, rsi_6, 0)
        memcpy(*(rbx_2 - 0x48), rbp_6, rsi_6 * 0x1c)
    else
        *(rbx_2 - 0x3c) = 0
    
    void* rcx_14 = rbx_2 - 0x10
    *(rbx_2 - 0x38) = *(rbx_2 + rdi_1 - 0x38)
    *(rbx_2 - 0x34) = *(rbx_2 + rdi_1 - 0x34)
    __builtin_memset(rbx_2 - 0x30, 0, 0x20)
    *rbx_2 = 0
    *(rbx_2 + 8) = 0
    *(rbx_2 + 0xc) = 0x80
    void* rax_17 = *rbx_2
    
    if (rax_17 != 0)
        rcx_14 = rax_17
    
    r15_3 += 0xa0
    *rcx_14 = 0
    *(rcx_14 + 8) = 0
    *(rbx_2 + 0x10) = 0xffffffff
    *(rbx_2 + 0x14) = 0
    *(rbx_2 + 0x20) = 0
    *(rbx_2 + 0x28) = 0
    *(rbx_2 + 0x30) = *(rbx_2 + rdi_1 + 0x30)
    rbx_2 += 0xa0
while (i_2 != 0)

return arg1
