// 函数: sub_14210de20
// 地址: 0x14210de20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t result = zx.d(*(arg1 + 0x150))

if (result.b u<= 6 && test_bit(0x4b, zx.d(result.b)))
    if (sub_142110b90(arg1, arg2) != 0 || (*(arg1 + 0x1f8) & 0x40) != 0)
        return 1
    
    result = *(arg1 + 0x21c)
    int32_t rdx = 1 << arg2.b
    
    if ((rdx & result) == 0)
        *(arg1 + 0x21c) = result | rdx

result.b = 0
return result
