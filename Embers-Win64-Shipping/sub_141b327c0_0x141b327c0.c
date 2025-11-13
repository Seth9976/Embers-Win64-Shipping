// 函数: sub_141b327c0
// 地址: 0x141b327c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t* rsi = arg2
arg2.b = 1
int32_t result = sub_141a6b7c0(arg1)

if (result.b != 0)
    int128_t zmm0 = *rsi
    result = *arg3
    *(arg1 + 0xf0) = result
    *(arg1 + 0xf8) = zmm0
    *(arg1 + 0xf4) = 1

return result
