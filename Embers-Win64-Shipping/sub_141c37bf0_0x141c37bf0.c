// 函数: sub_141c37bf0
// 地址: 0x141c37bf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

int32_t r14_2

do
    *(arg1 + 0x30) = 0
    
    if (*(arg1 + 0x34) s<= 0xffffffff)
        sub_1405c5510(arg1 + 0x28, 0)
    
    int32_t rax_1 = *(arg1 + 0x30) + arg2
    *(arg1 + 0x30) = rax_1
    
    if (rax_1 s> *(arg1 + 0x34))
        sub_1405daba0(arg1 + 0x28)
    
    void* rsi_1 = *(arg1 + 0x38)
    int32_t rax_2 = 0
    int32_t rdx_1 = *(arg1 + 0x30)
    int64_t r12_1 = *(arg1 + 0x28)
    int64_t r8_1 = *(rsi_1 + 0x48)
    
    if (0 == *(rsi_1 + 0x5c))
        *(rsi_1 + 0x5c) = 0
    else
        rax_2 = *(rsi_1 + 0x5c)
    
    uint64_t r9_1 = zx.q(rax_2)
    
    if (0 == *(rsi_1 + 0x60))
        *(rsi_1 + 0x60) = 0
    else
        *(rsi_1 + 0x60)
    
    int32_t rax_4 = 0
    
    if (0 == *(rsi_1 + 0x5c))
        *(rsi_1 + 0x5c) = 0
    else
        rax_4 = *(rsi_1 + 0x5c)
    
    int32_t rax_5 = 0
    
    if (0 == *(rsi_1 + 0x60))
        *(rsi_1 + 0x60) = 0
    else
        rax_5 = *(rsi_1 + 0x60)
    
    int32_t rbp_1 = *(rsi_1 + 0x58)
    
    if (rax_5 s< rax_4)
        r14_2 = rax_5 + rbp_1 - rax_4
    else
        r14_2 = rax_5 - rax_4
    
    if (rdx_1 s<= r14_2)
        r14_2 = rdx_1
    
    int32_t rbp_2 = rbp_1 - r9_1.d
    
    if (r14_2 s<= rbp_2)
        rbp_2 = r14_2
    
    int64_t rdi_1 = sx.q(rbp_2)
    memcpy(r12_1, r8_1 + r9_1, rdi_1.d)
    memcpy(rdi_1 + r12_1, r8_1, r14_2 - rbp_2)
    int32_t rax_10 = 0
    
    if (0 == *(rsi_1 + 0x5c))
        *(rsi_1 + 0x5c) = 0
    else
        rax_10 = *(rsi_1 + 0x5c)
    
    *(rsi_1 + 0x5c) = modu.dp.d(0:(rax_10 + r14_2), *(rsi_1 + 0x58))
    int64_t* rcx_5 = *(arg1 + 0x40)
    (*(*rcx_5 + 0x28))(rcx_5, *(arg1 + 0x28), sx.q(r14_2))
while (r14_2 == arg2)
