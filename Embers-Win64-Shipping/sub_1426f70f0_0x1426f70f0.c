// 函数: sub_1426f70f0
// 地址: 0x1426f70f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *(arg1 + 0x100)

if (rcx == 0)
    return 

char* rax = *(arg1 + 0xe8)

if (rax == 0 || *(rax + 0xb0) == 0)
    return 

int32_t rsi_1 = *(arg1 + 0x1e4)
int32_t rdi_2 = *(rcx + 0x30) - 1
uint128_t zmm11 = zx.o(0)
float var_150 = 0f
float var_148 = 0f
void* rcx_1 = *(rax + 0xb0)
float var_154_1 = 0.0500000007f
int64_t var_178
float var_170
float var_168
int32_t var_164
float var_160
int32_t* rax_1

if (rcx_1 == 0)
    var_170 = data_143b58090
    rax_1 = &var_178
    var_178 = data_143b58088
else
    float zmm1[0x4] = *(rcx_1 + 0x1d0)
    rax_1 = &var_168
    var_168 = zmm1[0]
    uint128_t zmm0 = _mm_shuffle_ps(zmm1, zmm1, 0x55)
    float temp0_2[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xaa)
    var_164 = zmm0.d
    temp0_2[0] = temp0_2[0] f- *(rcx_1 + 0x114)
    var_160 = temp0_2[0]

int32_t rax_3 = rax_1[2]
uint64_t var_140_1 = *rax_1
sub_141e912d0(arg1 + 0x148, &var_168)
uint128_t zmm10 = *(arg1 + 0x118)
int128_t zmm12 = 0x3f800000
int32_t var_144_1 = zmm10.d
char rax_7

if (rsi_1 s>= rdi_2)
    void* rcx_3 = *(arg1 + 0x100)
    uint128_t var_108
    int64_t* rax_5 = sub_141e912d0(sub_14265a8f0(rcx_3, &var_108, *(rcx_3 + 0x30) - 1), &var_178)
    var_168.q = *rax_5
    var_154_1 = (*(arg1 + 0x11c)).d
    var_160 = rax_5[1].d
    rax_7 = sub_140d3e110(arg1 + 0x138)

float zmm6_1[0x4]
uint128_t zmm7_1
float zmm8_1[0x4]

if (rsi_1 s< rdi_2 || rax_7 == 0 || ((*(*(arg1 + 0x100) + 0x98) u>> 2).b & 1) != 0)
    zmm6_1 = var_160
    zmm7_1 = var_164
    zmm8_1 = var_168
