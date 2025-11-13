// 函数: sub_1413ab360
// 地址: 0x1413ab360
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = *(arg1 + 4) & 0x80000001

if (result s< 0)
    result = ((result - 1) | 0xfffffffe) + 1

result.b = result != 1
return result
