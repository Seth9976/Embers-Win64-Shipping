// 函数: sub_140f14330
// 地址: 0x140f14330
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char result = *(arg1 + 0x5b3)

if ((result & 2) != 0)
    result &= 0xfd
    *(arg1 + 0x5b3) = result
    
    if (*(arg1 + 0x558) != 0)
        int64_t* rcx = *(arg1 + 0x550)
        
        if (rcx != 0)
            result = (*(*rcx + 0x28))(rcx)
            
            if (result != 0)
                if (*(arg1 + 0x558) == 0)
                    jump(*(*nullptr + 0x50))
                
                jump(*(**(arg1 + 0x550) + 0x50))

return result