else
    int64_t* rcx_8 = *(arg1 + 0x140)
    uint128_t zmm0_1
    uint128_t zmm1_1
    
    if (rcx_8 == 0)
        void* rcx_13 = *(sub_140d3c6e0(arg1 + 0x138) + 0x130)
        float var_170_1
        
        if (rcx_13 == 0)
            float rax_14 = data_143dbb200
            var_178 = data_143dbb1f8.q
            var_170_1 = rax_14
        else
            zmm1_1 = *(rcx_13 + 0x1d0)
            var_178.d = zmm1_1.d
            zmm0_1 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x55)
            var_170_1 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0xaa).d
            var_178:4.d = zmm0_1.d
        
        zmm1_1 = zx.o(var_178)
        zmm0_1 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x55)
        zmm8_1 = zmm1_1
        var_170 = var_170_1
        zmm7_1 = zmm0_1
        zmm6_1 = var_170
        int32_t var_164_2 = zmm0_1.d
        var_168 = zmm1_1.d
        float var_160_2 = zmm6_1[0]
        var_178 = zmm1_1.q
    else
        (*(*rcx_8 + 0x38))(rcx_8, *(arg1 + 0xa0), arg1 + 0x18c, &var_178, &var_150, &var_148)
        void* rcx_10 = *(sub_140d3c6e0(arg1 + 0x138) + 0x130)
        
        if (rcx_10 == 0)
            zmm0_1 = data_142d3f660
        else
            zmm0_1 = *(rcx_10 + 0x1c0)
        
        int64_t* rcx_11 = *(arg1 + 0x140)
        float var_128[0x4]
        uint128_t* rax_12 = (*(*rcx_11 + 0x18))(rcx_11, &var_128)
        uint128_t zmm4_1 = zmm0_1
        int32_t var_cc_1 = 0x3f800000
        zmm1_1.d = zmm0_1.d f* 2f
        zmm8_1 = zmm0_1
        int32_t var_fc_1 = 0
        zmm7_1 = zmm0_1
        int32_t var_ec_1 = 0
        int32_t var_dc_1 = 0
        float temp0_3[0x4] = _mm_shuffle_ps(zmm0_1, zmm0_1, 0xaa)
        uint128_t zmm9_1 = _mm_shuffle_ps(zmm0_1, zmm0_1, 0x55)
        temp0_3[0] = temp0_3[0] * 2f
        float zmm3_1 = zmm9_1.d * 2f
        float zmm5_1[0x4] = zmm9_1
        zmm10 = _mm_shuffle_ps(zmm0_1, zmm0_1, 0xff)
        zmm8_1[0] = zmm8_1[0] f* zmm1_1.d
        zmm5_1[0] = zmm5_1[0] * zmm3_1
        temp0_3[0] = temp0_3[0] * temp0_3[0]
        uint128_t zmm14
        zmm14.d = zmm10.d f* zmm1_1.d
        zmm1_1 = zmm10
        zmm10.d = zmm10.d f* temp0_3[0]
        zmm0_1.d = temp0_3.d f+ zmm5_1[0]
        zmm7_1.d = zmm7_1.d f* temp0_3[0]
        zmm5_1[0] = zmm5_1[0] + zmm8_1[0]
        zmm1_1.d = zmm1_1.d f* zmm3_1
        temp0_3[0] = temp0_3[0] + zmm8_1[0]
        zmm4_1.d = zmm4_1.d f* zmm3_1
        zmm3_1 = *(rax_12 + 8)
        int128_t zmm15
        zmm15.d = 1f f- zmm0_1.d
        zmm0_1 = zmm7_1.d
        zmm11.d = zmm1_1.d f+ zmm7_1.d
        zmm7_1 = *rax_12
        zmm0_1.d = zmm0_1.d f- zmm1_1.d
        zmm1_1 = var_178:4.d
        zmm12.d = 1f - temp0_3[0]
        zmm6_1 = 0x3f800000
        zmm6_1[0] = 1f - zmm5_1[0]
        zmm9_1.d = zmm9_1.d f* temp0_3[0]
        float zmm2_1[0x4] = var_170
        uint128_t zmm13
        zmm13.d = zmm4_1.d f- zmm10.d
        int32_t arg_8 = zmm0_1.d
        zmm10.d = zmm10.d f+ zmm4_1.d
        zmm4_1 = *(rax_12 + 4)
        int32_t var_11c_1 = 0x3f800000
        zmm5_1 = var_128
        zmm5_1[0] = var_178.d.d
        uint128_t var_118_2 = zmm10
        float temp0_6[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xe1)
        zmm10.d = zmm9_1.d f- zmm14.d
        temp0_6[0] = zmm1_1.d
        var_178 = 0
        float temp0_7[0x4] = _mm_shuffle_ps(temp0_6, temp0_6, 0xc6)
        zmm14.d = zmm14.d f+ zmm9_1.d
        zmm0_1.d = zmm7_1.d
        var_170 = 0f
        temp0_7[0] = zmm2_1[0]
        _mm_shuffle_ps(zmm0_1, zmm0_1, 0xe1)
        float temp0_9[0x4] = _mm_shuffle_ps(temp0_7, temp0_7, 0xc9)
        zmm0_1.d = zmm4_1.d
        float temp0_10[0x4] = _mm_shuffle_ps(temp0_9, temp0_9, 0xff)
        _mm_shuffle_ps(zmm0_1, zmm0_1, 0xc6)
        zmm0_1.d = zmm3_1
        zmm1_1 = _mm_shuffle_ps(temp0_9, temp0_9, 0xaa)
        float temp0_14[0x4] = _mm_mul_ps(temp0_10, _mm_shuffle_ps(zmm0_1, zmm0_1, 0xc9))
        zmm0_1.d = zmm11.d
        float temp0_15[0x4] = _mm_shuffle_ps(temp0_9, temp0_9, 0x55)
        _mm_shuffle_ps(zmm0_1, zmm0_1, 0xe1)
        zmm11 = zx.o(0)
        zmm0_1.d = zmm10.d
        float temp0_17[0x4] = _mm_shuffle_ps(temp0_9, temp0_9, 0)
        zmm10 = var_144_1
        _mm_shuffle_ps(zmm0_1, zmm0_1, 0xc6)
        zmm0_1.d = zmm6_1[0]
        zmm1_1 = _mm_mul_ps(zmm1_1, _mm_shuffle_ps(zmm0_1, zmm0_1, 0xc9))
        zmm0_1.d = zmm13.d
        _mm_shuffle_ps(zmm0_1, zmm0_1, 0xe1)
        zmm0_1.d = zmm12.d
        float temp0_22[0x4] = _mm_add_ps(temp0_14, zmm1_1)
        zmm12 = 0x3f800000
        _mm_shuffle_ps(zmm0_1, zmm0_1, 0xc6)
        zmm0_1.d = zmm14.d
        float temp0_25[0x4] = _mm_mul_ps(temp0_15, _mm_shuffle_ps(zmm0_1, zmm0_1, 0xc9))
        zmm0_1.d = zmm15.d
        _mm_shuffle_ps(zmm0_1, zmm0_1, 0xe1)
        zmm0_1.d = var_118_2.d
        _mm_shuffle_ps(zmm0_1, zmm0_1, 0xc6)
        zmm0_1.d = arg_8.d
        zmm8_1 = _mm_add_ps(temp0_22, 
            _mm_add_ps(temp0_25, _mm_mul_ps(temp0_17, _mm_shuffle_ps(zmm0_1, zmm0_1, 0xc9))))
        var_168 = zmm8_1[0]
        zmm7_1 = _mm_shuffle_ps(zmm8_1, zmm8_1, 0x55)
        zmm6_1 = _mm_shuffle_ps(zmm8_1, zmm8_1, 0xaa)
        int32_t var_164_1 = zmm7_1.d
        float var_160_1 = zmm6_1[0]

