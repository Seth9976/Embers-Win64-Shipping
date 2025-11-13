// 函数: sub_140b5d780
// 地址: 0x140b5d780
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t count = zx.d(*arg1) u>> 6

if ((*arg1 & 1) != 0)
    return memcpy(arg2, &arg1[1], count * 2) __tailcall

memcpy(arg2, &arg1[1], count)
uint64_t result = zx.q(zx.d(*arg1) u>> 6)

if (result.d != 0)
    void* rdx_2 = result + arg2
    void* r8_3 = arg2 + (result << 1)
    int32_t i
    
    do
        int16_t rcx_2 = sx.w(*(rdx_2 - 1))
        rdx_2 -= 1
        *(r8_3 - 2) = rcx_2
        r8_3 -= 2
        i = result.d
        result = zx.q(result.d - 1)
    while (i != 1)

return result
