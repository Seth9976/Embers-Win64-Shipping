// 函数: sub_141c72630
// 地址: 0x141c72630
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax
float zmm6_1
rax, zmm6_1 = sub_141f88540()
int64_t* rax_1 = sub_1405f7040(rax)
zmm6_1 = zmm6_1 * 1048576f
int64_t rcx_1 = 0
int64_t r8 = *rax_1

if (not(zmm6_1 < 9.22337204e+18f))
    zmm6_1 = zmm6_1 - 9.22337204e+18f
    
    if (not(zmm6_1 >= 9.22337204e+18f))
        rcx_1 = -0x8000000000000000

int64_t rax_2 = (*(r8 + 0xf8))(rax_1, int.q(zmm6_1) + rcx_1, r8)
double zmm0_1[0x2] = zx.o(0)
zmm0_1[0] = float.d(rax_2)

if (rax_2 s< 0)
    zmm0_1[0] = zmm0_1[0] + 1.8446744073709552e+19

zmm0_1[0] = zmm0_1[0] * 9.5367431640625e-07
return _mm_cvtpd_ps(zmm0_1)
