// 函数: sub_1407e68d0
// 地址: 0x1407e68d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = sub_1407e6590(*(arg1 + 0xa0), arg2, 0)

if (arg3 != 0)
    void* rcx_1 = *(arg1 + 0x98)
    result = sub_1407e9520(rcx_1, *(arg1 + 0xa0), 0, 0, *(rcx_1 + 0xb0))

if ((*(arg1 + 0x28) & 1) != 0)
    uint64_t rbx_2 = zx.q(*(arg1 + 0x54) + 1)
    void* rsi_1 = *(arg1 + 0xa0)
    
    if (arg2 s>= rbx_2.d)
        rbx_2 = zx.q(arg2)
    
    int32_t rbp_1 = *(*(arg1 + 0x98) + 0x40)
    
    if (rbx_2.d s<= rbp_1)
        rbx_2 = zx.q(rbp_1)
    else
        int32_t rcx_4 = *(arg1 + 0x48) - rbp_1 + rbx_2.d
        *(arg1 + 0x48) = rcx_4
        
        if (rcx_4 s> *(arg1 + 0x4c))
            sub_1405a4cf0(arg1 + 0x40)
        
        for (int32_t i = (rbx_2 - 1).d; i s>= rbp_1; i -= 1)
            int64_t rcx_6 = sx.q(*(arg1 + 0x50))
            *(arg1 + 0x50) = (rcx_6 + 1).d
            *(*(arg1 + 0x40) + (rcx_6 << 2)) = i
    
    int32_t rdx_2 = *(arg1 + 0x50)
    
    if (rdx_2 s> *(arg1 + 0x6c))
        sub_1405dadb0(arg1 + 0x60, rdx_2)
    
    int32_t rax_4 = *(rsi_1 + 0x40)
    
    if (rbx_2.d s> rax_4)
        *(rsi_1 + 0x40) = rbx_2.d
        
        if (rbx_2.d s> *(rsi_1 + 0x44))
            sub_1405a4cf0(rsi_1 + 0x38)
    else if (rbx_2.d s< rax_4 && rbx_2.d != rax_4)
        *(rsi_1 + 0x40) = rbx_2.d
        sub_1405dac90(rsi_1 + 0x38)
    
    result = memset(*(rsi_1 + 0x38), 0xff, zx.q((rbx_2 << 2).d))
    *(arg1 + 0x54) = 0xffffffff

return result
