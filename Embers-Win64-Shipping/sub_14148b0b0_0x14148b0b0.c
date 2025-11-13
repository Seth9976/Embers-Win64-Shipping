// 函数: sub_14148b0b0
// 地址: 0x14148b0b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx
rbx.b = 0
float zmm5[0x4] = 0x3f000000
void* r10 = arg2
float zmm6[0x4]
float var_18[0x4] = zmm6
float zmm8[0x4] = 0x7f7fffff
float zmm9[0x4] = 0x322bcc77
float zmm10[0x4]
float var_58[0x4] = zmm10
float zmm11[0x4]
float var_68[0x4] = zmm11
uint128_t zmm12
uint128_t var_78 = zmm12
float zmm13[0x4]
float var_88[0x4] = zmm13
uint128_t zmm14
uint128_t var_98 = zmm14
float zmm15[0x4]
float var_a8[0x4] = zmm15
void* rax = *(arg2 + 0x60)
float var_190 = 0f
int32_t var_18c = 0

if (rax != 0)
    r10 = rax

float var_184 = 0f
void* rax_1 = *(arg3 + 0x30)
int32_t var_188 = 0
float var_198 = 0f

if (rax_1 != 0)
    arg3 = rax_1

float var_194 = 0f
float zmm7[0x4] = 0x3f800000
int64_t i = 0
float var_178 = 0f
float var_17c = 0f
int32_t var_180 = 0x7f7fffff
float zmm0[0x4]
uint128_t zmm3
float zmm4[0x4]

