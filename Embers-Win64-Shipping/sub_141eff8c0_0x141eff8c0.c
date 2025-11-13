// 函数: sub_141eff8c0
// 地址: 0x141eff8c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = arg1[0x29]

if (*(result + 0xf0) != 1)
    result = (*(*arg1 + 0x540))()
    
    if (result.b != 0)
        result = (*(*arg1 + 0x7a0))(arg1)
        
        if (result.b == 0)
            jump(*(*arg1 + 0x798))

return result
