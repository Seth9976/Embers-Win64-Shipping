// 函数: sub_14120f9a0
// 地址: 0x14120f9a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_2e8
int64_t rax_1 = __security_cookie ^ &var_2e8
float zmm6[0x4] = 0x3e860a92
void* rbx = nullptr
int32_t r14 = 0xd
void* var_e8 = nullptr
float var_2b8 = 0f
int32_t rdi = 0
int32_t var_dc = 0xd
int32_t rsi = 0
void var_188
uint128_t zmm1

while (true)
    zmm1.d = _mm_cvtepi32_ps(zx.o(rsi)).d f* zmm6[0]
    uint128_t zmm0
    zmm0, zmm6 = __libm_sse2_sincosf_(zmm1)
    int32_t var_2b4_1 = zmm0.d
    int32_t var_2b0_1 = _mm_shuffle_ps(zmm0, zmm0, 1).d
    
    if (rdi + 1 s> r14)
        sub_141238820(&var_188, rdi)
        rbx = var_e8
    
    void* rdx_2 = &var_188
    
    if (rbx != 0)
        rdx_2 = rbx
    
    rsi += 1
    int64_t rcx_1 = sx.q(rdi) * 3
    *(rdx_2 + (rcx_1 << 2)) = var_2b8.q
    *(rdx_2 + (rcx_1 << 2) + 8) = var_2b0_1
    
    if (rsi s>= 0xd)
        break
    
    r14 = var_dc
    rdi += 1
    rbx = var_e8

void* var_2a0
__builtin_memset(&var_2a0, 0, 0x11)
void** const var_2a8 = &data_142f3c2d8
sub_141238e00(&var_2a0, 0xf7)
float zmm11[0x4] = data_142dc1880
int32_t i = 0
float zmm10[0x4] = data_142dc1870
float zmm13[0x4] = data_142dc1860
float zmm12[0x4] = data_142dc1850
float temp0_3[0x4] = _mm_shuffle_ps(zmm11, zmm11, 0xaa)
float zmm4[0x4] = _mm_shuffle_ps(zmm10, zmm10, 0xaa)
float temp0_5[0x4] = _mm_shuffle_ps(zmm11, zmm11, 0x55)
float zmm5[0x4] = _mm_shuffle_ps(zmm10, zmm10, 0x55)
zmm6 = _mm_shuffle_ps(zmm13, zmm13, 0x55)
float zmm9[0x4] = _mm_shuffle_ps(zmm11, zmm11, 0xff)
float temp0_9[0x4] = _mm_shuffle_ps(zmm12, zmm12, 0x55)
float temp0_10[0x4] = _mm_shuffle_ps(zmm10, zmm10, 0xff)
float temp0_11[0x4] = _mm_shuffle_ps(zmm12, zmm12, 0)
float var_208[0x4] = zmm4
float var_1f8[0x4] = zmm5
float temp0_12[0x4] = _mm_shuffle_ps(zmm10, zmm10, 0)
float var_1e8[0x4] = zmm6
float temp0_13[0x4] = _mm_shuffle_ps(zmm13, zmm13, 0)
float var_1d8[0x4] = zmm9
float temp0_14[0x4] = _mm_shuffle_ps(zmm11, zmm11, 0)
int32_t var_27c = 0x3f800000
int64_t var_298_1
float zmm0_1[0x4]

