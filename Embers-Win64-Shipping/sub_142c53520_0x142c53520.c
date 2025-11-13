// 函数: sub_142c53520
// 地址: 0x142c53520
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg2 = 0

if (arg1 != 0 && *arg1 == 0xbab1e && sub_142891590(&arg1[8]) != 0)
    int64_t* rdx = *(arg1 + 0x20)
    int64_t rbx = *rdx
    sub_142c6a090(&arg1[8], rdx, 0)
    *arg2 = sub_142c56200(sub_142891590(&arg1[8]))
    return rbx + 0x18

return 0
