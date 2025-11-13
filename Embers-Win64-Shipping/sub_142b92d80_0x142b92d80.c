// 函数: sub_142b92d80
// 地址: 0x142b92d80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = 0
int32_t r11 = 0
int32_t r10 = 0

if (arg1 != 0)
    result = *(arg1 + 8)
    r11 = *(arg1 + 0xc)
    r10 = *(arg1 + 0x10)

if (arg2 != 0)
    *arg2 = result

if (arg3 != 0)
    *arg3 = r11

if (arg4 != 0)
    *arg4 = r10

return result
