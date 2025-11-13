// 函数: sub_1421f39e0
// 地址: 0x1421f39e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r10_1 = sx.q(*(arg1 + 0x114)) + arg2
bool cond:0 = *(arg1 + 0xd0) == 0
int32_t r14 = data_143dbb200
uint128_t zmm11 = zx.o(data_143dbb1f8.q)
uint64_t var_c8 = *r10_1
int32_t var_c0 = r10_1[1].d
uint64_t var_d8 = r10_1[3]
int32_t var_d0 = r10_1[4].d
uint64_t var_e8 = zmm11.q
int32_t var_e0 = r14
uint64_t var_108
int32_t var_f8
float zmm1[0x4]
float zmm3[0x4]

if (not(cond:0))
    bool cond:1_1 = *(arg1 + 0xe0) == 0
    float rax_2 = *(arg4 + 0x614)
    float zmm6[0x4]
    float var_28_1[0x4] = zmm6
    float zmm8[0x4]
    float var_48_1[0x4] = zmm8
    var_108 = *(arg4 + 0x60c)
    uint128_t zmm0
    float zmm4[0x4]
    float zmm7[0x4]
    float zmm9[0x4]
    float zmm10[0x4]
    
    if (cond:1_1)
        zmm10 = rax_2
        zmm9 = var_108:4.d
        zmm7 = var_108.d
    else
        uint32_t var_b8[0x4]
        zmm11 = sub_140631b10(arg3 + 0x80, &var_b8)
        zmm1 = var_108:4.d
        zmm4 = var_108.d
        float temp0_1[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xe1)
        temp0_1[0] = zmm1[0]
        var_f8.q = 0
        float temp0_2[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0xc6)
        temp0_2[0] = rax_2
        int32_t var_f0_1 = 0
        float temp0_3[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0x27)
        temp0_3[0] = 0x3f800000
        float temp0_4[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0x39)
        var_f8.o = temp0_4
        float var_88[0x4]
        float temp0_6[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_4, temp0_4, 0xff), var_88)
        float var_a8[0x4]
        float temp0_8[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_4, temp0_4, 0x55), var_a8)
        float var_98[0x4]
        zmm0 = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_4, temp0_4, 0xaa), var_98)
        float temp0_12[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_4, temp0_4, 0), var_b8)
        zmm7 = _mm_add_ps(_mm_add_ps(temp0_6, zmm0), _mm_add_ps(temp0_8, temp0_12))
        zmm9 = _mm_shuffle_ps(zmm7, zmm7, 0x55)
        zmm10 = _mm_shuffle_ps(zmm7, zmm7, 0xaa)
    
    zmm7[0] = zmm7[0] f- *(arg2 + 0x10)
    zmm9[0] = zmm9[0] f- *(arg2 + 0x14)
    zmm10[0] = zmm10[0] f- *(arg2 + 0x18)
    zmm0.d = zmm7.d f* zmm7[0]
    zmm6 = *(sx.q(*(arg1 + 0xd0)) + arg2 + 4)
    zmm9[0] = zmm9[0] * zmm9[0]
    zmm10[0] = zmm10[0] * zmm10[0]
    zmm9[0] = zmm9[0] f+ zmm0.d
    zmm9[0] = zmm9[0] + zmm10[0]
    
    if (not(zmm9[0] <= 9.99999994e-09f))
        zmm4 = 0x3f000000
        zmm3 = zx.o(0)
        zmm3[0] = zmm9.d
        float temp0_18[0x4] = _mm_rsqrt_ss(zmm3[0], zmm3[0])
        zmm3[0] = zmm3[0] * 0.5f
        zmm0.d = temp0_18.d f* temp0_18[0]
        zmm3[0] = zmm3[0] f* zmm0.d
        zmm0.d = temp0_18.d f* (0.5f - zmm3[0])
        temp0_18[0] = temp0_18[0] f+ zmm0.d
        temp0_18[0] = temp0_18[0] * temp0_18[0]
        zmm3[0] = zmm3[0] * temp0_18[0]
        zmm4[0] = 0.5f - zmm3[0]
        zmm0.d = temp0_18.d f* zmm4[0]
        temp0_18[0] = temp0_18[0] f+ zmm0.d
        zmm7[0] = zmm7[0] * temp0_18[0]
        zmm9[0] = zmm9[0] * temp0_18[0]
        zmm10[0] = zmm10[0] * temp0_18[0]
    
    float zmm2 = zmm6[0]
    zmm6[0] = zmm6[0] * zmm7[0]
    zmm6[0] = zmm6[0] * zmm6[0]
    zmm2 = zmm2 * zmm9[0]
    bool cond:2_1 = zmm9[0] > zmm6[0]
    zmm6[0] = zmm6[0] * zmm10[0]
    
    if (not(cond:2_1))
        zmm6[0] = zmm6[0] * 1048576f
        zmm2 = zmm2 * 1048576f
        zmm6[0] = zmm6[0] * 1048576f
    
    var_108:4.d = zmm2
    var_108.d = zmm6[0]
    float var_100_2 = zmm6[0]
    var_e8 = var_108
    float var_e0_1 = var_100_2

int64_t rax_5 = sx.q(*(arg1 + 0xc0))
var_108 = zmm11.q
int32_t var_100_3 = r14

if (rax_5.d != 0)
    int32_t rax_6 = *(rax_5 + arg2 + 0x14)
    var_108 = *(rax_5 + arg2 + 0xc)
    int32_t var_100_4 = rax_6

zmm1 = *(arg4 + 0x358)
zmm3 = *(arg2 + 0x2c)
var_f8 = (*(arg4 + 0x348)).d
float var_f4 = zmm1[0]
int32_t var_f0_2 = (*(arg4 + 0x368)).d
return sub_1421dc9c0(arg1, arg3 + 0x80, arg2 + 0x10, zmm3, arg2 + 0x30, arg2 + 0x50, &var_c8, 
    &var_d8, &var_e8, &var_108, arg4 + 0x60c, &var_f8, arg5)
