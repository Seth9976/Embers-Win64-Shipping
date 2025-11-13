// 函数: sub_1406aa7e0
// 地址: 0x1406aa7e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdx = *(arg1 + 8)
uint64_t result = zx.q(*(rdx + 8))

if (result.d u<= 0x14 && test_bit(0x102100, result.d))
    result.b = 1
    return result

if (result.d == 2)
    int32_t rcx = *(*(rdx + 0x18) + 8)
    
    if (rcx u<= 0x14 && test_bit(0x102100, rcx))
        result.b = 1
        return result

result.b = 0
return result
