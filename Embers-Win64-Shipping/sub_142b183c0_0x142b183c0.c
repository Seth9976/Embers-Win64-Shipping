// 函数: sub_142b183c0
// 地址: 0x142b183c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*arg2 s<= 0)
    char rax_1 = *(arg1 + 0x1c)
    
    if (rax_1 s> 1)
        int32_t result = *(arg1 + 0x18)
        
        if (result == 0)
            goto label_142b183fd
        
        *(arg1 + 0x18) = 0
        return result
    
    if (rax_1 == 1 || rax_1 == 0)
        *(arg1 + 0x1c) = 2
    label_142b183fd:
        void* rdx = *(arg1 + 8)
        
        if (*(rdx + 0x170) == *(rdx + 0x18))
            *(rdx + 0x18) = 0
            *(rdx + 0x170) = 0
        
        int64_t rax_3 = sub_142aa4f90(*(arg1 + 8), arg2)
        
        if (rax_3 != 0x101000100)
            uint32_t rdx_3 = rax_3.d u>> 8
            int32_t rcx_2 = (rax_3 s>> 0x20).d
            int32_t rdx_6 = (rdx_3 & 0xff00) | (rax_3.d & 0x3f) | rcx_2 << 0x10
            
            if (rdx_6 != 0)
                *(arg1 + 0x18) = rdx_6 | 0xc0
            
            return zx.q(((rax_3.d & 0xff00) | (rdx_3 & 0xff0000)) u>> 8)
                | (zx.q(rcx_2) & 0xffff0000)
    else
        *arg2 = 0x1b

return 0xffffffff
