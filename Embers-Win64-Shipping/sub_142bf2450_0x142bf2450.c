// 函数: sub_142bf2450
// 地址: 0x142bf2450
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = *(arg1 + 0x80)

if (zx.q(*(arg1 + 0x78)) u>= rcx)
    int64_t rdi_2 = rcx + 4 + (rcx u>> 1)
    
    if (*(arg1 + 0x70) == arg1 + 0x88)
        rcx = 0
        *(arg1 + 0x70) = 0
    
    if (rdi_2 u> 0x10000)
        rdi_2 = 0x10000
        
        if (rcx == 0x10000)
            return 0xffffffff
    
    int32_t arg_8
    int64_t rax_6 = sub_142b99a90(*(arg1 + 0xd0), 1, rcx.d, rdi_2.d, *(arg1 + 0x70), &arg_8)
    bool cond:0_1 = arg_8 != 0
    *(arg1 + 0x70) = rax_6
    
    if (cond:0_1)
        return 0xffffffff
    
    *(arg1 + 0x80) = rdi_2

return 0
