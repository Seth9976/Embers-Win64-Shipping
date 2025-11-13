// 函数: sub_140ad7490
// 地址: 0x140ad7490
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = arg1[3]
int32_t* rbx = arg2

if (rax == 0)
    *arg2 = data_14399f5e0
    return arg2

uint128_t zmm0 = 0x3f70101010101010
ldexp(zmm0.q, zx.d(rax) - 0x80)
uint32_t rax_2 = zx.d(arg1[2])
int32_t zmm2 = fconvert.s(zmm0.q)
rbx[3] = 0x3f800000
uint32_t rax_3 = zx.d(arg1[1])
uint128_t zmm1 = _mm_cvtepi32_ps(zx.o(rax_2))
uint32_t rax_4 = zx.d(*arg1)
zmm1.d = zmm1.d f* zmm2
zmm0 = _mm_cvtepi32_ps(zx.o(rax_3))
*rbx = zmm1.d
zmm0.d = zmm0.d f* zmm2
zmm1.d = _mm_cvtepi32_ps(zx.o(rax_4)).d f* zmm2
rbx[1] = zmm0.d
rbx[2] = zmm1.d
return rbx
