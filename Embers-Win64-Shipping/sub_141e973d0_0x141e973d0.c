// 函数: sub_141e973d0
// 地址: 0x141e973d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result

if ((*(arg1 + 0x330) & 1) == 0)
    result = *(arg1 + 0x288)
    
    if (result != 0 && (*(result + 0xf0) & 1) != 0)
        int64_t* rcx = *(arg1 + 0x130)
        
        if (rcx != 0 && (*(*rcx + 0x3e8))(rcx, 0).b == 0)
            result.b = 1
            return result

result.b = 0
return result
