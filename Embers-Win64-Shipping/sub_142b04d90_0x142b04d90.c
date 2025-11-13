// 函数: sub_142b04d90
// 地址: 0x142b04d90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 u> 0x7f)
    if (arg1 == 0xa5)
        return zx.q(arg1 - 0x49)
    
    if (arg1 == 0x203e)
        return 0x7e
else if (arg1 != 0x5c && arg1 != 0x7e)
    return zx.q(arg1)

return 0xfffe
