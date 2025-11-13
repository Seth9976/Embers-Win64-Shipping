// 函数: sub_14126c0d0
// 地址: 0x14126c0d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg4 = 0

if (sub_1411a4ac0(data_143f0f1a0, *(arg1 + 0x10)) != 0)
    int32_t r8 = *(arg3 + 0x3c)
    int32_t rax_3 = r8 << 0x1d s>> 0x1d
    
    if (rax_3 == 0)
        *arg4 = *(arg2 + 0x110)
    else if (rax_3 == 1)
        *arg4 = (r8 u>> 3 & 0xffffff) + *(*(arg1 + 8) + 0xdc0)

if (arg2 == 0)
    *arg5 = 0xffffffff
else
    *arg5 = *(arg2 + 0x110)

return arg5
