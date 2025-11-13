// 函数: sub_141c738c0
// 地址: 0x141c738c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char result

if (sub_140a54810() == 0)
    int32_t rax_8 = 0
    
    if (0 == *(arg1 + 0x70))
        *(arg1 + 0x70) = 0
    else
        rax_8 = *(arg1 + 0x70)
    
    result = 0
    bool z_2
    
    if (0 == *(arg1 + 0x70))
        *(arg1 + 0x70) = 0
        z_2 = true
    else
        result = (*(arg1 + 0x70)).b
        z_2 = false
    
    int32_t rbp_1
    rbp_1.b = z_2
    
    if (rax_8 == rbp_1)
        int32_t temp0_2 = *(arg1 + 0x1c8)
        *(arg1 + 0x1c8) = 1
        return zx.q(temp0_2)
else
    int64_t* rcx = *(arg1 + 0x78)
    result = (*(*rcx + 0x20))(rcx, 0, 0)
    
    if (result != 0)
        int32_t i = 0
        bool z_1
        
        if (0 == *(arg1 + 0x70))
            *(arg1 + 0x70) = 0
            z_1 = true
        else
            *(arg1 + 0x70)
            z_1 = false
        
        int32_t rcx_1
        rcx_1.b = z_1
        void* rsi_5 = (((zx.q(rcx_1 - 1) & 1) + 5) << 4) + arg1
        
        if (data_143f34db0 != 0)
            int32_t rax_3 = *(rsi_5 + 8)
            
            if (rax_3 != 0)
                if (rax_3 s> 0)
                    int64_t r14_1 = 0
                    
                    do
                        void* rbx_1 = *rsi_5
                        int64_t* rax_4 = *(rbx_1 + r14_1 + 0x10)
                        int64_t* rcx_3 = rbx_1 + 0x20 + r14_1
                        
                        if (rax_4 != 0)
                            rcx_3 = rax_4
                        
                        (*(rbx_1 + r14_1))((*(*rcx_3 + 8))(rcx_3))
                        *(arg1 + 0x1bc) -= 1
                        i += 1
                        r14_1 += 0x40
                    while (i s< *(rsi_5 + 8))
                
                sub_141c6ca20(rsi_5, 0)
        
        EnterCriticalSection(arg1 + 0x80)
        *(arg1 + 0x70)
        *(arg1 + 0x70) = rcx_1
        int64_t* rcx_7 = *(arg1 + 0x78)
        result = (*(*rcx_7 + 0x18))(rcx_7)
        
        if (arg1 != -0x80)
            return LeaveCriticalSection(arg1 + 0x80)

return result
