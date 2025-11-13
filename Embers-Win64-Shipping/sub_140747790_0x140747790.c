// 函数: sub_140747790
// 地址: 0x140747790
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = 0

if (*(arg1 + 0x40) == 0xffffffff)
    uint64_t* rcx_13 = *(arg1 + 0x38)
    int32_t rax_8 = *(rcx_13 + 0xc)
    rcx_13[1].d = 0
    
    if (rax_8 s< 0 && rax_8 != 0)
        sub_140775b10(rcx_13, 0)
else
    int32_t rdx_1 = *(arg1 + 0x28)
    uint64_t* rcx = *(arg1 + 0x38)
    rcx[1].d = 0
    
    if (rdx_1 s> *(rcx + 0xc))
        sub_140775b10(rcx, rdx_1)
    
    int64_t* rcx_1 = *(arg1 + 0x38)
    int32_t r8_2 = *(arg1 + 0x28) + rcx_1[1].d
    rcx_1[1].d = r8_2
    
    if (r8_2 s> *(rcx_1 + 0xc))
        sub_140775270(rcx_1)
    
    int64_t rax = sx.q(*(arg1 + 0x40))
    int32_t rcx_2 = *(arg1 + 0x10)
    
    if (rax.d s< rcx_2)
        rdi = rcx_2 - rax.d
        memcpy(**(arg1 + 0x38), *(arg1 + 8) + (rax << 2), rdi << 2)
    
    int32_t rcx_9 = *(arg1 + 0x28)
    
    if (rdi s< rcx_9)
        int32_t rdx_6 = rdi - *(arg1 + 0x10) + *(arg1 + 0x40)
        int32_t rax_3 = rcx_9 - rdi
        int32_t rsi_2 = *(arg1 + 0x20) - rdx_6
        
        if (rax_3 s<= rsi_2)
            rsi_2 = rax_3
        
        if (rsi_2 s> 0)
            memcpy(**(arg1 + 0x38) + (sx.q(rdi) << 2), *(arg1 + 0x18) + (sx.q(rdx_6) << 2), 
                rsi_2 << 2)
            rcx_9 = *(arg1 + 0x28)
            rdi += rsi_2
        
        if (rdi s< rcx_9)
            memset(**(arg1 + 0x38) + (sx.q(rdi) << 2), 0, sx.q(rcx_9 - rdi) << 2)

return *(arg1 + 0x38)
