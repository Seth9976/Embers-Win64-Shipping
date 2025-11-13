// 函数: sub_140385fd0
// 地址: 0x140385fd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r9_2 = arg2

if (arg2 == 0)
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = muls.dp.d(0x51eb851f, *(arg1 + 0x84))
    int32_t r9_1 = temp2_1 s>> 7
    r9_2 = r9_1 + (r9_1 u>> 0x1f)

int32_t result = *(arg1 + 0x98)

if (result == 0xfffffc18)
    int32_t rax_3 = *(arg1 + 0x84)
    return zx.q(divs.dp.d(sx.q(rax_3 * 0x3c), r9_2) + *(arg1 + 0x64) * rax_3)

if (result == 0xffffffff)
    result = divs.dp.d(sx.q((*(arg1 + 0x84) * arg3) << 3), r9_2)

return result
