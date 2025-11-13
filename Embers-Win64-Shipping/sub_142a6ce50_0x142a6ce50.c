// 函数: sub_142a6ce50
// 地址: 0x142a6ce50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result

if (arg1 != arg2)
    if (sub_142a57090(arg1, arg2).b == 0)
        result.b = 0
        return result
    
    int64_t* rcx = *(arg1 + 0x148)
    
    if (rcx == 0)
        result.b = 0
        return result
    
    if ((*(*rcx + 0x20))(rcx, *(arg2 + 0x148)).b == 0)
        result.b = 0
        return result
    
    int64_t* rcx_1 = *(arg1 + 0x150)
    
    if (rcx_1 == 0)
        result.b = 0
        return result
    
    if ((*(*rcx_1 + 0x10))(rcx_1, *(arg2 + 0x150)).b == 0 || *(arg1 + 0x15c) != *(arg2 + 0x15c))
        result.b = 0
        return result

result.b = 1
return result
