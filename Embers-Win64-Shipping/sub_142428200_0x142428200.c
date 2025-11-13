// 函数: sub_142428200
// 地址: 0x142428200
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = arg3
int32_t rax

if (arg3 == 0)
    rax = -1
else
    rax = *(arg3 + 0x168)

arg1[1].d = rax

if (arg3 != 0)
    sub_142444950(arg3, arg2)

return arg1
