// 函数: sub_1426e6e00
// 地址: 0x1426e6e00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = sub_140ce3290(arg1)
int32_t rdx = *(arg1 + 0xac)

if (test_bit(rdx, 8))
    int32_t rdx_1 = rdx & 0xfffffeff
    result = (rdx_1 u>> 2 & 0x20) | (rdx_1 & 0xffffff9f)
    *(arg1 + 0xac) = result

return result