zmm8_1[0] = zmm8_1[0] f- var_140_1.d
zmm7_1.d = zmm7_1.d f- var_140_1:4.d
zmm6_1[0] = zmm6_1[0] f- rax_3
uint32_t zmm6_2[0x4]
float zmm7_2
float zmm8_2
zmm6_2, zmm7_2, zmm8_2 = sub_1426fbf30(arg1, &var_178)
float zmm9_2 = zmm7_2 * zmm7_2 + zmm8_2 * zmm8_2
float zmm1_2 = zmm6_2[0] f* zmm6_2[0] + zmm9_2
float zmm3_2

if (not(zmm1_2 f!= zmm12.d))
    zmm3_2 = zmm6_2[0]
else if (zmm1_2 >= 9.99999994e-09f)
    float temp0_37 = _mm_rsqrt_ss(zmm1_2, zmm1_2)
    zmm3_2 = zmm1_2 * 0.5f
    float zmm5_2 = temp0_37 + temp0_37 * (0.5f - zmm3_2 * temp0_37 * temp0_37)
    zmm5_2 = zmm5_2 + zmm5_2 * (0.5f - zmm3_2 * zmm5_2 * zmm5_2)
    zmm8_2 = zmm8_2 * zmm5_2
    zmm7_2 = zmm7_2 * zmm5_2
    zmm3_2 = zmm6_2[0] * zmm5_2
else
    zmm8_2 = data_143dbb1f8
    zmm7_2 = data_143dbb1fc
    zmm3_2 = data_143dbb200

float zmm0_2 = var_178:4.d
float zmm2_2 = var_178.d * zmm8_2
float var_158 = 0f
float var_14c = 0f
zmm2_2 = zmm2_2 + zmm0_2 * zmm7_2 + var_170 * zmm3_2
*arg2 = zmm2_2
zmm2_2 f- zmm11.d
*arg5 = zmm2_2 f< zmm11.d
int64_t* rcx_16 = *(*(arg1 + 0xe8) + 0xa0)
(*(*rcx_16 + 0x560))(rcx_16, &var_158, &var_14c)
uint32_t temp0_38[0x4] = __andps_xmmxud_memxud(zmm6_2, data_142d3f770)
zmm0_2 = var_158 * var_154_1 + var_150
float temp0_39 = _mm_sqrt_ss(0, zmm9_2)
float temp0_40 = _mm_max_ss(zmm0_2, zmm10.d)
*arg3 = temp0_39
zmm0_2 = var_14c
*arg6 = temp0_39 > temp0_40
*arg4 = temp0_38[0]
*arg7 = temp0_38[0] f> zmm0_2 f* *(arg1 + 0x120) + var_148
