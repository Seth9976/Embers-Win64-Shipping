// 函数: sub_141dce670
// 地址: 0x141dce670
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = *(arg1 + 0x50)

if (result != 0 && (*(result + 0x370) & 2) != 0)
    int64_t* rcx = *(arg1 + 0x18)
    
    if (rcx != 0 && (*(*rcx + 0x290))(rcx).b != 0)
        result.b = 1
        return result

result.b = 0
return result
