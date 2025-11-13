// 函数: sub_141ed8440
// 地址: 0x141ed8440
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rcx = *(arg1[2] + 0xcc)
uint8_t result = (rcx u>> 0x12).b

if ((result & 1) != 0 || ((rcx u>> 7).b & 1) == 0)
    result = sub_142459eb0(arg1)

*(arg1 + 0x8b) |= 1
return result
