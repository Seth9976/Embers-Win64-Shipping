// 函数: sub_140610b90
// 地址: 0x140610b90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm1
zmm1.q = data_143d796f8 f* 1000.0
zmm1.q = zmm1.q f* float.d(zx.q(arg1))
return _mm_cvtpd_ps(zmm1)
