// 函数: sub_141ea6180
// 地址: 0x141ea6180
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = (*(arg1 + 8) * 2) s>> 1

if (result != 0xffffffff)
    uint32_t rcx = zx.d(result.w)
    void* r8_1 = arg2 + 0x10
    void* rax_1 = *(r8_1 + 0x10)
    
    if (rax_1 != 0)
        r8_1 = rax_1
    
    if (test_bit(*(r8_1 + (zx.q(rcx) u>> 5 << 2)), rcx & 0x1f))
        result.b = 1
        return result

result.b = 0
return result