do
    zmm6 = (*arg1)[1]
    zmm11 = *arg1
    zmm10 = (*arg1)[2]
    uint64_t rcx = zx.q(*(arg3 + (i << 2))) * 3
    float zmm1[0x4] = zx.o(*(r10 + (rcx << 2)))
    int32_t rax_3 = *(r10 + (rcx << 2) + 8)
    float temp0_1[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0x55)
    uint64_t rcx_1 = zx.q(*(arg3 + (i << 2) + 2)) * 3
    zmm12 = zx.o(*(r10 + (rcx_1 << 2)))
    int32_t rax_5 = *(r10 + (rcx_1 << 2) + 8)
    zmm14.d = (*(r10 + (rcx_1 << 2))).d f- zmm1[0]
    zmm12.d = _mm_shuffle_ps(zmm12, zmm12, 0x55).d f- temp0_1[0]
    zmm15 = rax_5
    zmm15[0] = zmm15[0] f- rax_3
    zmm3.d = zmm11.d f* zmm14.d
    zmm6[0] = zmm6[0] f* zmm12.d
    zmm10[0] = zmm10[0] * zmm15[0]
    zmm3.d = zmm3.d f+ zmm6[0]
    zmm3.d = zmm3.d f+ zmm10[0]
    zmm11[0] = zmm11[0] f* zmm3.d
    zmm6[0] = zmm6[0] f* zmm3.d
    zmm10[0] = zmm10[0] f* zmm3.d
    zmm14.d = zmm14.d f- zmm11[0]
    zmm12.d = zmm12.d f- zmm6[0]
    zmm15[0] = zmm15[0] - zmm10[0]
    zmm3.d = zmm14.d f* zmm14.d
    zmm0 = zmm12
    zmm0[0] = zmm0[0] f* zmm12.d
    zmm15[0] = zmm15[0] * zmm15[0]
    zmm3.d = zmm3.d f+ zmm0[0]
    zmm3.d = zmm3.d f+ zmm15[0]
    
    if (not(zmm3.d f== zmm7[0]))
        if (zmm3.d f>= zmm9[0])
            zmm3.d = zmm3[0]
            float temp0_3[0x4] = _mm_rsqrt_ss(zmm3[0], zmm3.d)
            zmm3.d = zmm3.d f* zmm5[0]
            temp0_3[0] = temp0_3[0] * temp0_3[0]
            zmm1 = zmm3
            zmm1[0] = zmm1[0] * temp0_3[0]
            zmm5[0] = zmm5[0] - zmm1[0]
            temp0_3[0] = temp0_3[0] * zmm5[0]
            temp0_3[0] = temp0_3[0] + temp0_3[0]
            temp0_3[0] = temp0_3[0] * temp0_3[0]
            zmm3.d = zmm3.d f* temp0_3[0]
            zmm5[0] = zmm5[0] f- zmm3.d
            temp0_3[0] = temp0_3[0] * zmm5[0]
            temp0_3[0] = temp0_3[0] + temp0_3[0]
            temp0_3[0] = temp0_3[0] * zmm15[0]
            temp0_3[0] = temp0_3[0] f* zmm14.d
            temp0_3[0] = temp0_3[0] f* zmm12.d
            zmm15 = temp0_3
            zmm5 = 0x3f000000
            zmm14 = temp0_3
            zmm12 = temp0_3
        else
            zmm14 = data_143dbb1f8
            zmm12 = data_143dbb1fc
            zmm15 = data_143dbb200
    
    zmm13 = zmm6
    zmm10[0] = zmm10[0] f* zmm12.d
    zmm13[0] = zmm13[0] * zmm15[0]
    zmm10[0] = zmm10[0] f* zmm14.d
    zmm13[0] = zmm13[0] - zmm10[0]
    zmm6[0] = zmm6[0] f* zmm14.d
    zmm11[0] = zmm11[0] f* zmm12.d
    zmm11[0] = zmm11[0] * zmm15[0]
    zmm11[0] = zmm11[0] - zmm6[0]
    zmm13[0] = zmm13[0] * zmm13[0]
    zmm10[0] = zmm10[0] - zmm11[0]
    zmm11[0] = zmm11[0] * zmm11[0]
    zmm10[0] = zmm10[0] * zmm10[0]
    zmm13[0] = zmm13[0] + zmm10[0]
    zmm13[0] = zmm13[0] + zmm11[0]
    
    if (not(zmm13[0] == zmm7[0]))
        if (zmm13[0] >= zmm9[0])
            zmm3 = zmm13
            float temp0_4[0x4] = _mm_rsqrt_ss(zmm13[0], zmm3.d)
            zmm3.d = zmm3.d f* zmm5[0]
            temp0_4[0] = temp0_4[0] * temp0_4[0]
            zmm1 = zmm3
            zmm1[0] = zmm1[0] * temp0_4[0]
            zmm5[0] = zmm5[0] - zmm1[0]
            temp0_4[0] = temp0_4[0] * zmm5[0]
            temp0_4[0] = temp0_4[0] + temp0_4[0]
            temp0_4[0] = temp0_4[0] * temp0_4[0]
            zmm3.d = zmm3.d f* temp0_4[0]
            zmm5[0] = zmm5[0] f- zmm3.d
            temp0_4[0] = temp0_4[0] * zmm5[0]
            temp0_4[0] = temp0_4[0] + temp0_4[0]
            temp0_4[0] = temp0_4[0] * zmm13[0]
            temp0_4[0] = temp0_4[0] * zmm10[0]
            temp0_4[0] = temp0_4[0] * zmm11[0]
            zmm13 = temp0_4
            zmm10 = temp0_4
            zmm11 = temp0_4
        else
            zmm13 = data_143dbb1f8
            zmm10 = data_143dbb1fc
            zmm11 = data_143dbb200
    
    void* rax_6 = r10 + 0x14
    zmm5 = 0xff7fffff
    zmm4 = 0xff7fffff
    zmm9 = zmm8
    int64_t j_1 = 2
    float zmm2[0x4]
    int64_t j
    
    do
        zmm2 = *(rax_6 - 0x10)
        zmm6 = *(rax_6 - 0x14)
        zmm3 = *(rax_6 - 0xc)
        zmm2[0] = zmm2[0] f* zmm12.d
        zmm1 = zmm3
        zmm3.d = zmm3.d f* zmm11[0]
        zmm6[0] = zmm6[0] f* zmm14.d
        zmm6[0] = zmm6[0] * zmm13[0]
        zmm6[0] = zmm6[0] + zmm2[0]
        zmm1[0] = zmm1[0] * zmm15[0]
        zmm2[0] = zmm2[0] * zmm10[0]
        zmm6[0] = zmm6[0] + zmm1[0]
        zmm6[0] = zmm6[0] + zmm2[0]
        zmm2 = *(rax_6 - 8)
        zmm7 = _mm_max_ss(zmm6[0], zmm5[0])
        zmm5 = *(rax_6 - 4)
        zmm6[0] = zmm6[0] f+ zmm3.d
        zmm3.d = zmm2.d f* zmm14.d
        zmm9 = _mm_min_ss(zmm6[0], zmm9[0])
        float temp0_7[0x4] = _mm_min_ss(zmm6[0], zmm8[0])
        zmm6 = _mm_max_ss(zmm6[0], zmm4[0])
        zmm4 = *rax_6
        zmm4[0] = zmm4[0] * zmm15[0]
        zmm8 = temp0_7
        zmm5[0] = zmm5[0] f* zmm12.d
        zmm3.d = zmm3.d f+ zmm5[0]
        zmm3.d = zmm3.d f+ zmm4[0]
        
        if (not(zmm9[0] f<= zmm3.d))
            zmm9 = zmm3
        
        if (not(zmm7[0] f>= zmm3.d))
            zmm7 = zmm3
        
        zmm2[0] = zmm2[0] * zmm13[0]
        zmm5[0] = zmm5[0] * zmm10[0]
        zmm4[0] = zmm4[0] * zmm11[0]
        zmm2[0] = zmm2[0] + zmm5[0]
        zmm2[0] = zmm2[0] + zmm4[0]
        
        if (not(zmm8[0] <= zmm2[0]))
            zmm8 = zmm2
        
        if (not(zmm6[0] >= zmm2[0]))
            zmm6 = zmm2
        
        zmm2 = *(rax_6 + 8)
        zmm3 = *(rax_6 + 0xc)
        zmm4 = *(rax_6 + 4)
        zmm1 = zmm3
        zmm3.d = zmm3.d f* zmm11[0]
        zmm4[0] = zmm4[0] * zmm13[0]
        zmm4[0] = zmm4[0] f* zmm14.d
        zmm2[0] = zmm2[0] f* zmm12.d
        zmm1[0] = zmm1[0] * zmm15[0]
        zmm4[0] = zmm4[0] + zmm2[0]
        zmm2[0] = zmm2[0] * zmm10[0]
        zmm4[0] = zmm4[0] + zmm2[0]
        zmm2 = *(rax_6 + 0x10)
        zmm4[0] = zmm4[0] + zmm1[0]
        zmm4[0] = zmm4[0] f+ zmm3.d
        zmm9 = _mm_min_ss(zmm9[0], zmm4[0])
        zmm3.d = zmm2.d f* zmm14.d
        zmm5 = _mm_max_ss(zmm4[0], zmm7[0])
        zmm7 = *(rax_6 + 0x18)
        zmm8 = _mm_min_ss(zmm8[0], zmm4[0])
        zmm7[0] = zmm7[0] * zmm15[0]
        zmm4 = _mm_max_ss(zmm4[0], zmm6[0])
        zmm6 = *(rax_6 + 0x14)
        zmm6[0] = zmm6[0] f* zmm12.d
        zmm3.d = zmm3.d f+ zmm6[0]
        zmm3.d = zmm3.d f+ zmm7[0]
        
        if (not(zmm9[0] f<= zmm3.d))
            zmm9 = zmm3
        
        if (not(zmm5[0] f>= zmm3.d))
            zmm5 = zmm3
        
        zmm2[0] = zmm2[0] * zmm13[0]
        zmm6[0] = zmm6[0] * zmm10[0]
        zmm7[0] = zmm7[0] * zmm11[0]
        zmm2[0] = zmm2[0] + zmm6[0]
        zmm2[0] = zmm2[0] + zmm7[0]
        
        if (not(zmm8[0] <= zmm2[0]))
            zmm8 = zmm2
        
        if (not(zmm4[0] >= zmm2[0]))
            zmm4 = zmm2
        
        rax_6 += 0x30
        j = j_1
        j_1 -= 1
    while (j != 1)
    zmm1 = zmm5
    zmm2 = zmm4
    int32_t rcx_2 = *(data_143ed9ce0 + 4)
    
    if (rcx_2 == 0)
        zmm1[0] = zmm1[0] - zmm9[0]
        zmm2[0] = zmm2[0] - zmm8[0]
    else
        zmm0 = _mm_and_ps(zmm9, 0x7fffffff)
        zmm1 = _mm_max_ss(_mm_and_ps(zmm1, 0x7fffffff)[0], zmm0[0])
        zmm2 = _mm_and_ps(zmm2, 0x7fffffff)
        zmm0 = _mm_and_ps(zmm8, 0x7fffffff)
        zmm2 = _mm_max_ss(zmm2[0], zmm0[0])
        zmm1[0] = zmm1[0] + zmm1[0]
        zmm2[0] = zmm2[0] + zmm2[0]
    
    zmm0 = var_180
    zmm0[0] = zmm0[0] - 0.0500000007f
    zmm3.d = zmm2.d f* zmm1[0]
    
    if (zmm3.d f>= zmm0[0] || zmm3.d f<= 9.99999975e-06f)
        zmm15 = var_184
        zmm12 = var_188
        zmm14 = var_18c
        zmm13 = var_194
        zmm6 = var_190
        zmm4 = var_198
    else
        zmm0 = 0x3f800000
        zmm15[0] = zmm15[0] + zmm15[0]
        var_180 = zmm3.d
        zmm14.d = zmm14.d f+ zmm14.d
        rbx.b = 1
        zmm12.d = zmm12.d f+ zmm12.d
        zmm13[0] = zmm13[0] + zmm13[0]
        zmm10[0] = zmm10[0] + zmm10[0]
        zmm11[0] = zmm11[0] + zmm11[0]
        zmm3.d = 1f / zmm1[0]
        zmm0[0] = 1f / zmm2[0]
        zmm7 = zmm3
        zmm6 = zmm3
        zmm7[0] = zmm7[0] * zmm15[0]
        zmm15 = zmm0
        zmm6[0] = zmm6[0] f* zmm14.d
        zmm14.d = zmm3.d f* zmm12.d
        var_178 = zmm7[0]
        float var_168_1 = zmm7[0]
        zmm0[0] = zmm0[0] * zmm10[0]
        zmm15[0] = zmm15[0] * zmm13[0]
        zmm12.d = zmm0.d f* zmm11[0]
        var_17c = zmm0[0]
        float var_15c_1 = zmm0[0]
        var_190 = zmm6[0]
        var_18c = zmm14.d
        float var_170_1 = zmm6[0]
        var_184 = zmm15[0]
        var_188 = zmm12.d
        float var_160_1 = zmm15[0]
        
        if (rcx_2 != 0)
            zmm5 = var_198
            zmm13 = var_194
        else
            zmm13 = zmm4
            zmm5[0] = zmm5[0] + zmm9[0]
            zmm13[0] = zmm13[0] + zmm8[0]
            zmm5[0] = zmm5[0] * 0.5f
            zmm13[0] = zmm13[0] * 0.5f
            var_198 = zmm5[0]
            var_194 = zmm13[0]
        
        zmm4 = zmm13
        
        if (zmm2[0] <= zmm1[0])
            zmm0[0] = zmm0[0] * zmm1[0]
            *arg4 = zmm0[0]
            zmm4 = var_198
        else
            zmm0 = zx.o(var_160_1.q)
            zmm13 = zmm5
            zmm1 = zx.o(var_170_1.q)
            zmm6 = zmm0
            zmm4 ^= data_142d3f780
            var_170_1.q = zmm0.q
            var_194 = zmm5[0]
            zmm5 = zmm12.d
            zmm14.d = zmm14.d.d f* -1f
            zmm12 = var_168_1
            zmm6[0] = zmm6[0] * -1f
            zmm5[0] = zmm5[0] * -1f
            zmm3.d = zmm3.d f* zmm2[0]
            var_160_1.q = zmm1.q
            zmm15 = var_160_1
            float temp0_19[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0x55)
            var_18c = zmm14.d
            var_190 = zmm6[0]
            var_178 = zmm5[0]
            var_198 = zmm4[0]
            *arg4 = zmm3.d
            var_188 = zmm12.d
            var_17c = temp0_19[0]
            var_184 = zmm15[0]
    
    zmm5 = 0x3f000000
    i += 1
    zmm7 = 0x3f800000
    zmm8 = 0x7f7fffff
    zmm9 = 0x322bcc77
