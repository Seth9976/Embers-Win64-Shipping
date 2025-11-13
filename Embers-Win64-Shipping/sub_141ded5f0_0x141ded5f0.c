// 函数: sub_141ded5f0
// 地址: 0x141ded5f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (not(0f f>= *(arg1 + 0x90)))
    if (sub_141e44db0(arg1) != 0)
        return 1
    
    int32_t rdi_1 = 0
    
    if (*(arg1 + 0xb0) s> 0)
        int64_t* rbx_1 = nullptr
        
        while (true)
            int64_t rcx = *(arg1 + 0xa8)
            
            if (*(rbx_1 + rcx + 0x1c) != 0)
                int64_t* rcx_1 = *(rbx_1 + rcx)
                
                if (rcx_1 != 0 && (*(*rcx_1 + 0x330))(rcx_1) != 0)
                    return 1
            
            rdi_1 += 1
            rbx_1 = &rbx_1[4]
            
            if (rdi_1 s>= *(arg1 + 0xb0))
                return 0

return 0
