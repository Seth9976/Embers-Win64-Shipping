// 函数: sub_1421cffe0
// 地址: 0x1421cffe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = arg10 == 0
uint128_t var_18 = arg5
float var_28[0x4] = arg6
float var_38[0x4] = arg7
float zmm10[0x4]
float var_58[0x4] = zmm10
int32_t var_80 = *(arg4 + 0x18)
uint64_t var_88 = *(arg4 + 0x10)
uint64_t var_98
void var_68

if (cond:0)
    sub_141f49c70(arg2, &var_88, 0, 0, arg5, arg6, arg7, 0)
else
    uint128_t zmm0 = zx.o(arg2[0x25])
    bool cond:1_1 = zmm0.d f!= arg2[0x36].d
    int32_t rax_1 = arg2[0x26].d
    var_98 = zmm0.q
    
    if (cond:1_1 || var_98:4.d.d f!= *(arg2 + 0x1b4) || not(rax_1.d f== arg2[0x37].d))
        uint128_t zmm4 = zx.o(arg2[0x25])
        arg6 = data_143f4eb40
        uint32_t zmm5[0x4] = data_143f4dee0
        uint128_t zmm2 = _mm_unpacklo_ps(_mm_shuffle_ps(zmm4, zmm4, 0x55), 0)
        arg5 = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm4, rax_1[0].q), zmm2.q)
        zmm2 = data_143f4eb50
        var_98 = zmm4.q
        zmm4 = _mm_div_ps(arg5, arg6)
        zmm0 = _mm_and_ps(zmm4, zmm5)
        uint32_t temp0_7[0x4] = _mm_and_ps(zmm5, arg6)
        zmm2 = _mm_cmpeq_ps(zmm2, zmm0, 2)
        float temp0_10[0x4] = _mm_cvtepi32_ps(_mm_cvttps_epi32(zmm4))
        float temp0_12[0x4] = _mm_mul_ps(_mm_and_ps(temp0_10 ^ zmm4, zmm2) ^ temp0_10, arg6)
        float temp0_16[0x4] = _mm_max_ps(_mm_sub_ps(zx.o(0), temp0_7), 
            _mm_min_ps(_mm_sub_ps(arg5, temp0_12), temp0_7))
        float temp0_17[0x4] = _mm_cmpeq_ps(zx.o(0), temp0_16, 2)
        zmm2 = _mm_add_ps(temp0_16, arg6)
        float zmm3[0x4] = _mm_and_ps(temp0_17, zmm2 ^ temp0_16) ^ zmm2
        zmm0 = _mm_cmpeq_ps(data_143f4eb30, zmm3, 1)
        zmm2 = _mm_and_ps(_mm_sub_ps(zmm3, arg6) ^ zmm3, zmm0) ^ zmm3
        int32_t var_90_3 = _mm_shuffle_ps(zmm2, zmm2, 0xaa).d
        arg2[0x36] = (_mm_unpacklo_ps(zmm2, _mm_shuffle_ps(zmm2, zmm2, 0x55)[0].q)).q
        arg2[0x37].d = var_90_3
        float (* rax_3)[0x4]
        rax_3, arg6, arg7 = sub_140ade170(&arg2[0x36], &var_68)
        *(arg2 + 0x1a0) = *rax_3
    
    var_98.o = *(arg2 + 0x1a0)
    sub_141f48240(arg2, &var_88, &var_98, 0, arg6, arg7, arg8, zmm10, 0, 0)

float zmm1_1[0x4] = *(arg4 + 0x6c)
zmm1_1[0] = zmm1_1[0] f* *(arg4 + 0x68)
zmm1_1[0] = zmm1_1[0] f* *(arg4 + 0x64)
zmm1_1[0] = zmm1_1[0] f* *(arg4 + 0x60)
zmm1_1[0] = zmm1_1[0] f* arg3[2]
zmm1_1[0] = zmm1_1[0] f* arg3[1]
zmm1_1[0] = zmm1_1[0] f* *arg3
var_98:4.d = zmm1_1[0]
float var_90_4 = zmm1_1[0]
var_98.d = zmm1_1[0]
float var_78
sub_140acc990(&var_78, &var_98)
float zmm2_1[0x4]
float zmm3_1[0x4]
float zmm4_1[0x4]
int32_t var_74
int32_t var_70

if (*(arg1 + 0x30) == 0)
    zmm2_1 = var_70
    zmm4_1 = var_74
    zmm3_1 = var_78
