// 函数: sub_142872290
// 地址: 0x142872290
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
int32_t r8 = *(arg1 + 0x18)

if ((r8 & 0xff000000) != 0x3000000)
    *arg3 = 0
    return 1

int32_t result = sub_142873b60(arg2, zx.d(r8.w), 2)

if (result == 0)
    return result

*arg3 = 2
return 1
