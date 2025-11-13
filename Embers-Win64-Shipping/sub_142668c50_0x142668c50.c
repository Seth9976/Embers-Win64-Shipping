// 函数: sub_142668c50
// 地址: 0x142668c50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x3f8) &= 0xfffffffd
uint32_t r8 = zx.d(arg2)
int32_t rdx = *(arg1 + 0x2a8)
*(arg1 + 0x3f8) |= r8 * 2
int32_t result = rdx & 1

if (result == r8)
    return result

*(arg1 + 0x2a8) = (rdx & 0xfffffffe) | r8
return sub_141dcf810(arg1) __tailcall
