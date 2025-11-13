// 函数: sub_141e41040
// 地址: 0x141e41040
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int512_t result

if (arg2 s< 0 || arg2 s>= *(arg1 + 0x40))
    result.o = 0x3f800000
    return result

result.o = *(*(arg1 + 0x38) + sx.q(arg2) * 0x14 + 0x10)
return result
