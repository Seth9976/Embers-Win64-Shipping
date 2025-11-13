// 函数: sub_1422a7550
// 地址: 0x1422a7550
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm4[0x4] = zx.o(0)
arg1[0] = arg1[0] * arg1[0]
float zmm5[0x4] = zx.o(0)
zmm5[0].q = fconvert.d(arg1[0])
arg1[0] = arg1[0] * arg1[0]
float zmm2[0x4] = zx.o(0)
zmm2[0].q = fconvert.d(arg1[0])
zmm4[0].q = fconvert.d(arg1[0])
zmm5[0].q = zmm5[0].q f* 16.59
double zmm3[0x2] = zmm4
zmm3[0] = zmm3[0] * 5.883
zmm4[0].q = zmm4[0].q f* 19.879999999999999
zmm5[0].q = zmm5[0].q f* zmm2[0].q
zmm3[0] = zmm3[0] f* zmm5[0].q
zmm4[0].q = zmm4[0].q f* zmm2[0].q
zmm3[0] = zmm3[0] f- zmm4[0].q
zmm4[0].q = zmm4[0].q f* 26.079999999999998
zmm3[0] = zmm3[0] f+ zmm4[0].q
zmm5[0].q = zmm5[0].q f* 5.1429999999999998
zmm3[0] = zmm3[0] f- zmm5[0].q
zmm2[0].q = zmm2[0].q f* 0.2636
zmm3[0] = zmm3[0] f+ zmm5[0].q
zmm3[0] = zmm3[0] f+ zmm2[0].q
zmm4[0].q = zmm4[0].q f* 4.7800000000000002
zmm3[0] = zmm3[0] + 0.01098
zmm4[0].q = zmm4[0].q f* zmm5[0].q
*arg2 = _mm_cvtpd_ps(zmm3)[0]
zmm4[0].q = zmm4[0].q f* 5.1779999999999999
zmm4[0].q = zmm4[0].q f* 5.2153999999999998
zmm4[0].q = zmm4[0].q f* zmm2[0].q
zmm4[0].q = zmm4[0].q f- zmm4[0].q
zmm5[0].q = zmm5[0].q f* 4.4240000000000004
zmm5[0].q = zmm5[0].q f* 1.6359999999999999
zmm4[0].q = zmm4[0].q f+ zmm4[0].q
zmm5[0].q = zmm5[0].q f* zmm2[0].q
zmm2[0].q = zmm2[0].q f* 0.40670000000000001
zmm4[0].q = zmm4[0].q f- zmm5[0].q
zmm4[0].q = zmm4[0].q f+ zmm5[0].q
zmm4[0].q = zmm4[0].q f+ zmm2[0].q
zmm4[0].q = zmm4[0].q f+ 0.0068529999999999997
float result[0x4] = _mm_cvtpd_ps(zmm4)
*arg3 = result[0]
return result
