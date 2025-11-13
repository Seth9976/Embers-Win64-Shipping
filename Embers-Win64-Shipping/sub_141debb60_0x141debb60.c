// 函数: sub_141debb60
// 地址: 0x141debb60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *arg1
uint128_t zmm2 = 0x3f800000
uint128_t zmm1

if (rax == 0)
    zmm1 = 0x3f800000
else
    zmm1 = *(rax + 0x94)

zmm1.d = zmm1.d f* *(arg1 + 0x14)

if (not(_mm_and_ps(zmm1, 0x7fffffff).d f<= 9.99999994e-09f))
    zmm2 = zmm1

zmm1 = zx.o(arg1[3].d)
zmm2 = _mm_and_ps(zmm2, 0x7fffffff)
uint128_t result
result.d = arg1[2].d.d f- *(arg1 + 0xc)
result.d = result.d f* _mm_cvtepi32_ps(zmm1).d
result.d = result.d f/ zmm2.d
return result
