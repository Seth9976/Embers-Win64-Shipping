// 函数: sub_1425da9d0
// 地址: 0x1425da9d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_18 = 0
int32_t var_e8 = 0
float zmm11[0x4] = zx.o(0)
int32_t var_f4 = 0
int64_t var_178 = (_mm_unpacklo_ps(zx.o(0), 0)).q
int64_t var_16c = (_mm_unpacklo_ps(zx.o(0), 0)).q
int128_t* result = arg2
float var_160 = 0f
char rax = sub_140d3e110(arg3 + 0x438)
void* rsi

if (rax == 0)
    rsi = arg3
else
    rsi = sub_140d3c6e0(arg3 + 0x438)

int64_t var_128
int64_t var_118

if (*(rsi + sx.q(*(rsi + 0x494)) * 0x10 + 0x458) != 0)
    int64_t* rdi_1 = *(arg1 + 0x20)
    void* r12_2 = sx.q(*(arg1 + 0x28)) * 0x1f0 + rdi_1
    
    if (rdi_1 != r12_2)
        result.b = 1
        float zmm13[0x4] = 0x3e800000
        float zmm6[0x4]
        float var_48_1[0x4] = zmm6
        float zmm7[0x4]
        float var_58_1[0x4] = zmm7
        float zmm8[0x4]
        float var_68_1[0x4] = zmm8
        float zmm9[0x4]
        float var_78_1[0x4] = zmm9
        float zmm10[0x4]
        float var_88_1[0x4] = zmm10
        uint128_t zmm12
        uint128_t var_a8_1 = zmm12
        float zmm15[0x4]
        float var_d8_1[0x4] = zmm15
        
        do
            int64_t r9_1 = sx.q(rdi_1[0xc].d)
            
            if (r9_1.d != 0xffffffff)
                int64_t r8 = sx.q(*(*rdi_1 + 0x108))
                float (* rdx_5)[0x4]
                
                if (rax == 0)
                label_1425dac5c:
                    
                    if (r8.d == 0xffffffff)
                        rdx_5 = &data_143dbb0c0
                    else
                        rdx_5 = sx.q(r8.d) * 0x30 + *(rsi + (sx.q(*(rsi + 0x494)) + 0x45) * 0x10)
                else
                    if (r8.d s< *(arg3 + 0x4b8))
                        int64_t rax_11 = *(arg3 + 0x4b0)
                        int64_t rcx_11 = r8
                        r8 = 0
                        
                        if (*(rax_11 + (rcx_11 << 2)) != 0xffffffff)
                            r8 = zx.q(*(rax_11 + (rcx_11 << 2)))
                        
                        goto label_1425dac5c
                    
                    rdx_5 = &data_143dbb0c0
                
                zmm10 = *rdx_5
                zmm6 = rdx_5[1]
                zmm8 = rdx_5[2]
                void* rbx_4 = (r9_1 << 6) + rdi_1[0x26]
                int64_t* rcx_15 = *(rbx_4 + 8)
                int128_t* rax_14 = (*(*rcx_15 + 0x308))(rcx_15)
                int64_t* rcx_16 = *(rbx_4 + 8)
                float temp0_2[0x4] = _mm_shuffle_ps(zmm10, zmm10, 0xd2)
                float temp0_3[0x4] = _mm_shuffle_ps(zmm10, zmm10, 0xc9)
                int64_t rax_15 = *rcx_16
                float temp0_7[0x4] = _mm_mul_ps(
                    _mm_unpacklo_ps(_mm_unpacklo_ps(*rax_14, (*(rax_14 + 8))[0].q), 
                        _mm_unpacklo_ps(*(rax_14 + 4), zmm11[0].q)[0].q), 
                    zmm8)
                float temp0_8[0x4] = _mm_shuffle_ps(zmm10, zmm10, 0xff)
                float temp0_10[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_7, temp0_7, 0xc9), temp0_2)
                float temp0_13[0x4] = _mm_sub_ps(
                    _mm_mul_ps(_mm_shuffle_ps(temp0_7, temp0_7, 0xd2), temp0_3), temp0_10)
                float temp0_14[0x4] = _mm_add_ps(temp0_13, temp0_13)
                uint128_t zmm1 = _mm_mul_ps(temp0_8, temp0_14)
                float temp0_17[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_14, temp0_14, 0xd2), temp0_3)
                float temp0_18[0x4] = _mm_shuffle_ps(temp0_14, temp0_14, 0xc9)
                zmm1 = _mm_add_ps(zmm1, temp0_7)
                var_118.o = _mm_add_ps(
                    _mm_add_ps(_mm_sub_ps(temp0_17, _mm_mul_ps(temp0_18, temp0_2)), zmm1), zmm6)
                float (* rax_16)[0x4] = (*(rax_15 + 0x310))(rcx_16)
                float temp0_27[0x4] = _mm_mul_ps(
                    _mm_unpacklo_ps(_mm_unpacklo_ps(*rax_16, (*rax_16)[2][0].q), 
                        _mm_unpacklo_ps((*rax_16)[1], zmm11[0].q)[0].q), 
                    zmm8)
                float temp0_29[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_27, temp0_27, 0xc9), temp0_2)
                float temp0_32[0x4] = _mm_sub_ps(
                    _mm_mul_ps(_mm_shuffle_ps(temp0_27, temp0_27, 0xd2), temp0_3), temp0_29)
                float temp0_33[0x4] = _mm_add_ps(temp0_32, temp0_32)
                float temp0_34[0x4] = _mm_mul_ps(temp0_8, temp0_33)
                zmm1 = _mm_shuffle_ps(temp0_33, temp0_33, 0xd2)
                float temp0_36[0x4] = _mm_shuffle_ps(temp0_33, temp0_33, 0xc9)
                int32_t var_110
                float zmm2[0x4] = var_110
                zmm1 = _mm_mul_ps(zmm1, temp0_3)
                float temp0_38[0x4] = _mm_add_ps(temp0_34, temp0_27)
                zmm1 = _mm_sub_ps(zmm1, _mm_mul_ps(temp0_36, temp0_2))
                float zmm0[0x4] = var_118.d
                var_128.o = _mm_add_ps(zmm1, temp0_38)
                zmm1 = var_118:4.d
                zmm8 = var_128:4.d
                float var_130_1
                uint128_t var_148
                int32_t var_120
                uint128_t zmm4_2
                float zmm5_1[0x4]
                
                if (result.b == 0)
                    zmm7 = var_128.d
                    zmm6 = var_120
                    zmm0[0] = zmm0[0] - zmm7[0]
                    zmm7[0] = zmm7[0] + zmm0[0]
                    zmm4_2.d = zmm1.d f- zmm8[0]
                    float zmm3[0x4] = zmm2
                    zmm8[0] = zmm8[0] f+ zmm1.d
                    zmm3[0] = zmm3[0] - zmm6[0]
                    zmm6[0] = zmm6[0] + zmm2[0]
                    zmm2 = var_16c.d
                    zmm7[0] = zmm7[0] - zmm0[0]
                    zmm8[0] = zmm8[0] f- zmm4_2.d
                    zmm6[0] = zmm6[0] - zmm3[0]
                    zmm15 = zmm7
                    zmm7[0] = zmm7[0] * zmm7[0]
                    zmm15[0] = zmm15[0] * 0.5f
                    zmm8[0] = zmm8[0] * 0.5f
                    zmm8[0] = zmm8[0] * zmm8[0]
                    zmm6[0] = zmm6[0] * zmm6[0]
                    zmm15[0] = zmm15[0] + zmm0[0]
                    zmm10 = zmm8
                    float arg_20 = zmm8[0]
                    zmm8[0] = zmm8[0] + zmm7[0]
                    zmm1.d = zmm6.d f* 0.5f
                    zmm10[0] = zmm10[0] f+ zmm4_2.d
                    arg_18 = zmm1.d
                    zmm8[0] = zmm8[0] + zmm6[0]
                    zmm5_1 = 0
                    zmm12.d = zmm1.d f+ zmm3[0]
                    zmm3 = var_178.d
                    zmm5_1[0] = 0f - 0f
                    zmm1.d = 0f + 0f
                    zmm8[0] = zmm8[0] * zmm13[0]
                    zmm13 = var_178:4.d
                    zmm4_2.d = zmm3.d f- zmm2[0]
                    zmm6 = zmm13
                    float var_108_1 = zmm3[0]
                    float temp0_45[0x4] = _mm_sqrt_ss(0, zmm8[0])
                    zmm2[0] = zmm2[0] + zmm3[0]
                    zmm9 = zmm4_2
                    zmm7 = zmm5_1
                    bool cond:0_1 = zmm4_2.d f<= zmm2[0]
                    float var_100_1 = temp0_45[0]
                    zmm0 = var_16c:4.d
                    zmm6[0] = zmm6[0] - zmm0[0]
                    zmm0[0] = zmm0[0] + zmm13[0]
                    zmm8 = zmm6
                    
                    if (not(cond:0_1))
                        zmm9 = zmm2
                    
                    if (not(zmm6[0] <= zmm0[0]))
                        zmm8 = zmm0
                    
                    if (not(zmm5_1[0] f<= zmm1.d))
                        zmm7 = zmm1
                    
                    if (not(zmm4_2.d f>= zmm2[0]))
                        zmm4_2 = zmm2
                    
                    if (not(zmm6[0] >= zmm0[0]))
                        zmm6 = zmm0
                    
                    if (not(zmm5_1[0] f>= zmm1.d))
                        zmm5_1 = zmm1
                    
                    zmm3 = arg_20
                    zmm1.d = zmm15.d f- zmm15[0]
                    zmm2 = zmm12
                    zmm10[0] = zmm10[0] - zmm3[0]
                    zmm2[0] = zmm2[0] f- arg_18
                    
                    if (not(zmm9[0] f<= zmm1.d))
                        zmm9 = zmm1
                    
                    if (not(zmm8[0] <= zmm10[0]))
                        zmm8 = zmm10
                    
                    if (not(zmm7[0] <= zmm2[0]))
                        zmm7 = zmm2
                    
                    if (not(zmm4_2.d f>= zmm1.d))
                        zmm4_2 = zmm1
                    
                    if (not(zmm6[0] >= zmm10[0]))
                        zmm6 = zmm10
                    
                    if (not(zmm5_1[0] >= zmm2[0]))
                        zmm5_1 = zmm2
                    
                    zmm1.d = zmm15.d f+ zmm15[0]
                    zmm2 = zmm12
                    zmm2[0] = zmm2[0] f+ arg_18
                    zmm10[0] = zmm10[0] + zmm3[0]
                    
                    if (not(zmm9[0] f<= zmm1.d))
                        zmm9 = zmm1
                    
                    if (not(zmm8[0] <= zmm10[0]))
                        zmm8 = zmm10
                    
                    if (not(zmm7[0] <= zmm2[0]))
                        zmm7 = zmm2
                    
                    if (not(zmm4_2.d f>= zmm1.d))
                        zmm4_2 = zmm1
                    
                    if (not(zmm6[0] >= zmm10[0]))
                        zmm6 = zmm10
                    
                    if (not(zmm5_1[0] >= zmm2[0]))
                        zmm5_1 = zmm2
                    
                    zmm4_2.d = zmm4_2.d f- zmm9[0]
                    zmm6[0] = zmm6[0] - zmm8[0]
                    zmm5_1[0] = zmm5_1[0] - zmm7[0]
                    zmm1 = zmm4_2
                    zmm4_2.d = zmm4_2.d f* zmm4_2.d
                    zmm1.d = zmm1.d f* 0.5f
                    zmm6[0] = zmm6[0] * 0.5f
                    zmm9[0] = zmm9[0] f+ zmm1.d
                    zmm5_1[0] = zmm5_1[0] * 0.5f
                    zmm6[0] = zmm6[0] * zmm6[0]
                    zmm8[0] = zmm8[0] + zmm6[0]
                    float temp0_46[0x4] = _mm_unpacklo_ps(zmm1, zmm6[0].q)
                    zmm7[0] = zmm7[0] + zmm5_1[0]
                    int64_t var_13c_2 = temp0_46.q
                    zmm4_2.d = zmm4_2.d f+ zmm6[0]
                    zmm0 = var_108_1
                    zmm15[0] = zmm15[0] - zmm9[0]
                    zmm0[0] = zmm0[0] - zmm9[0]
                    zmm5_1[0] = zmm5_1[0] * zmm5_1[0]
                    zmm10[0] = zmm10[0] - zmm8[0]
                    float var_150 = zmm5_1[0]
                    zmm1.d = 0f - zmm7[0]
                    zmm13[0] = zmm13[0] - zmm8[0]
                    zmm15[0] = zmm15[0] * zmm15[0]
                    float var_134_2 = var_150
                    zmm0[0] = zmm0[0] * zmm0[0]
                    zmm12.d = zmm12.d f- zmm7[0]
                    zmm10[0] = zmm10[0] * zmm10[0]
                    zmm4_2.d = zmm4_2.d f+ zmm5_1[0]
                    zmm1.d = zmm1.d f* zmm1.d
                    zmm13[0] = zmm13[0] * zmm13[0]
                    zmm10[0] = zmm10[0] + zmm15[0]
                    zmm4_2.d = zmm4_2.d f* 0.25f
                    zmm13[0] = zmm13[0] + zmm0[0]
                    zmm12.d = zmm12.d f* zmm12.d
                    var_148.d = zmm9[0]
                    float temp0_47[0x4] = _mm_sqrt_ss(0, zmm4_2.d)
                    zmm10[0] = zmm10[0] f+ zmm12.d
                    var_148:4.d = zmm8[0]
                    zmm13[0] = zmm13[0] f+ zmm1.d
                    float var_140_2 = zmm7[0]
                    float temp0_48[0x4] = _mm_sqrt_ss(0, zmm10[0])
                    zmm1 = _mm_sqrt_ss(0, zmm13[0])
                    temp0_48[0] = temp0_48[0] + var_100_1
                    zmm1.d = zmm1.d f+ var_160
                    zmm1 = _mm_max_ss(zmm1.d, temp0_48[0])
                    
                    if (temp0_47[0] f> zmm1.d)
                        var_130_1 = zmm1.d
                    else
                        var_130_1 = temp0_47[0]
                    
                    zmm11 = zx.o(0)
                    zmm13 = 0x3e800000
                    var_178.o = var_148
                    var_16c = var_13c_2
                else
                    zmm9 = var_128.d
                    zmm7 = var_120
                    zmm0[0] = zmm0[0] - zmm9[0]
                    zmm9[0] = zmm9[0] + zmm0[0]
                    zmm5_1 = zmm1
                    zmm4_2.d = zmm2.d f- zmm7[0]
                    zmm7[0] = zmm7[0] + zmm2[0]
                    result.b = 0
                    zmm5_1[0] = zmm5_1[0] - zmm8[0]
                    zmm8[0] = zmm8[0] f+ zmm1.d
                    zmm9[0] = zmm9[0] - zmm0[0]
                    zmm7[0] = zmm7[0] f- zmm4_2.d
                    zmm8[0] = zmm8[0] - zmm5_1[0]
                    zmm9[0] = zmm9[0] * zmm9[0]
                    zmm9[0] = zmm9[0] * 0.5f
                    zmm7[0] = zmm7[0] * 0.5f
                    zmm1.d = zmm8.d f* 0.5f
                    zmm0[0] = zmm0[0] + zmm9[0]
                    zmm8[0] = zmm8[0] * zmm8[0]
                    float var_e8_1 = zmm7[0]
                    zmm7[0] = zmm7[0] f+ zmm4_2.d
                    zmm5_1[0] = zmm5_1[0] f+ zmm1.d
                    float temp0_42[0x4] = _mm_unpacklo_ps(zmm9, zmm1.q)
                    zmm9[0] = zmm9[0] + zmm8[0]
                    int64_t var_13c_1 = temp0_42.q
                    zmm7[0] = zmm7[0] * zmm7[0]
                    float var_134_1 = var_e8_1
                    float var_f4_1 = zmm7[0]
                    zmm9[0] = zmm9[0] + zmm7[0]
                    float var_140_1 = var_f4_1
                    zmm1.q = (_mm_unpacklo_ps(zmm0, zmm5_1[0].q)).q
                    zmm9[0] = zmm9[0] * zmm13[0]
                    var_148 = zmm1
                    var_178.o = zmm1
                    var_130_1 = _mm_sqrt_ss(0, zmm9[0])[0]
                    var_16c = var_13c_1
                var_160 = var_130_1
            
            rdi_1 = &rdi_1[0x3e]
        while (rdi_1 != r12_2)
        
        result = arg2
    
    *result = var_178.o
    result[1].q = var_16c
    *(result + 0x18) = var_160