do
    int32_t var_26c_1 = 0
    zmm1.d = float.s(i)
    zmm1.d = zmm1.d f* 20f
    float temp0_17[0x4] = __mulps_xmmps_memps(
        _mm_unpacklo_ps(zx.o(0), _mm_unpacklo_ps(zmm1, zx.o(0)[0].q)[0].q), data_143e83890)
    float zmm2_1[0x4] = data_143e83830
    float temp0_22[0x4] = _mm_sub_ps(temp0_17, 
        __mulps_xmmps_memps(
            _mm_cvtepi32_ps(_mm_cvtps_epi32(__mulps_xmmps_memps(temp0_17, data_143e83880))), 
            data_143e83870))
    float temp0_24[0x4] = _mm_cmpeq_ps(zmm2_1, __andps_xmmxud_memxud(temp0_22, data_143e83840), 1)
    zmm0_1 = _mm_and_ps(
        _mm_sub_ps(
            __orps_xmmxud_memxud(__andps_xmmxud_memxud(temp0_22, data_143e83860), data_143e83850), 
            temp0_22) ^ temp0_22, 
        temp0_24) ^ temp0_22
    zmm1 = _mm_mul_ps(zmm0_1, zmm0_1)
    float temp0_30[0x4] = _mm_mul_ps(zmm6, zmm1)
    float temp0_31[0x4] = _mm_mul_ps(temp0_9, zmm1)
    float temp0_32[0x4] = _mm_add_ps(temp0_30, temp0_13)
    float temp0_33[0x4] = _mm_add_ps(temp0_31, temp0_11)
    float temp0_34[0x4] = _mm_mul_ps(temp0_32, zmm1)
    float temp0_35[0x4] = _mm_mul_ps(temp0_33, zmm1)
    float temp0_36[0x4] = _mm_add_ps(temp0_34, zmm9)
    float temp0_37[0x4] = _mm_add_ps(temp0_35, temp0_10)
    float temp0_38[0x4] = _mm_mul_ps(temp0_36, zmm1)
    float temp0_39[0x4] = _mm_mul_ps(temp0_37, zmm1)
    float temp0_40[0x4] = __addps_xmmps_memps(temp0_38, temp0_3)
    float temp0_41[0x4] = _mm_add_ps(temp0_39, zmm4)
    float temp0_42[0x4] = _mm_mul_ps(temp0_40, zmm1)
    float temp0_43[0x4] = _mm_mul_ps(temp0_41, zmm1)
    float temp0_44[0x4] = __addps_xmmps_memps(temp0_42, temp0_5)
    float temp0_45[0x4] = _mm_add_ps(temp0_43, zmm5)
    float temp0_46[0x4] = _mm_mul_ps(temp0_44, zmm1)
    float temp0_47[0x4] = _mm_mul_ps(temp0_45, zmm1)
    zmm1 = data_143e83810 ^ data_143e83820
    float temp0_48[0x4] = _mm_add_ps(temp0_46, temp0_14)
    zmm1 = _mm_and_ps(zmm1, temp0_24) ^ data_143e83820
    float temp0_50[0x4] = _mm_add_ps(temp0_47, temp0_12)
    float temp0_51[0x4] = _mm_mul_ps(temp0_48, zmm1)
    float temp0_52[0x4] = _mm_mul_ps(temp0_50, zmm0_1)
    float temp0_53[0x4] = _mm_shuffle_ps(temp0_51, temp0_51, 0x55)
    float temp0_54[0x4] = _mm_shuffle_ps(temp0_51, temp0_51, 0xaa)
    temp0_53[0] = temp0_53[0] * temp0_51[0]
    float temp0_55[0x4] = _mm_shuffle_ps(temp0_52, temp0_52, 0xaa)
    float temp0_56[0x4] = _mm_shuffle_ps(temp0_52, temp0_52, 0x55)
    zmm1.d = temp0_51.d f* temp0_56[0]
    temp0_55[0] = temp0_55[0] * temp0_52[0]
    float var_278_1 = temp0_53[0]
    int32_t var_274_1 = zmm1.d
    temp0_54[0] = temp0_54[0] * temp0_56[0]
    zmm1.d = temp0_55.d f* temp0_53[0]
    float var_270_1 = temp0_52[0]
    temp0_55[0] = temp0_55[0] * temp0_56[0]
    zmm1.d = zmm1.d f- temp0_54[0]
    int32_t var_268_1 = zmm1.d
    temp0_54[0] = temp0_54[0] * temp0_53[0]
    int64_t j = 0
    int32_t var_25c_1 = 0
    zmm1.d = temp0_51.d f* temp0_55[0]
    int32_t var_24c_1 = 0
    temp0_55[0] = temp0_55[0] + temp0_54[0]
    int32_t var_23c_1 = 0x3f800000
    int32_t var_260_1 = (zmm1 ^ data_142d3f780).d
    temp0_55[0] = temp0_55[0] * temp0_56[0]
    float var_264_1 = temp0_55[0]
    temp0_54[0] = temp0_54[0] * temp0_52[0]
    temp0_54[0] = temp0_54[0] * temp0_51[0]
    temp0_54[0] = temp0_54[0] * temp0_56[0]
    zmm1.d = temp0_54.d f* temp0_53[0]
    temp0_53[0] = temp0_53[0] * temp0_55[0]
    zmm1.d = zmm1.d f+ temp0_55[0]
    float var_250_1 = temp0_54[0]
    zmm0_1 = data_143dbb1f8
    temp0_53[0] = temp0_53[0] - temp0_54[0]
    float var_248_1 = zmm0_1[0]
    float var_240_1 = data_143dbb200[0]
    int32_t var_258_1 = (zmm1 ^ data_142d3f780).d
    float var_254_1 = temp0_53[0]
    int32_t var_244_1 = data_143dbb1fc.d
    
    do
        void* rcx_3 = &var_188
        int64_t rdi_1 = sx.q(var_298_1.d)
        
        if (var_e8 != 0)
            rcx_3 = var_e8
        
        int32_t rax_6 = (rdi_1 + 1).d
        float var_288[0x4]
        var_288[0] = (*(rcx_3 + j))[0]
        zmm1 = *(rcx_3 + j + 4)
        zmm2_1 = *(rcx_3 + j + 8)
        float temp0_57[0x4] = _mm_shuffle_ps(var_288, var_288, 0xe1)
        temp0_57[0] = zmm1.d
        var_298_1.d = rax_6
        float temp0_58[0x4] = _mm_shuffle_ps(temp0_57, temp0_57, 0xc6)
        temp0_58[0] = zmm2_1[0]
        float temp0_59[0x4] = _mm_shuffle_ps(temp0_58, temp0_58, 0xc9)
        float temp0_60[0x4] = _mm_shuffle_ps(temp0_59, temp0_59, 0xff)
        float temp0_61[0x4] = _mm_shuffle_ps(temp0_59, temp0_59, 0xaa)
        zmm1 = _mm_shuffle_ps(temp0_59, temp0_59, 0x55)
        float temp0_63[0x4] = _mm_mul_ps(temp0_60, var_248_1.o)
        float temp0_64[0x4] = _mm_mul_ps(temp0_61, var_258_1.o)
        var_288 = temp0_59
        float temp0_66[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_59, temp0_59, 0), var_278_1.o)
        float temp0_70[0x4] = _mm_add_ps(_mm_add_ps(temp0_63, temp0_64), 
            _mm_add_ps(_mm_mul_ps(zmm1, var_268_1.o), temp0_66))
        var_2b8 = temp0_70[0]
        float temp0_71[0x4] = _mm_shuffle_ps(temp0_70, temp0_70, 0x55)
        float var_2b0_2 = _mm_shuffle_ps(temp0_70, temp0_70, 0xaa)[0]
        float var_2b4_2 = temp0_71[0]
        
        if (rax_6 s> var_298_1:4.d)
            sub_1412388c0(&var_2a0, rdi_1.d)
        
        void* rdx_4
        
        if ((var_2a0.b & 1) == 0)
            rdx_4 = var_2a0
        else
            rdx_4 = &var_2a0 + (var_2a0 s>> 1)
        
        int64_t rcx_5 = rdi_1 * 3
        j += 0xc
        *(rdx_4 + (rcx_5 << 2)) = var_2b8.q
        *(rdx_4 + (rcx_5 << 2) + 8) = var_2b0_2
    while (j s< 0x9c)
    
    zmm4 = var_208
    i += 1
    zmm5 = var_1f8
    zmm6 = var_1e8
    zmm9 = var_1d8
while (i s< 0x13)

uint64_t rdx_5 = zx.q(var_298_1.d)
*(arg1 + 0x18) = rdx_5.d
zmm0_1 = data_143dbb1e0
int64_t* rcx_7 = data_143f0f180
int64_t var_1c8
int64_t* var_2c0 = &var_1c8
int32_t var_1a4 = (1 << (data_1439c7a34).b) - 1
var_1c8 = 0
void** const* var_1c0 = &var_2a8
int32_t var_1b8 = 1
float var_1b4[0x4] = zmm0_1
char var_1a0 = 0
int64_t var_198 = 0
int32_t var_190 = 0
(*(*rcx_7 + 0x498))(rcx_7, &var_2b8, &data_143f02b98, zx.q((rdx_5 * 3).d << 2), 1, var_2c0)
sub_1405d1600(arg1 + 0x10, &var_2b8)
sub_1405d1550(&var_2b8)
sub_140a1d5c0(&var_2a0)
void** const result = &data_142da7708
var_2a8 = &data_142da7708

if (var_e8 != 0)
    result = sub_140a74f90(var_e8)

__security_check_cookie(rax_1 ^ &var_2e8)
return result
