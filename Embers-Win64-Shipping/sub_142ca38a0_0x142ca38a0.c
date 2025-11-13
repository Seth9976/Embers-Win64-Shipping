// 函数: sub_142ca38a0
// 地址: 0x142ca38a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = *(arg2 + 0x60) & 2

if (result == 0)
    return result

*(arg2 + 0x60) &= 0xfffffffd
return sub_14058a4d0(arg2 + 0xa8)
