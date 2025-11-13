// 函数: sub_141de76f0
// 地址: 0x141de76f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm1[0x4] = data_143f39070
arg4[1] = zx.o(0)
zmm1[0].q = zx.o(0) u>> 0x40
*arg4 = _mm_shuffle_ps(zx.o(0), zmm1, 0xc4)
arg4[2] = __andps_xmmxud_memxud(data_143f39070, data_143f39050)
void* rsi = *(arg2 + 0x10)
int64_t* rcx = *(rsi + 0x48)
(*(*rcx + 0x30))(rcx, arg4, arg2, zx.q(arg3))
int64_t* rcx_1 = *(rsi + 0x50)
int64_t result = (*(*rcx_1 + 0x28))(rcx_1, arg4, arg2, zx.q(arg3))

if (*(rsi + 0x28) s<= 0)
    return result

int64_t* rcx_2 = *(rsi + 0x58)
return (*(*rcx_2 + 0x38))(rcx_2, arg4, arg2, zx.q(arg3))
