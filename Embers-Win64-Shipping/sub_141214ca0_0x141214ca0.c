// 函数: sub_141214ca0
// 地址: 0x141214ca0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_148
int64_t rax_1 = __security_cookie ^ &var_148
float zmm13[0x4] = arg1[2]
float zmm14[0x4] = arg1[1]
float zmm15[0x4] = *arg1
float temp0_1[0x4] = _mm_mul_ps(zmm13, _mm_shuffle_ps(0x3de147ae, 0x3de147ae, 0))
int64_t var_118 = 0
float temp0_3[0x4] = _mm_mul_ps(zmm14, _mm_shuffle_ps(0x3f170a3d, 0x3f170a3d, 0))
int64_t var_110 = 0
int64_t var_118_1 = 0
int64_t var_110_1 = 0
int64_t var_118_2 = 0
int64_t var_110_2 = 0
int64_t var_118_3 = 0
int64_t var_110_3 = 0
int64_t var_118_4 = 0
int32_t var_110_4 = 0
float temp0_7[0x4] = _mm_add_ps(
    _mm_add_ps(_mm_mul_ps(zmm15, _mm_shuffle_ps(0x3e99999a, 0x3e99999a, 0)), temp0_3), temp0_1)
float zmm11[0x4] = _mm_shuffle_ps(temp0_7, temp0_7, 0xff) ^ data_142d3f780
float zmm12[0x4] = _mm_shuffle_ps(temp0_7, temp0_7, 0x55) ^ data_142d3f780
zmm11[0] = zmm11[0] * zmm11[0]
zmm12[0] = zmm12[0] * zmm12[0]
float zmm10[0x4] = _mm_shuffle_ps(temp0_7, temp0_7, 0xaa)
zmm12[0] = zmm12[0] + zmm11[0]
zmm10[0] = zmm10[0] * zmm10[0]
zmm12[0] = zmm12[0] + zmm10[0]
float zmm2[0x4]
float zmm3[0x4]
float zmm4[0x4]

if (not(zmm12[0] == 1f))
    if (zmm12[0] >= 9.99999994e-09f)
        zmm4 = 0x3f000000
        zmm3 = zx.o(0)
        zmm2 = 0x3f000000
        zmm3[0] = zmm12[0]
        float temp0_11[0x4] = _mm_rsqrt_ss(zmm3[0], zmm3[0])
        zmm3[0] = zmm3[0] * 0.5f
        temp0_11[0] = temp0_11[0] * temp0_11[0]
        zmm3[0] = zmm3[0] * temp0_11[0]
        zmm2[0] = 0.5f - zmm3[0]
        temp0_11[0] = temp0_11[0] * zmm2[0]
        temp0_11[0] = temp0_11[0] + temp0_11[0]
        temp0_11[0] = temp0_11[0] * temp0_11[0]
        zmm3[0] = zmm3[0] * temp0_11[0]
        zmm4[0] = 0.5f - zmm3[0]
        temp0_11[0] = temp0_11[0] * zmm4[0]
        temp0_11[0] = temp0_11[0] + temp0_11[0]
        zmm11[0] = zmm11[0] * temp0_11[0]
        zmm12[0] = zmm12[0] * temp0_11[0]
        zmm10[0] = zmm10[0] * temp0_11[0]
    else
        zmm11 = data_143dbb1f8
        zmm12 = data_143dbb1fc
        zmm10 = data_143dbb200

