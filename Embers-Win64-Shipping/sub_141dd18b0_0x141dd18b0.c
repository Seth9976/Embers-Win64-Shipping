// 函数: sub_141dd18b0
// 地址: 0x141dd18b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result
result.b = *(arg1 + 0x5c) & 0x60

if (result.b != 0x40)
    result = (*(*arg1 + 0x150))()
    
    if (result != 0)
        result = sub_1424385d0(result)
        
        if (result.b != 0)
            return sub_141dbf290(arg1, 0) __tailcall

return result
