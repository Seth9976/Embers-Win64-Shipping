// 函数: sub_1406a9d90
// 地址: 0x1406a9d90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r10 = arg1[1]
uint32_t r13 = zx.d(arg4)
void* rsi = r10

if (*(r10 + 8) == 6)
    int32_t rax_1 = *(r10 + 0x24)
    
    if (rax_1 != 1)
        *(r10 + 0x24) = rax_1 - 1
        sub_1406a95f0(arg1, *(*(r10 + 0x28) + zx.q(rax_1 - 1)))
        rsi = arg1[1]

int32_t rax_4 = *(rsi + 8)

if (rax_4 == 9 || rax_4 == 0xe)
    rsi = *(rsi + 0x20)

int64_t result

if (arg2 != 0 || arg3 != 1)
    void*** rax_15 = j_sub_140a82f30(0x28)
    void*** rdi_1 = rax_15
    
    if (rax_15 == 0)
        rdi_1 = nullptr
    else
        rax_15[1] = 0x13
        __builtin_memset(&rax_15[2], 0, 0x18)
        *rdi_1 = &data_142d8b5a0
    
    void*** rax_16 = j_sub_140a82f30(0x38)
    void*** r9 = rax_16
    
    if (rax_16 == 0)
        r9 = nullptr
    else
        void* rdx_2 = *arg1
        int32_t r8 = *(rdx_2 + 0x24)
        *(rdx_2 + 0x24) = r8 + 1
        rax_16[1].d = 0x12
        *(rax_16 + 0xc) = r13 * 2
        rax_16[2] = 0
        rax_16[3] = 0
        *r9 = &data_142d8b5b8
        r9[4].d = arg2
        *(r9 + 0x24) = arg3
        r9[5] = rdi_1
        r9[6].d = r8
        *(r9 + 0x34) = 0xffffffff
    
    rdi_1[4] = r9
    rdi_1[3] = arg1[1]
    void* rax_18 = arg1[1]
    int64_t rcx_10 = *(rax_18 + 0x10)
    
    if (rcx_10 != 0)
        rdi_1[2] = rcx_10
        *(*(arg1[1] + 0x10) + 0x18) = rdi_1
        rax_18 = arg1[1]
    
    *(rax_18 + 0x10) = rdi_1
    arg1[1] = rdi_1
    *(*(rsi + 0x18) + 0x10) = r9
    result = *(rsi + 0x18)
    r9[3] = result
    *(rsi + 0x18) = r9
    r9[2] = rsi
else
    void*** rax_5 = j_sub_140a82f30(zx.q(arg3 + 0x1f))
    void*** rdi = rax_5
    
    if (rax_5 == 0)
        rdi = nullptr
    else
        rax_5[1] = 0x11
        rax_5[2] = 0
        rax_5[3] = 0
        *rdi = &data_142d8b590
    
    void*** rax_6 = j_sub_140a82f30(0x30)
    void*** r14_1 = rax_6
    
    if (rax_6 == 0)
        r14_1 = nullptr
    else
        rax_6[1] = 0x10
        rax_6[2] = 0
        rax_6[3] = 0
        *rax_6 = &data_142d8b5b0
        rax_6[4] = rdi
        rax_6[5] = 0
    
    void*** rax_7 = j_sub_140a82f30(0x30)
    void*** r15_1 = rax_7
    
    if (rax_7 == 0)
        r15_1 = nullptr
    else
        rax_7[1] = 0x10
        rax_7[2] = 0
        rax_7[3] = 0
        *rax_7 = &data_142d8b5b0
        rax_7[4] = rdi
        rax_7[5] = 0
    
    void*** rax_8 = j_sub_140a82f30(0x20)
    void*** rbp_1 = rax_8
    
    if (rax_8 == 0)
        rbp_1 = nullptr
    else
        rbp_1[1] = 8
        *rbp_1 = &data_142d8b590
        rbp_1[2] = 0
        rbp_1[3] = 0
    
    void*** rax_9 = j_sub_140a82f30(0x28)
    
    if (rax_9 == 0)
        rax_9 = nullptr
    else
        rax_9[1] = 9
        *rax_9 = &data_142d8b5a0
        rax_9[4] = rbp_1
    
    r15_1[2] = rbp_1
    rbp_1[3] = r15_1
    rbp_1[2] = rax_9
    rax_9[3] = rbp_1
    rax_9[2] = rdi
    r14_1[5] = r15_1
    rdi[3] = arg1[1]
    void* rax_11 = arg1[1]
    int64_t rcx_3 = *(rax_11 + 0x10)
    
    if (rcx_3 != 0)
        rdi[2] = rcx_3
        *(*(arg1[1] + 0x10) + 0x18) = rdi
        rax_11 = arg1[1]
    
    *(rax_11 + 0x10) = rdi
    arg1[1] = rdi
    *(*(rsi + 0x18) + 0x10) = r14_1
    result = *(rsi + 0x18)
    r14_1[3] = result
    *(rsi + 0x18) = r14_1
    r14_1[2] = rsi
    
    if (r13.b == 0)
        void* rdx_1 = r15_1[2]
        int64_t rcx_5 = *(rsi + 0x18)
        *(rsi + 0x18) = *(rdx_1 + 0x18)
        *(rdx_1 + 0x18) = rcx_5
        result = r15_1[2]
        int64_t rcx_6 = r14_1[2]
        r14_1[2] = result
        r15_1[2] = rcx_6

return result