zmm10[0] = zmm10[0] * 1.02332771f
var_118_4.d = 0x3f62dfcf
zmm3 = var_118_4.o
zmm12[0] = zmm12[0] * -1.02332771f
float temp0_12[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xe1)
zmm12[0] = zmm12[0] * 1.02332771f
temp0_12[0] = zmm12[0]
zmm11[0] = zmm11[0] * 1.02332771f
float temp0_13[0x4] = _mm_shuffle_ps(temp0_12, temp0_12, 0xc6)
temp0_13[0] = zmm10[0]
zmm11[0] = zmm11[0] * -1.02332771f
float temp0_14[0x4] = _mm_shuffle_ps(temp0_13, temp0_13, 0x27)
zmm10[0] = zmm10[0] * -1.02332771f
temp0_14[0] = zmm11[0]
float temp0_15[0x4] = _mm_shuffle_ps(temp0_14, temp0_14, 0x39)
var_118_4.o = temp0_15
float temp0_16[0x4] = _mm_mul_ps(temp0_15, zmm15)
var_118_4.d = 0x3f62dfcf
zmm4 = var_118_4.o
float temp0_17[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xe1)
temp0_17[0] = zmm12[0]
float temp0_18[0x4] = _mm_shuffle_ps(temp0_17, temp0_17, 0xc6)
float temp0_19[0x4] = _mm_shuffle_ps(temp0_16, temp0_16, 0x4e)
temp0_18[0] = zmm10[0]
float temp0_20[0x4] = _mm_add_ps(temp0_16, temp0_19)
float temp0_21[0x4] = _mm_shuffle_ps(temp0_18, temp0_18, 0x27)
temp0_21[0] = zmm11[0]
float temp0_22[0x4] = _mm_shuffle_ps(temp0_21, temp0_21, 0x39)
var_118_4.o = temp0_22
float temp0_24[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_20, temp0_20, 0x39), temp0_20)
float temp0_25[0x4] = _mm_mul_ps(temp0_15, zmm14)
float temp0_26[0x4] = _mm_mul_ps(temp0_15, zmm13)
float temp0_28[0x4] = _mm_add_ps(temp0_25, _mm_shuffle_ps(temp0_25, temp0_25, 0x4e))
float temp0_30[0x4] = _mm_add_ps(temp0_26, _mm_shuffle_ps(temp0_26, temp0_26, 0x4e))
float temp0_32[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_28, temp0_28, 0x39), temp0_28)
float temp0_33[0x4] = _mm_shuffle_ps(temp0_30, temp0_30, 0x39)
float temp0_34[0x4] = _mm_mul_ps(temp0_22, zmm15)
float temp0_35[0x4] = _mm_add_ps(temp0_33, temp0_30)
float temp0_37[0x4] = _mm_add_ps(temp0_34, _mm_shuffle_ps(temp0_34, temp0_34, 0x4e))
float temp0_39[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_37, temp0_37, 0x39), temp0_37)
float temp0_40[0x4] = _mm_mul_ps(temp0_22, zmm14)
float temp0_41[0x4] = _mm_mul_ps(temp0_22, zmm13)
float temp0_43[0x4] = _mm_add_ps(temp0_40, _mm_shuffle_ps(temp0_40, temp0_40, 0x4e))
float temp0_45[0x4] = _mm_add_ps(temp0_41, _mm_shuffle_ps(temp0_41, temp0_41, 0x4e))
temp0_24[0] = temp0_24[0] * 0.0500000007f
float temp0_47[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_43, temp0_43, 0x39), temp0_43)
float temp0_48[0x4] = _mm_shuffle_ps(temp0_45, temp0_45, 0x39)
temp0_24[0] = temp0_24[0] - temp0_39[0]
float temp0_49[0x4] = _mm_add_ps(temp0_48, temp0_45)
temp0_32[0] = temp0_32[0] * 0.0500000007f
float temp0_50[0x4] = _mm_max_ss(temp0_24[0], 0)
temp0_35[0] = temp0_35[0] * 0.0500000007f
temp0_32[0] = temp0_32[0] - temp0_47[0]
float var_108 = temp0_50[0]
temp0_35[0] = temp0_35[0] - temp0_49[0]
float temp0_51[0x4] = _mm_max_ss(temp0_32[0], 0)
float temp0_52[0x4] = _mm_max_ss(temp0_35[0], 0)
float var_104 = temp0_51[0]
float var_100 = temp0_52[0]
void var_f8
float zmm0[0x4] = *sub_140acc990(&var_f8, &var_108)
var_108.q = 0
float temp0_53[0x4] = __mulps_xmmps_memps(zmm0, data_142f426f0)
var_100.q = 0
float zmm1[0x4] = var_108.o
var_118_4.o = temp0_53
zmm4 = var_118_4.d
zmm1[0] = 0x3e906eba
zmm0 = *arg1
zmm3 = var_118_4:4.d
zmm2 = var_110_4
float temp0_55[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0), zmm1)
float temp0_57[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0), zmm1)
float temp0_58[0x4] = _mm_add_ps(zmm0, temp0_55)
float temp0_60[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0), zmm1)
*arg1 = temp0_58
arg1[1] = _mm_add_ps(arg1[1], temp0_57)
arg1[2] = _mm_add_ps(arg1[2], temp0_60)
__security_check_cookie(rax_1 ^ &var_148)
return 0
