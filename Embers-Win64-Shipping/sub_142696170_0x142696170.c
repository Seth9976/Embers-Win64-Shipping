// 函数: sub_142696170
// 地址: 0x142696170
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = 1

if (arg2 s> 0)
    result = arg2

if (*(arg1 + 0x43c) != result)
    *(arg1 + 0x43c) = result
    void* rcx = *(arg1 + 0x2e0)
    
    if (rcx != 0)
        *(rcx + 0xb0) = result

return result
