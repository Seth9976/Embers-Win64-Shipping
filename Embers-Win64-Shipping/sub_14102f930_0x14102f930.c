// 函数: sub_14102f930
// 地址: 0x14102f930
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t r8 = zx.d(*(arg2 + 0x2c))

if (r8 == 0)
    uint32_t count_4 = zx.d(arg5)
    uint64_t rdi_9 = zx.q(arg4)
    memcpy(arg1 + 0x3bc0 + rdi_9, arg6, count_4)
    int32_t rax = *(arg1 + 0x4bc0)
    int32_t rdi_10 = rdi_9.d + count_4
    *(arg1 + 0x4bc8) = 1
    
    if (rdi_10 u>= rax)
        rax = rdi_10
    
    *(arg1 + 0x4bc0) = rax
    return 

if (r8 == 1)
    uint32_t count_3 = zx.d(arg5)
    uint64_t rdi_7 = zx.q(arg4)
    memcpy(arg1 + 0x4c00 + rdi_7, arg6, count_3)
    int32_t rax_4 = *(arg1 + 0x5c00)
    int32_t rdi_8 = rdi_7.d + count_3
    *(arg1 + 0x5c08) = 1
    
    if (rdi_8 u>= rax_4)
        rax_4 = rdi_8
    
    *(arg1 + 0x5c00) = rax_4
    return 

if (r8 == 2)
    uint32_t count_2 = zx.d(arg5)
    uint64_t rdi_5 = zx.q(arg4)
    memcpy(arg1 + 0x5c40 + rdi_5, arg6, count_2)
    int32_t rax_3 = *(arg1 + 0x6c40)
    int32_t rdi_6 = rdi_5.d + count_2
    *(arg1 + 0x6c48) = 1
    
    if (rdi_6 u>= rax_3)
        rax_3 = rdi_6
    
    *(arg1 + 0x6c40) = rax_3
    return 

if (r8 == 3)
    uint32_t count_1 = zx.d(arg5)
    uint64_t rdi_3 = zx.q(arg4)
    memcpy(arg1 + 0x6c80 + rdi_3, arg6, count_1)
    int32_t rax_2 = *(arg1 + 0x7c80)
    int32_t rdi_4 = rdi_3.d + count_1
    *(arg1 + 0x7c88) = 1
    
    if (rdi_4 u>= rax_2)
        rax_2 = rdi_4
    
    *(arg1 + 0x7c80) = rax_2
    return 

if (r8 != 4)
    return 

uint32_t count = zx.d(arg5)
uint64_t rdi_1 = zx.q(arg4)
memcpy(arg1 + 0x7cc0 + rdi_1, arg6, count)
int32_t rax_1 = *(arg1 + 0x8cc0)
int32_t rdi_2 = rdi_1.d + count
*(arg1 + 0x8cc8) = 1

if (rdi_2 u>= rax_1)
    rax_1 = rdi_2

*(arg1 + 0x8cc0) = rax_1
