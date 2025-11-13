// 函数: sub_142b70f70
// 地址: 0x142b70f70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0xc) == 0)
    int32_t r8_1 = 0
    int64_t i = sx.q(*(arg1 + 0x40))
    *(arg1 + 0x10) = arg2
    void* rdi_2 = arg1 + 0x18 + (i << 3)
    
    do
        int64_t* rcx = *(rdi_2 - 8)
        rdi_2 -= 8
        i -= 1
        
        if (rcx != 0)
            arg2 = (*(*rcx + 0x18))(rcx, zx.q(arg2 - r8_1))
        
        r8_1 = 1
    while (i s> 0)
    
    *(arg1 + 0xc) = arg2

return zx.q(arg2)
