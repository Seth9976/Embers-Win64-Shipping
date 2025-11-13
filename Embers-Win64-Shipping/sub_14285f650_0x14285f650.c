// 函数: sub_14285f650
// 地址: 0x14285f650
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    *arg3 = arg2
    return zx.q(arg2 + 1)

if (arg1 == 0x10000)
    if (arg2 - 0x300 u<= 4)
        *arg3 = arg2
        return 1
else if (arg1 == 0x1ffff)
    int32_t rax_2 = arg2
    
    if (arg2 == 0x100)
        rax_2 = 0xff00
    
    if (rax_2 - 0xfefd u<= 3)
        *arg3 = arg2
        return 1

return 0
