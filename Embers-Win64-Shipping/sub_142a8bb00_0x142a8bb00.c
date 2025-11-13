// 函数: sub_142a8bb00
// 地址: 0x142a8bb00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result

if ((zx.d(*arg2) & 0xfffffc00) == 0xdc00 && arg1 != arg2 && (zx.d(arg2[-1]) & 0xfffffc00) == 0xd800)
    result.b = 0
    return result

if ((zx.d(arg3[-1]) & 0xfffffc00) == 0xd800 && arg2 != arg4 && (zx.d(*arg3) & 0xfffffc00) == 0xdc00)
    result.b = 0
    return result

result.b = 1
return result
