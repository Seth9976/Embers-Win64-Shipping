// 函数: sub_140b9c9a0
// 地址: 0x140b9c9a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdx_1 = *(arg1 + 0x3a0)
int32_t result = *(rdx_1 + 0xa0)

if (result == *(rdx_1 + 0xcc))
    result = *(rdx_1 + 0xf0)
    
    if (result == *(rdx_1 + 0x11c) && *(arg1 + 0x338) == 0)
        return sub_140b9c9e0(arg1 + 0x340, 0) __tailcall

return result
