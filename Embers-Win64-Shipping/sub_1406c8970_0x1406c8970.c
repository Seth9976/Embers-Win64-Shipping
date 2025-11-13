// 函数: sub_1406c8970
// 地址: 0x1406c8970
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = arg3 s>> 5
int32_t var_18 = 1
arg1[1] = 1 << (arg3.b & 0x1f)
*(arg1 + 8) = arg2
int32_t var_14 = 0xffffffff
arg1[4] = 0xffffffff << (arg3.b & 0x1f)
arg1[5] = arg3
arg1[6] = arg3 & 0xffffffe0

if (arg3 != *(*(arg1 + 8) + 0x18))
    sub_14059bdd0(arg1)

return arg1
