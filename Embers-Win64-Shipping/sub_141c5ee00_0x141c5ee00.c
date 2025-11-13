// 函数: sub_141c5ee00
// 地址: 0x141c5ee00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = *(arg1 + 0x40)

if (rax s>= 0)
    if (rax s<= 1)
        return zx.q(*(arg1 + 0x58))
    
    if (rax == 2)
        int64_t* rcx = *(arg1 + 0x38)
        
        if (rcx == 0)
            return zx.q((*(arg1 + 0xc) << 0xe) + rcx.d)
        
        int32_t rax_4 = (*(*rcx + 0x30))(rcx)
        return zx.q((*(arg1 + 0xc) << 0xe) + rax_4)
    
    if (rax == 3)
        return zx.q(*(arg1 + 0xc) << 0xe)

return 0
