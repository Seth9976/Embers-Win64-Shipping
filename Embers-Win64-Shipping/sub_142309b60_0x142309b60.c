// 函数: sub_142309b60
// 地址: 0x142309b60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x8b0)

if (rcx == 0 || (*(*rcx + 0x38))(rcx).b == 0)
    return 

int64_t* rcx_1 = *(arg1 + 0x8b0)
void var_ec
float var_d0[0xa]
float* rax_4 = sub_140ae2e90((*(*rcx_1 + 0x60))(rcx_1, &var_ec, arg1), &var_d0, arg3)
float zmm15[0x4] = *arg2
int64_t zmm1_1 = arg2[1].d
float zmm2_1[0x4] = *(arg2 + 0xc)
float zmm0_1[0x4] = *(arg2 + 0x14)
zmm15[0] = zmm15[0] - zmm2_1[0]
float zmm5_1[0x4] = rax_4[5]
zmm2_1[0] = zmm2_1[0] + zmm15[0]
float zmm14[0x4] = *(arg2 + 4)
float zmm11[0x4] = *(arg2 + 8)
float zmm10[0x4] = *rax_4
zmm14[0] = zmm14[0] f- zmm1_1.d
int128_t zmm8 = rax_4[1]
zmm1_1.d = zmm1_1.d f+ zmm14[0]
float zmm7_1[0x4] = rax_4[2]
zmm11[0] = zmm11[0] - zmm0_1[0]
float temp0_1[0x4] = _mm_min_ss(zmm15[0], zmm2_1[0])
float temp0_2[0x4] = _mm_max_ss(zmm15[0], zmm2_1[0])
float temp0_3[0x4] = _mm_max_ss(zmm14[0], zmm1_1.d)
zmm10[0] = zmm10[0] - rax_4[3]
float temp0_4[0x4] = _mm_min_ss(zmm14[0], zmm1_1.d)
zmm0_1[0] = zmm0_1[0] + zmm11[0]
float arg_8 = temp0_2[0]
float arg_20 = temp0_3[0]
float zmm4_1[0x4] = rax_4[4]
float temp0_5[0x4] = _mm_max_ss(temp0_2[0], zmm10[0])
zmm1_1.d = zmm8.q.d f- zmm4_1[0]
float temp0_6[0x4] = _mm_min_ss(zmm11[0], zmm0_1[0])
float temp0_7[0x4] = _mm_max_ss(zmm11[0], zmm0_1[0])
float temp0_8[0x4] = _mm_min_ss(temp0_1[0], zmm10[0])
zmm7_1[0] = zmm7_1[0] - zmm5_1[0]
arg_8 = temp0_5[0]
float temp0_9[0x4] = _mm_max_ss(arg_20[0], zmm1_1.d)
float temp0_10[0x4] = _mm_min_ss(temp0_4[0], zmm1_1.d)
zmm1_1.d = zmm10[0].q.d f+ rax_4[3]
zmm4_1[0] = zmm4_1[0] f+ zmm8.d
float temp0_11[0x4] = _mm_min_ss(temp0_6[0], zmm7_1[0])
float temp0_12[0x4] = _mm_max_ss(temp0_7[0], zmm7_1[0])
zmm5_1[0] = zmm5_1[0] + zmm7_1[0]
float temp0_13[0x4] = _mm_min_ss(temp0_8[0], zmm1_1.d)
float temp0_14[0x4] = _mm_min_ss(temp0_10[0], zmm4_1[0])
float temp0_15[0x4] = _mm_max_ss(temp0_9[0], zmm4_1[0])
float var_118_1 = temp0_12[0]
float temp0_16[0x4] = _mm_min_ss(zmm5_1[0], temp0_11[0])
float temp0_17[0x4] = _mm_max_ss(temp0_5[0], zmm1_1.d)
temp0_15[0] = temp0_15[0] - temp0_14[0]
temp0_17[0] = temp0_17[0] - temp0_13[0]
arg_20 = temp0_15[0]
zmm15 = *arg2
zmm1_1.d = temp0_15[0].q.d f* 0.5f
float temp0_18[0x4] = _mm_max_ss(var_118_1[0], zmm5_1[0])
temp0_17[0] = temp0_17[0] * 0.5f
temp0_14[0] = temp0_14[0] f+ zmm1_1.d
temp0_15[0] = temp0_15[0] * temp0_15[0]
temp0_18[0] = temp0_18[0] - temp0_16[0]
temp0_17[0] = temp0_17[0] * temp0_17[0]
temp0_13[0] = temp0_13[0] + temp0_17[0]
zmm8.d = zmm8.d f- temp0_14[0]
zmm14[0] = zmm14[0] - temp0_14[0]
temp0_15[0] = temp0_15[0] + temp0_17[0]
temp0_18[0] = temp0_18[0] * 0.5f
zmm10[0] = zmm10[0] - temp0_13[0]
zmm15[0] = zmm15[0] - temp0_13[0]
zmm8.d = zmm8.d f* zmm8.d
temp0_16[0] = temp0_16[0] + temp0_18[0]
zmm14[0] = zmm14[0] * zmm14[0]
zmm10[0] = zmm10[0] * zmm10[0]
int64_t var_fc_1 = (_mm_unpacklo_ps(temp0_17, zmm1_1)).q
zmm7_1[0] = zmm7_1[0] - temp0_16[0]
zmm15[0] = zmm15[0] * zmm15[0]
zmm11[0] = zmm11[0] - temp0_16[0]
temp0_18[0] = temp0_18[0] * temp0_18[0]
zmm8.d = zmm8.d f+ zmm10[0]
float var_10c_1 = temp0_18[0]
zmm14[0] = zmm14[0] + zmm15[0]
temp0_15[0] = temp0_15[0] + temp0_18[0]
zmm7_1[0] = zmm7_1[0] * zmm7_1[0]
float var_f4_1 = var_10c_1
zmm11[0] = zmm11[0] * zmm11[0]
temp0_15[0] = temp0_15[0] * 0.25f
zmm8.d = zmm8.d f+ zmm7_1[0]
zmm14[0] = zmm14[0] + zmm11[0]
zmm1_1.d = _mm_sqrt_ss(0, zmm8.d).d f+ rax_4[6]
float temp0_21[0x4] = _mm_sqrt_ss(0, zmm14[0])
temp0_21[0] = temp0_21[0] f+ *(arg2 + 0x18)
int64_t temp0_24 = _mm_min_ss(_mm_max_ss(zmm1_1.d, temp0_21[0]).d, _mm_sqrt_ss(0, temp0_15[0])[0])
float var_108[0x4]
var_108[0] = temp0_13[0]
float temp0_25[0x4] = _mm_shuffle_ps(var_108, var_108, 0xe1)
temp0_25[0] = temp0_14[0]
float temp0_26[0x4] = _mm_shuffle_ps(temp0_25, temp0_25, 0xc6)
temp0_26[0] = temp0_16[0]
*arg2 = _mm_shuffle_ps(temp0_26, temp0_26, 0xc9)
arg2[1].q = var_fc_1
*(arg2 + 0x18) = temp0_24.d