while (i s< 0xc)

uint64_t result

if (rbx.b == 0 || var_180[0] <= 9.99999975e-06f)
    result.b = 0
else
    zmm9 = data_142d4cc00
    zmm7 = data_142d4cc20
    zmm10 = data_142d4cc30
    zmm0 = *arg1
    zmm3 = (*arg1)[1]
    zmm5 = (*arg1)[2]
    zmm11 = data_142d3f660
    int32_t var_11c_1 = 0
    float var_128[0x4]
    var_128[0] = zmm6[0]
    int32_t var_b0_1 = 0
    float temp0_20[0x4] = _mm_shuffle_ps(var_128, var_128, 0xe1)
    temp0_20[0] = zmm15[0]
    int32_t var_ac_1 = 0x3f800000
    float temp0_21[0x4] = _mm_shuffle_ps(temp0_20, temp0_20, 0xc6)
    float var_b8[0x4]
    var_b8[0] = zmm4[0]
    temp0_21[0] = zmm0[0]
    float temp0_22[0x4] = _mm_shuffle_ps(var_b8, var_b8, 0xe1)
    float temp0_23[0x4] = _mm_shuffle_ps(temp0_21, temp0_21, 0xc9)
    temp0_22[0] = zmm13[0]
    float temp0_24[0x4] = _mm_shuffle_ps(temp0_22, temp0_22, 0xe1)
    float temp0_25[0x4] = _mm_shuffle_ps(temp0_23, temp0_23, 0x55)
    float temp0_26[0x4] = _mm_shuffle_ps(temp0_23, temp0_23, 0)
    float temp0_27[0x4] = _mm_shuffle_ps(temp0_23, temp0_23, 0xaa)
    float temp0_29[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_23, temp0_23, 0xff), temp0_24)
    int32_t var_10c_1 = 0
    float temp0_30[0x4] = _mm_mul_ps(temp0_26, zmm9)
    int32_t var_fc_1 = 0
    float temp0_31[0x4] = _mm_mul_ps(temp0_27, zmm10)
    float temp0_35[0x4] =
        _mm_add_ps(_mm_add_ps(_mm_add_ps(_mm_mul_ps(temp0_25, zmm7), temp0_30), temp0_31), temp0_29)
    float var_118[0x4]
    var_118[0] = zmm14.d
    float temp0_36[0x4] = _mm_shuffle_ps(var_118, var_118, 0xe1)
    temp0_36[0] = var_17c[0]
    float temp0_37[0x4] = _mm_shuffle_ps(temp0_36, temp0_36, 0xc6)
    temp0_37[0] = zmm3.d
    float temp0_38[0x4] = _mm_shuffle_ps(temp0_37, temp0_37, 0xc9)
    float temp0_39[0x4] = _mm_shuffle_ps(temp0_38, temp0_38, 0)
    float temp0_40[0x4] = _mm_shuffle_ps(temp0_38, temp0_38, 0x55)
    float temp0_41[0x4] = _mm_shuffle_ps(temp0_38, temp0_38, 0xaa)
    float temp0_43[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_38, temp0_38, 0xff), temp0_24)
    float temp0_44[0x4] = _mm_mul_ps(temp0_39, zmm9)
    float temp0_45[0x4] = _mm_mul_ps(temp0_41, zmm10)
    float temp0_49[0x4] =
        _mm_add_ps(_mm_add_ps(_mm_add_ps(_mm_mul_ps(temp0_40, zmm7), temp0_44), temp0_45), temp0_43)
    float var_108[0x4]
    var_108[0] = var_178[0]
    float temp0_50[0x4] = _mm_shuffle_ps(var_108, var_108, 0xe1)
    temp0_50[0] = zmm12.d
    float temp0_51[0x4] = _mm_shuffle_ps(temp0_50, temp0_50, 0xc6)
    temp0_51[0] = zmm5[0]
    float temp0_52[0x4] = _mm_shuffle_ps(temp0_51, temp0_51, 0xc9)
    zmm3 = _mm_shuffle_ps(temp0_52, temp0_52, 0x55)
    float temp0_54[0x4] = _mm_shuffle_ps(temp0_52, temp0_52, 0)
    float temp0_55[0x4] = _mm_shuffle_ps(temp0_52, temp0_52, 0xaa)
    zmm3 = _mm_mul_ps(zmm3, zmm7)
    float temp0_57[0x4] = _mm_mul_ps(temp0_54, zmm9)
    float temp0_58[0x4] = _mm_mul_ps(temp0_55, zmm10)
    float temp0_59[0x4] = _mm_shuffle_ps(temp0_52, temp0_52, 0xff)
    zmm3 = _mm_add_ps(zmm3, temp0_57)
    float temp0_61[0x4] = _mm_mul_ps(temp0_59, temp0_24)
    zmm3 = _mm_add_ps(_mm_add_ps(zmm3, temp0_58), temp0_61)
    *arg5 = temp0_35
    arg5[1] = temp0_49
    float temp0_64[0x4] = _mm_shuffle_ps(zmm11, zmm11, 0x55)
    float temp0_65[0x4] = _mm_shuffle_ps(zmm11, zmm11, 0)
    float temp0_66[0x4] = _mm_mul_ps(temp0_64, zmm7)
    result.b = 1
    float temp0_67[0x4] = _mm_shuffle_ps(zmm11, zmm11, 0xaa)
    float temp0_68[0x4] = _mm_mul_ps(temp0_65, zmm9)
    float temp0_69[0x4] = _mm_mul_ps(temp0_67, zmm10)
    float temp0_70[0x4] = _mm_shuffle_ps(zmm11, zmm11, 0xff)
    float temp0_71[0x4] = _mm_add_ps(temp0_66, temp0_68)
    float temp0_72[0x4] = _mm_mul_ps(temp0_70, temp0_24)
    arg5[2] = zmm3
    arg5[3] = _mm_add_ps(_mm_add_ps(temp0_71, temp0_69), temp0_72)

return result
