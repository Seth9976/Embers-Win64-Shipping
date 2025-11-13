// 函数: sub_140fbd780
// 地址: 0x140fbd780
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (sub_140e19840(arg1, arg3) == 0 || *(arg1 + 0x60d) == 0 || *(arg1 + 0x60e) == 0
        || *(arg1 + 0x60f) != 0)
    sub_140dc1750(arg1, arg2)
else
    *arg2 = 1
    __builtin_memset(&arg2[8], 0, 0x30)
    *(arg2 + 0x38) = 0xd

return arg2