else
    arg_18.q = *(rsi + 0x18)
    sub_140b63b70(&arg_18, &var_118)
    void* rax_5 = *(rsi + 0x430)
    int64_t var_158
    int64_t* rax_7
    int32_t rbx_1
    
    if (rax_5 == 0)
        var_158 = 0
        int32_t var_150_1 = 0
        sub_1405947f0(&var_158, 8)
        int32_t rax_8 = var_150_1 + 8
        var_150_1 = rax_8
        
        if (rax_8 s> 0)
            sub_140594770(&var_158)
        
        UnDecorator::getReferenceType(var_158, u"No Mesh", 0x10)
        rax_7 = &var_158
        rbx_1 = 2
    else
        arg_18.q = *(rax_5 + 0x18)
        sub_140b63b70(&arg_18, &var_128)
        rax_7 = &var_128
        rbx_1 = 1
    
    int64_t rdi = *rax_7
    *rax_7 = 0
    rax_7[1] = 0
    
    if ((rbx_1.b & 2) != 0)
        int64_t rcx_7 = var_158
        rbx_1 &= 0xfffffffd
        
        if (rcx_7 != 0)
            sub_140a74f90(rcx_7)
    
    if ((rbx_1.b & 1) != 0)
        int64_t rcx_8 = var_128
        
        if (rcx_8 != 0)
            sub_140a74f90(rcx_8)
    
    *result = var_178.o
    result[1].q = var_16c
    *(result + 0x18) = 0
    
    if (rdi != 0)
        sub_140a74f90(rdi)
    
    int64_t rcx_10 = var_118
    
    if (rcx_10 != 0)
        sub_140a74f90(rcx_10)
return result
