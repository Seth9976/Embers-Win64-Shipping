// 函数: __libm_sse2_sincos_
// 地址: 0x142c94020
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

double zmm2[0x2]
zmm2[0] = arg1.q
zmm2 &= data_1436bbba0

if (zmm2[0] < 7.4505805969238281e-09)
    _mm_unpacklo_pd(arg1, 
        _mm_sub_pd(0x3ff0000000000000, __mulpd_xmmpd_mempd(_mm_mul_pd(zmm2, zmm2), data_1436bbbc0))[
            0])
    return 

double zmm1[0x2] = zx.o(0)
zmm1[0] = zmm2.q
zmm1[0] = zmm1[0] + 1.5707963267948966
return sub_142c94000(_mm_unpacklo_pd(arg1, zmm1[0])) __tailcall
