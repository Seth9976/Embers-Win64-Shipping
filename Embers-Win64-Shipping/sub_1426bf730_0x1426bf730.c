// 函数: sub_1426bf730
// 地址: 0x1426bf730
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result

if (arg2 != arg1)
    result = *(arg1 + 0xb0)
    
    if (result == 0)
        result.b = 1
        return result
    
    int64_t* rcx = *(result + 0xc0)
    
    if (rcx != 0)
        result = (*(*rcx + 0x7b0))(rcx)
    
    if (rcx != 0 && result.b == 1)
        result.b = 1
        return result
    
    void* rcx_1 = *(arg2 + 0xb0)
    
    if (rcx_1 == 0)
        result.b = 1
        return result
    
    int64_t* rcx_2 = *(rcx_1 + 0xc0)
    
    if (rcx_2 != 0 && (*(*rcx_2 + 0x7b0))(rcx_2, arg1).b == 1)
        result.b = 1
        return result

result.b = 0
return result
