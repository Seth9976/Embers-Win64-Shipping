// 函数: sub_140f89b00
// 地址: 0x140f89b00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm0
zmm0.q = fconvert.d(arg2)
uint128_t zmm6 = zx.o(0)

if (not(zmm0.q f< 0.0))
    zmm0 = __minsd_xmmsd_memsd(zmm0.q, 0x3ff0000000000000)
    zmm6 = zmm0

zmm0 = zx.o((*(*arg1 + 0x290))(zmm0))
int64_t rax_2 = *arg1
zmm0.q = _mm_cvtepi32_pd(zmm0.q).q f* zmm6.q
_mm_cvtpd_ps(zmm0)
jump(*(rax_2 + 0x258))
