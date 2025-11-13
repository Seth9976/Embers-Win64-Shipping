// 函数: sub_141ab4140
// 地址: 0x141ab4140
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char r10 = arg4

if (arg4 == 4)
    r10 = *(arg3 + 0xd)

uint32_t rcx = zx.d(*(arg3 + 0xe))
int32_t var_18

if (rcx == 1)
    int32_t var_14_1 = 0x3f800000
    var_18 = 0
    int32_t var_10_2 = 0
else if (rcx == 2)
    int32_t var_10_1 = 0x3f800000
    var_18.q = 0
else
    var_18 = 0x3f800000
    int32_t var_14
    var_14.q = 0

return sub_141abb1f0(arg1, arg2, r10, &var_18) * 57.2957764f
