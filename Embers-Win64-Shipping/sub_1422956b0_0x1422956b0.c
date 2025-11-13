// 函数: sub_1422956b0
// 地址: 0x1422956b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm3 = 0x3fd51eb851eb851f
double result[0x2] = zx.o(0)
int32_t i = 0
uint64_t rdi = zx.q(arg2)
double zmm4[0x2] = *arg4
result[0] = fconvert.d(zmm4[0].d)
result[0] = result[0] f- zmm3.q
float temp0[0x4] = _mm_cvtpd_ps(result)
result = _mm_shuffle_ps(zmm4, zmm4, 0x55)
zmm4 = _mm_shuffle_ps(zmm4, zmm4, 0xaa)
temp0[0] = temp0[0] * temp0[0]
result[0] = fconvert.d(result[0].d)
temp0[0] = temp0[0] * temp0[0]
result[0] = result[0] f- zmm3.q
temp0[0] = temp0[0] * 100f
uint128_t zmm13
zmm13.d = fconvert.s(result[0])
temp0[0] = temp0[0] + 3.5f
result = zx.o(0)
zmm13.d = zmm13.d f* zmm13.d
result[0] = fconvert.d(zmm4[0].d)
zmm13.d = zmm13.d f* zmm13.d
result[0] = result[0] f- zmm3.q
zmm13.d = zmm13.d f* 100f
float temp0_3[0x4] = _mm_cvtpd_ps(result)
zmm13.d = zmm13.d f+ 3.5f
result = zx.o(0)
temp0_3[0] = temp0_3[0] * temp0_3[0]
result[0].d = float.s(rdi)
temp0_3[0] = temp0_3[0] * temp0_3[0]
temp0_3[0] = temp0_3[0] * 100f
temp0_3[0] = temp0_3[0] + 3.5f
float zmm1[0x4] = 0x3f800000
zmm4 = 0x3f800000
zmm4[0].d = 1f f/ result[0].d
int32_t var_120 = zmm4[0].d

if (rdi.d != 0)
    zmm1[0] = 1f f/ arg6
    float (* rbp_1)[0x4] = arg1
    float zmm6[0x4] = 0xbeaaaaab
    uint128_t zmm7
    uint128_t var_38_1 = zmm7
    float zmm5[0x4] = zmm1
    zmm5[0] = zmm5[0] * 0.0599999987f
    float zmm9[0x4]
    float var_58_1[0x4] = zmm9
    double zmm10[0x2] = 0xbeaaaaab
    int128_t zmm11
    int128_t var_78_1 = zmm11
    uint128_t zmm15 = *arg4
    float var_124_1 = zmm1[0]
    float var_11c_1 = zmm5[0]
    zmm3.d = zmm15.d f* 0.25f
    uint128_t zmm8 = *arg5
    int32_t arg_10 = zmm3.d
    uint128_t var_c8_1 = zmm8
    zmm3 = _mm_shuffle_ps(zmm8, zmm8, 0x55)
    zmm6[0] = -0.333333343f f/ zmm3.d
    int32_t var_f8_1 = zmm3.d
    zmm3.d = _mm_shuffle_ps(zmm15, zmm15, 0x55).d f* 0.25f
    zmm10[0].d = -0.333333343f f/ zmm8.d
    int32_t var_e8_1 = zmm3.d
    zmm3 = _mm_shuffle_ps(zmm8, zmm8, 0xaa)
    zmm15.d = _mm_shuffle_ps(zmm15, zmm15, 0xaa).d f* 0.25f
    int32_t var_118_1 = zmm10[0].d
    arg4.d = zmm6[0]
    int32_t var_108_1 = arg7[3][0].d
    
    do
        zmm11.d = float.s(zx.q(i))
        zmm11.d = zmm11.d f* zmm4[0].d
        zmm11.d = zmm11.d f* data_143a2fd8c
        zmm11.d = zmm11.d f* zmm1[0]
        zmm5[0] = zmm5[0] f+ zmm11.d
        temp0[0] = temp0[0] * zmm5[0]
        zmm7.d = zmm13.d f* zmm5[0]
        zmm10[0].d = zmm10[0].d f* temp0[0]
        temp0_3[0] = temp0_3[0] * zmm5[0]
        double zmm0[0x2] = expf(zmm10[0].d)
        temp0[0] = temp0[0] f/ zmm8.d
        zmm0[0].d = zmm0[0].d f* 3f
        float zmm0_1 = expf((temp0 ^ data_142d3f780)[0].d)
        zmm0[0].d = zmm0[0].d f+ zmm0_1
        zmm0[0].d = zmm0[0].d f* arg_10
        zmm0[0].d = zmm0[0].d f* *arg7
        uint128_t zmm0_2 = expf(arg4.d f* zmm7.d)
        zmm7.d = zmm7.d f/ var_f8_1
        zmm8.d = zmm0_2.d f* 3f
        zmm8.d = zmm8.d f+ expf((zmm7 ^ data_142d3f780).d)
        zmm8.d = zmm8.d f* var_e8_1
        zmm8.d = zmm8.d f* arg7[1]
        float zmm0_4[0x4] = expf(-0.333333343f f/ zmm3.d * temp0_3[0])
        temp0_3[0] = temp0_3[0] f/ zmm3.d
        zmm9 = temp0_3 ^ data_142d3f780
        zmm0_4[0] = zmm0_4[0] * 3f
        float zmm0_5 = expf(zmm9[0])
        zmm11.d = zmm11.d f* arg3
        zmm0_4[0] = zmm0_4[0] + zmm0_5
        float var_114[0x4]
        var_114[0] = zmm0[0].d
        float temp0_8[0x4] = _mm_shuffle_ps(var_114, var_114, 0xe1)
        zmm11 ^= data_142d3f780
        temp0_8[0] = zmm8.d
        float temp0_9[0x4] = _mm_shuffle_ps(temp0_8, temp0_8, 0xc6)
        zmm0_4[0] = zmm0_4[0] f* zmm15.d
        zmm0_4[0] = zmm0_4[0] f* arg7[2]
        temp0_9[0] = zmm0_4[0]
        float temp0_10[0x4] = _mm_shuffle_ps(temp0_9, temp0_9, 0xc9)
        var_114 = temp0_10
        *rbp_1 = temp0_10
        result = expf(zmm11.d)
        zmm8 = var_c8_1
        i += 1
        zmm1 = var_124_1
        zmm4 = var_120
        zmm5 = var_11c_1
        zmm10 = var_118_1
        (*rbp_1)[3] = result[0].d
        rbp_1 = &rbp_1[1]
    while (i u< rdi.d)

if (data_143a2fd90 != 0)
    result = data_14399f5e0
    arg1[zx.q((rdi - 1).d)] = result

return result
