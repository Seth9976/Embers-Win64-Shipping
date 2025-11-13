// 函数: sub_1408ce160
// 地址: 0x1408ce160
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = *(zx.q(arg3) * 0xa0 + *(arg1 + 0x58) + 0x28)

if (rbx s<= 0)
    return 0

int32_t rax_2 = rand()
uint128_t zmm0 = _mm_cvtepi32_ps(zx.o(rbx))
int32_t rax_3 = rbx - 1
uint128_t zmm2
zmm2.d = _mm_cvtepi32_ps(zx.o(rax_2)).d f* 3.05185094e-05f
zmm2.d = zmm2.d f* zmm0.d
int32_t rcx = int.d(zmm2.d)

if (rcx s<= rax_3)
    return rcx

return rax_3
