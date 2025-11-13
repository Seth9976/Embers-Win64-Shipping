// 函数: sub_142192eb0
// 地址: 0x142192eb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s<= 0xffffffff)
    if (arg2 == 0xfffffffc)
        return *(arg1 + 0x50)
    
    if (arg2 == 0xfffffffd)
        return *(arg1 + 0x30)
    
    if (arg2 == 0xfffffffe)
        return *(arg1 + 0x48)
else if (arg2 s< *(arg1 + 0x40))
    return *(*(arg1 + 0x38) + (sx.q(arg2) << 3))

return 0
