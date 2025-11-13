// 函数: sub_141de77a0
// 地址: 0x141de77a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm1[0x4] = data_143f39070
void* rbx = *(arg2 + 0x10)
zmm1[0].q = zx.o(0) u>> 0x40
*arg4 = _mm_shuffle_ps(zx.o(0), zmm1, 0xc4)
arg4[1] = zx.o(0)
arg4[2] = __andps_xmmxud_memxud(data_143f39070, data_143f39050)
sub_141e00ec0(arg4, arg2, arg3)
uint128_t* result = sub_141dfbf20(arg4, arg2, arg3)

if (*(rbx + 0x28) s<= 0)
    return result

return sub_141dfe830(arg4, arg2, arg3)
