// 函数: sub_140f139a0
// 地址: 0x140f139a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char result = *(arg1 + 0x5b3)

if ((result & 2) == 0)
    *(arg1 + 0x5b3) = result | 2
    result = sub_140e78f50(data_143e29f28, arg1 + 0x598, 0)
    
    if (*(arg1 + 0x548) != 0)
        int64_t* rcx_1 = *(arg1 + 0x540)
        
        if (rcx_1 != 0)
            result = (*(*rcx_1 + 0x28))(rcx_1)
            
            if (result != 0)
                if (*(arg1 + 0x548) == 0)
                    jump(*(*nullptr + 0x50))
                
                jump(*(**(arg1 + 0x540) + 0x50))

return result
