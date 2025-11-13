// 函数: sub_141507940
// 地址: 0x141507940
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rsi = zx.q(arg3)
sub_14151c0b0(arg1, arg2, rsi.w, 1)
uint64_t r14 = zx.q(rsi.d)
uint64_t rdx

if (*(*(arg1 + 0x48) + (rsi << 1)) == 0xffff)
    int32_t rdx_1 = *(arg1 + 0x2c)
    
    if (*(arg1 + 0x28) == rdx_1)
        int32_t rdx_2 = rdx_1 * 2
        
        if (rdx_2 u<= 0x20)
            rdx_2 = 0x20
        
        sub_141512980(arg1 + 0x28, rdx_2)
    
    uint32_t r8_2 = zx.d(rsi.w)
    int32_t temp0_1 = *(arg1 + 0x30)
    
    if (r8_2 u>= temp0_1)
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(r8_2 + 1)
        int32_t rcx_3
        
        if (r8_2 == temp0_1)
            rcx_3 = 0x20
        else
            rcx_3 = 0x1f - temp0_2
        
        int32_t rcx_5 = rcx_3 << 0x1a s>> 0x1f
        uint64_t rflags_2
        char temp0_3
        temp0_3, rflags_2 = _bit_scan_reverse(r8_2)
        char rdx_3
        
        if (rcx_5 == 0)
            rdx_3 = 0x20
        else
            rdx_3 = 0x1f - temp0_3
        
        int32_t rdx_4 = 1 << ((not.d(rcx_5)).b & (0x20 - rdx_3))
        
        if (rdx_4 u<= 0x20)
            rdx_4 = 0x20
        
        sub_141512a20(arg1 + 0x28, rdx_4)
    
    rdx = zx.q(*(arg1 + 0x28))
    int64_t rax_12 = *(arg1 + 0x38)
    *(arg1 + 0x28) += 1
    *(rax_12 + (rdx << 1)) = rsi.w
    *(*(arg1 + 0x40) + (r14 << 2)) = 0
    *(*(arg1 + 0x48) + (r14 << 1)) = rdx.w
else
    *(*(arg1 + 0x40) + (rsi << 2)) = 0
    rdx = zx.q(*(*(arg1 + 0x48) + (rsi << 1)))
    
    if (rdx.w == 0 || *(*(arg1 + 0x40)
            + (zx.q(*(*(arg1 + 0x38) + (zx.q(((zx.d(rdx.w) - 1) s>> 1).w) << 1))) << 2)) u<= 0)
        return sub_141505070(arg1 + 0x28, rdx.w)

return sub_14151c590(arg1 + 0x28, rdx.w)
