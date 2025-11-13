// 函数: sub_142c7d660
// 地址: 0x142c7d660
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg2 = 0
sub_142c65340(arg1, 0)
arg1[0xdd].d = 0x1b7740
arg1[0xdf] = sub_142c814a0
arg1[0xe0] = sub_142c7e540
arg1[0xde] = arg1
int32_t result

if ((*(arg1[0x87] + 0x80) & 1) != 0)
    result, arg3 = sub_142c5b250(arg1, 0, arg3)

if ((*(arg1[0x87] + 0x80) & 1) == 0 || result == 0)
    sub_142c8ed20(&arg1[0xd3])
    arg1[0xea].d = 1
    result = sub_142c8f150(&arg1[0xd3], 0, arg3)
    *arg2 = arg1[0xea].d == 0

return result
