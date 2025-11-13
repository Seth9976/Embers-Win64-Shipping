// 函数: sub_1420bf100
// 地址: 0x1420bf100
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2[0] == 0f)
    data_143f47f20
    sub_140d23f50(u"Attempted modulo 0 - returning 0.", 3)
    *arg3 = 0
    return 0

arg1[0] = arg1[0] / arg2[0]
uint32_t temp0[0x4] = __andps_xmmxud_memxud(arg1, data_142d3f770)
temp0[0] = temp0[0] f+ temp0[0]
temp0[0] = temp0[0] f- 0.5f
int32_t rbx_1 = int.d(temp0[0]) s>> 1

if (arg1[0] < 0f)
    rbx_1 = neg.d(rbx_1)

*arg3 = sub_140a454f0(arg1, arg2)
return zx.q(rbx_1)
