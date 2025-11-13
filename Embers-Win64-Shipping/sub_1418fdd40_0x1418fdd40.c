// 函数: sub_1418fdd40
// 地址: 0x1418fdd40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = arg2
uint64_t result

if (*(arg1 + 0x58) != *(arg2 + 0xc0))
label_1418fde11:
    result.b = 0
else
    int64_t* rcx = *(arg2 + 0x190)
    int64_t rbx_1
    
    if (rcx != 0)
        rbx_1 = *(arg1 + 0xe0)
        result = (*(*rcx + 0x48))(rcx)
    
    if (rcx != 0 && rbx_1 != *(result + 0x18))
    label_1418fde11_1:
        result.b = 0
    else
        int64_t* rcx_1 = *(rdi + 0x1a8)
        int64_t rbx_2
        
        if (rcx_1 != 0)
            rbx_2 = *(arg1 + 0xe8)
            result = (*(*rcx_1 + 0x48))(rcx_1)
        
        if (rcx_1 != 0 && rbx_2 != *(result + 0x18))
        label_1418fde11_2:
            result.b = 0
        else
            int32_t i = 0
            
            if (*(arg2 + 0xc0) s> 0)
                void* r15_1 = rdi + 0x188
                void* rsi_1 = arg1 + 0x60
                
                do
                    if (*r15_1 != 0)
                        int64_t* rcx_2 = *(rdi + 0xc8)
                        
                        if (rcx_2 != 0 && *(rsi_1 + 0x40) != *((*(*rcx_2 + 0x48))(rcx_2) + 0x18))
                            goto label_1418fde11_2
                    
                    int64_t* rcx_3 = *rdi
                    
                    if (rcx_3 != 0)
                        if (*rsi_1 != *((*(*rcx_3 + 0x48))(rcx_3) + 0x18))
                            goto label_1418fde11_2
                        
                        rsi_1 += 8
                    
                    i += 1
                    rdi += 0x18
                while (i s< *(arg2 + 0xc0))
            
            result.b = 1

return result
