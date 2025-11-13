// 函数: sub_142b36c50
// 地址: 0x142b36c50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (boost::math::detail::isnan_impl<long double>(arg1.q) != 0)
    return 0

double zmm0[0x2] = sub_142a4bcc0()
uint128_t zmm2 = -0x8000000000000000
double zmm1_1[0x2] = zmm0
zmm0 ^= zmm2

if (not(zmm0[0] f> arg1.q))
    zmm0 = _mm_min_sd(zmm1_1[0], arg1.q)

int64_t rbx
rbx.b = 0.0 > zmm0[0]

if (rbx.b != 0)
    zmm0 ^= zmm2

int64_t result = int.q(sub_142a4b9b0(zmm0[0]))

if (rbx.b == 0)
    return result

return neg.q(result)
