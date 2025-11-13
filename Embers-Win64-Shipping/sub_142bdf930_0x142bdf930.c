// 函数: sub_142bdf930
// 地址: 0x142bdf930
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi = *(arg1 + 0x18)
void* result = sub_142be8ea0(rsi + 6, arg4)

if (result == 0)
    return result

uint64_t rcx_7 = zx.q(((zx.d(*result) << 8 | zx.d(*(result + 1))) << 8 | zx.d(*(result + 2))) << 8)
    | zx.q(*(result + 3))
uint32_t rbx_6 = ((zx.d(*(result + 4)) << 8 | zx.d(*(result + 5))) << 8 | zx.d(*(result + 6))) << 8
    | zx.d(*(result + 7))

if (rcx_7.d != 0 && sub_142be8ca0(rcx_7 + rsi, arg3) != 0)
    return (*(*(arg2 + 0x10) + 0x18))(arg2, zx.q(arg3))

if (rbx_6 == 0)
    return 0

return sub_142be8d40(zx.q(rbx_6) + rsi, arg3)
