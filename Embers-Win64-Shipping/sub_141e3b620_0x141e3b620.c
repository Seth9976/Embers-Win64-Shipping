// 函数: sub_141e3b620
// 地址: 0x141e3b620
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *(arg1 + 0x10)
void* result = *(rcx + 0x430)

if (result != 0 && *(result + 0x60) != 0)
    result = sub_141f3b9f0(rcx)
    
    if (result == 0)
        return sub_141f477c0(*(arg1 + 0x10), (result + 1).d) __tailcall

return result
