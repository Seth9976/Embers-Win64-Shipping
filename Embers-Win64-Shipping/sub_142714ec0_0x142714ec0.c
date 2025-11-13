// 函数: sub_142714ec0
// 地址: 0x142714ec0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char r8 = *(arg1 + 0x274)
uint64_t result
result.b = r8 u>> 5
result.b &= 1

if (result.b != arg2)
    void* rax = *(arg1 + 0xa8)
    *(arg1 + 0x274) = (r8 & 0xdf) | arg2 << 5
    
    if (rax == 0)
        rax = sub_141ee69e0(arg1)
    
    result = sub_1426fbe40(rax)
    
    if (result != 0)
        return sub_142716710(result, sub_140d21950(arg1, sub_142736f50()))

return result
