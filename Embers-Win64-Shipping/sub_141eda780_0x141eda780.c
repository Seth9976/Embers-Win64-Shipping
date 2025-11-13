// 函数: sub_141eda780
// 地址: 0x141eda780
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result

if ((*(*arg1 + 0x5c0))().b != 0 && arg1[0xb4].b == 0)
    result = arg1[0x29]
    
    if (result == 0)
        result.b = 1
        return result
    
    int64_t* rcx = *(result + 0x130)
    
    if (rcx != 0)
        result = (*(*rcx + 0x3e8))(rcx, 0)
    
    if ((rcx == 0 || result.b == 0) && sub_141dce090(arg1[0x29]).b == 0)
        result.b = 1
        return result

result.b = 0
return result
