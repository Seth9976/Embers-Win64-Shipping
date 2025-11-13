// 函数: sub_1421f3670
// 地址: 0x1421f3670
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r12_1 = sx.q(*(arg1 + 0x114)) + arg2
uint128_t zmm0 = zx.o(data_143dbb1f8.q)
int64_t* rbx_1 = sx.q(*(arg1 + 0x118)) + arg2
bool cond:0 = *(arg1 + 0xd0) == 0
int32_t rax = data_143dbb200
uint64_t var_108 = zmm0.q
int32_t var_100 = rax
uint64_t var_118
float zmm1[0x4]

if (not(cond:0))
    bool cond:1_1 = *(arg1 + 0xe0) == 0
    float rax_1 = *(arg4 + 0x4d24)
    int128_t zmm9
    int128_t var_68_1 = zmm9
    float zmm10[0x4]
    float var_78_1[0x4] = zmm10
    var_118 = *(arg4 + 0x4d1c)
    float zmm4[0x4]
    float zmm6[0x4]
    float zmm7[0x4]
    float zmm8[0x4]
    
    if (cond:1_1)
        zmm8 = rax_1
        zmm7 = var_118:4.d
        zmm6 = var_118.d
    else
        uint32_t var_b8[0x4]
        sub_140631b10(arg3 + 0x80, &var_b8)
        zmm1 = var_118:4.d
        zmm4 = var_118.d
        arg5 = 0x3f800000
        float temp0_1[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xe1)
        temp0_1[0] = zmm1[0]
        var_118 = 0
        float temp0_2[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0xc6)
        temp0_2[0] = rax_1
        int32_t var_110_2 = 0
        float temp0_3[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0x27)
        temp0_3[0] = 0x3f800000
        float temp0_4[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0x39)
        var_118.o = temp0_4
        float var_88[0x4]
        float temp0_6[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_4, temp0_4, 0xff), var_88)
        float var_a8[0x4]
        float temp0_8[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_4, temp0_4, 0x55), var_a8)
        float var_98[0x4]
        zmm0 = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_4, temp0_4, 0xaa), var_98)
        float temp0_12[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_4, temp0_4, 0), var_b8)
        zmm6 = _mm_add_ps(_mm_add_ps(temp0_6, zmm0), _mm_add_ps(temp0_8, temp0_12))
        zmm7 = _mm_shuffle_ps(zmm6, zmm6, 0x55)
        zmm8 = _mm_shuffle_ps(zmm6, zmm6, 0xaa)
    
    zmm6[0] = zmm6[0] f- *arg2
    zmm7[0] = zmm7[0] f- arg2[1]
    zmm8[0] = zmm8[0] f- arg2[2]
    zmm9 = *(rbx_1 + 0x34)
    zmm0.d = zmm6.d f* zmm6[0]
    zmm7[0] = zmm7[0] * zmm7[0]
    zmm8[0] = zmm8[0] * zmm8[0]
    zmm7[0] = zmm7[0] f+ zmm0.d
    zmm7[0] = zmm7[0] + zmm8[0]
    
    if (not(zmm7[0] <= 9.99999994e-09f))
        zmm4 = 0x3f000000
        arg5 = zx.o(0)
        arg5[0] = zmm7.d
        float temp0_18[0x4] = _mm_rsqrt_ss(arg5[0], arg5[0])
        arg5[0] = arg5[0] * 0.5f
        zmm0.d = temp0_18.d f* temp0_18[0]
        arg5[0] = arg5[0] f* zmm0.d
        zmm0.d = temp0_18.d f* (0.5f - arg5[0])
        temp0_18[0] = temp0_18[0] f+ zmm0.d
        temp0_18[0] = temp0_18[0] * temp0_18[0]
        arg5[0] = arg5[0] * temp0_18[0]
        zmm4[0] = 0.5f - arg5[0]
        zmm0.d = temp0_18.d f* zmm4[0]
        temp0_18[0] = temp0_18[0] f+ zmm0.d
        zmm6[0] = zmm6[0] * temp0_18[0]
        zmm7[0] = zmm7[0] * temp0_18[0]
        zmm8[0] = zmm8[0] * temp0_18[0]
    
    zmm6[0] = zmm6[0] f* zmm9.d
    zmm7[0] = zmm7[0] f* zmm9.d
    zmm8[0] = zmm8[0] f* zmm9.d
    zmm9.d = zmm9.d f* zmm9.d
    
    if (not(zmm7[0] f> zmm9.d))
        zmm6[0] = zmm6[0] * 1048576f
        zmm7[0] = zmm7[0] * 1048576f
        zmm8[0] = zmm8[0] * 1048576f
    
    var_118:4.d = zmm7[0]
    var_118.d = zmm6[0]
    zmm0 = zx.o(var_118)
    float var_110_3 = zmm8[0]
    var_108 = zmm0.q
    float var_100_1 = var_110_3

uint128_t var_f8

if ((*(**(arg3 + 0x108) + 0x48))(zmm0, *(arg3 + 0x110), &var_f8, arg5) == 0)
    zmm1 = *(arg3 + 0x90)
    var_f8 = *(arg3 + 0x80)
    float var_e8_1[0x4] = zmm1
    uint128_t var_d8_1 = *(arg3 + 0xa0)
    float var_c8_1[0x4] = *(arg3 + 0xb0)

var_118.d = (*(arg4 + 0x4a58)).d
var_118:4.d = (*(arg4 + 0x4a68))[0]
int32_t var_110_4 = (*(arg4 + 0x4a78)).d
return sub_1421dc9c0(arg1, &var_f8, arg2, rbx_1[6].d, rbx_1, rbx_1 + 0xc, r12_1, &rbx_1[3], 
    &var_108, rbx_1 + 0x24, arg4 + 0x4d1c, &var_118, arg6)
