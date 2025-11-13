// 函数: sub_141eff910
// 地址: 0x141eff910
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = arg1[0x29]

if (*(result + 0xf0) != 1)
    result = (*(*arg1 + 0x540))()
    char rcx = arg1[0x71].b & 0x10
    
    if (result.b != 0)
        if (rcx != 0)
            result = (*(*arg1 + 0x7a0))(arg1)
        
        if (rcx == 0 || result.b == 0)
            jump(*(*arg1 + 0x798))
    else if (rcx != 0)
        result = (*(*arg1 + 0x7a0))(arg1)
        
        if (result.b != 0)
            jump(*(*arg1 + 0x790))

return result
