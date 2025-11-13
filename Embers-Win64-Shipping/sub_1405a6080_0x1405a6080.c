// 函数: sub_1405a6080
// 地址: 0x1405a6080
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm1
zmm1.q = data_143d796f8 f* 0x408f400000000000
zmm1.q = zmm1.q f* float.d(zx.q(data_143f138e4))
int64_t zmm6_1 = sub_140b43f30("RenderThreadTime", 0, _mm_cvtpd_ps(zmm1), 0)
uint128_t zmm1_1
zmm1_1.q = data_143d796f8 f* zmm6_1
zmm1_1.q = zmm1_1.q f* float.d(zx.q(data_143f138ec))
int64_t zmm6_2 = sub_140b43f30("GameThreadTime", 0, _mm_cvtpd_ps(zmm1_1), 0)
uint128_t zmm1_2
zmm1_2.q = data_143d796f8 f* zmm6_2
zmm1_2.q = zmm1_2.q f* float.d(zx.q(data_143f5b2a4))
int64_t zmm6_3 = sub_140b43f30("GPUTime", 0, _mm_cvtpd_ps(zmm1_2), 0)
uint128_t zmm1_3

if (data_143f01c92 != 0)
    zmm1_3.q = data_143d796f8 f* zmm6_3
    zmm1_3.q = zmm1_3.q f* float.d(zx.q(data_143f138e8))
    zmm6_3 = sub_140b43f30("RHIThreadTime", 0, _mm_cvtpd_ps(zmm1_3), 0)

int64_t rax_4 = data_143f01ca8

if (rax_4 != 0)
    zmm1_3.q = data_143d796f8 f* zmm6_3
    zmm1_3.q = zmm1_3.q f* float.d(zx.q(rax_4.d))
    sub_140b43f30("InputLatencyTime", 0, _mm_cvtpd_ps(zmm1_3), 0)

void var_98
sub_140b6c480(&var_98)
float zmm2[0x4] = zx.o(0)
int64_t var_58
uint64_t rax_7 = var_58 u>> 0xa
zmm2[0] = float.s(rax_7)

if (rax_7 s< 0)
    zmm2[0] = zmm2[0] + 1.84467441e+19f

zmm2[0] = zmm2[0] * 0.0009765625f
return sub_140b43f30("MemoryFreeMB", 0, zmm2, 0)