else
    TEB* gsbase
    
    if (data_143f4fa38
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_143f4fa38)
        
        if (data_143f4fa38 == 0xffffffff)
            data_143f4fa34 = sub_141f1ba90(1, 0, 0xbf800000[0]) * 9.99999975e-05f
            _Init_thread_footer(&data_143f4fa38)
    
    zmm1_1 = data_143f4fa34
    zmm3_1 = var_78
    zmm4_1 = var_74
    zmm2_1 = var_70
    int32_t var_6c
    float zmm0_1[0x4] = var_6c
    zmm3_1[0] = zmm3_1[0] * zmm1_1[0]
    zmm4_1[0] = zmm4_1[0] * zmm1_1[0]
    zmm2_1[0] = zmm2_1[0] * zmm1_1[0]
    zmm0_1[0] = zmm0_1[0] * zmm1_1[0]
    var_78 = zmm3_1[0]
    float var_74_1 = zmm4_1[0]
    float var_70_1 = zmm2_1[0]
    float var_6c_1 = zmm0_1[0]
float zmm7 = zmm3_1[0]
float zmm8 = zmm4_1[0]
zmm4_1[0] = zmm4_1[0] * zmm8
float zmm9 = zmm2_1[0]
zmm3_1[0] = zmm3_1[0] * zmm7
zmm2_1[0] = zmm2_1[0] * zmm9
zmm4_1[0] = zmm4_1[0] + zmm3_1[0]
zmm4_1[0] = zmm4_1[0] + zmm2_1[0]
bool cond:2 = zmm4_1[0] <= 9.99999994e-09f
float temp0_26[0x4] = _mm_sqrt_ss(zx.o(0)[0], zmm4_1[0])

if (not(cond:2))
    float temp0_27[0x4] = _mm_rsqrt_ss(zmm4_1[0], zmm4_1[0])
    zmm2_1 = 0x3f000000
    zmm4_1[0] = zmm4_1[0] * 0.5f
    temp0_27[0] = temp0_27[0] * temp0_27[0]
    zmm4_1[0] = zmm4_1[0] * temp0_27[0]
    zmm2_1[0] = 0.5f - zmm4_1[0]
    temp0_27[0] = temp0_27[0] * zmm2_1[0]
    temp0_27[0] = temp0_27[0] + temp0_27[0]
    zmm2_1 = temp0_27
    temp0_27[0] = temp0_27[0] * temp0_27[0]
    zmm4_1[0] = zmm4_1[0] * temp0_27[0]
    zmm2_1[0] = zmm2_1[0] * (0.5f - zmm4_1[0])
    zmm2_1[0] = zmm2_1[0] + temp0_27[0]
    zmm3_1 = zmm2_1
    zmm4_1 = zmm2_1
    zmm3_1[0] = zmm3_1[0] * zmm7
    zmm4_1[0] = zmm4_1[0] * zmm8
    zmm2_1[0] = zmm2_1[0] * zmm9

float zmm6[0x4] = *(arg4 + 0x50)
zmm3_1[0] = zmm3_1[0] * 255f
zmm6[0] = zmm6[0] f* *arg9
float temp0_28[0x4] = _mm_min_ss(zmm3_1[0], 0x437f0000)
zmm4_1[0] = zmm4_1[0] * 255f
zmm6 = __andps_xmmxud_memxud(zmm6, data_142d3f770)
zmm6[0] = zmm6[0] f* arg3[6]
float temp0_30[0x4] = _mm_min_ss(zmm4_1[0], 0x437f0000)
zmm2_1[0] = zmm2_1[0] * 255f
char rax_7 = (int.d(temp0_28[0])).b
float temp0_31[0x4] = _mm_min_ss(zmm2_1[0], 0x437f0000)
char arg_3a = rax_7
char arg_39 = (int.d(temp0_30[0])).b
arg10 = (int.d(temp0_31[0])).b
sub_141f258a0(arg2, temp0_26)
var_88.o = *sub_140acc920(&var_68, &arg10)
int128_t zmm6_1
int512_t zmm7_1
int512_t zmm8_1
int512_t zmm9_1
zmm6_1, zmm7_1, zmm8_1, zmm9_1 = sub_141f25c00(arg2, &var_88, 1)
sub_141f240c0(arg2, zmm6_1)
int64_t result
int512_t zmm6_2
result, zmm6_2 = sub_141f25c90(arg2, arg3[7])

if (arg11 != 0 && arg12 != 0)
    (*(*arg11 + 0x158))(arg11, arg2)
    result = (*(*arg11 + 0x160))(arg11, arg2)

zmm6_2.o = var_18
zmm7_1.o = var_28
zmm8_1.o = var_38
zmm9_1.o = arg8
return result
