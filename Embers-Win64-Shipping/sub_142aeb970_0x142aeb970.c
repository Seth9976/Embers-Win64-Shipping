// 函数: sub_142aeb970
// 地址: 0x142aeb970
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (**(arg1 + 8) s> 0)
    return 0

if (arg2 u> 0xff)
    abort()
    noreturn

if (arg3 s> 0xffffff)
    abort()
    noreturn

if (arg3 s< 0)
    if (arg2 != 0xff && arg2 != 0)
        abort()
        noreturn
    
    if ((arg3 & 0xff000000) != 0xff000000)
        abort()
        noreturn
    
    arg2 = 0xff

return zx.q(arg2 << 0x18) | zx.q(arg3)
