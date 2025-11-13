// 函数: sub_1417c9220
// 地址: 0x1417c9220
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1c8
int64_t rax_1 = __security_cookie ^ &var_1c8
int32_t result_2 = 0
float zmm15[0x4] = *(arg2 + 4)
int64_t* rcx = arg1[1]
float var_114[0x4] = data_142e6da00
int32_t var_118 = 4
int64_t var_104 = 0
int32_t var_fc = 0x3f800000
int64_t* var_f8 = nullptr
char var_f0 = 0
int16_t var_ef = 0
char var_ed = 0
float var_1a4 = (*arg2)[0]
float zmm0[0x4] = *(arg2 + 8)
float var_1a8 = zmm0[0]
uint64_t result

if ((*(*rcx + 0x68))(rcx, &var_118) == 0)
    result = zx.q(arg1[2].d)
else
    int64_t* rax_4 = *arg1
    int64_t* rbx_1 = nullptr
    
    if (rax_4[1].w == 6)
        rbx_1 = rax_4
    
    float var_180
    float var_17c
    float var_178
    float var_174
    float var_170
    float var_16c
    float var_168
    float var_e8
    
    if (rbx_1 == 0)
    label_1417c935f:
        int64_t* rcx_3 = *arg1
        int128_t* rax_10 = (*(*rcx_3 + 0xa0))(rcx_3, &var_e8)
        var_180 = (*rax_10)[0]
        var_17c = *(rax_10 + 4)
        var_178 = (*(rax_10 + 8))[0]
        var_174 = *(rax_10 + 0xc)
        var_170 = rax_10[1].d[0]
        var_16c = *(rax_10 + 0x14)
        zmm0 = *(rax_10 + 0x18)
        var_168 = zmm0[0]
    else
        void var_18c
        
        if ((*(*(*rbx_1 + 0x178))(rbx_1, &var_18c) & 2) == 0)
            goto label_1417c935f
        
        if ((*(*rbx_1 + 0x1b8))(rbx_1, &var_180) == 0)
            goto label_1417c935f
    
    void var_138
    int32_t* rax_12 = (*(*arg1[1] + 0x90))(zmm0, &var_138)
    float zmm5_1[0x4] = var_174
    int128_t zmm2 = var_17c
    float zmm3[0x4] = var_178
    float zmm12[0x4] = var_180
    float zmm1 = zmm3[0]
    int128_t zmm10 = rax_12[4]
    int128_t zmm7 = rax_12[5]
    zmm10.d = zmm10.d f+ zmm10.d
    int128_t zmm9 = rax_12[6]
    zmm7.d = zmm7.d f+ zmm7.d
    zmm5_1[0] = zmm5_1[0] * zmm5_1[0]
    zmm9.d = zmm9.d f+ zmm9.d
    zmm12[0] = zmm12[0] f* zmm10.d
    zmm5_1[0] = zmm5_1[0] - 0.5f
    int128_t zmm11
    zmm11.d = zmm2.d f* zmm9.d
    zmm3[0] = zmm3[0] f* zmm10.d
    float zmm4_1 = zmm2.d f* zmm7.d + zmm12[0]
    zmm3[0] = zmm3[0] f* zmm7.d
    zmm11.d = zmm11.d f- zmm3[0]
    zmm4_1 = zmm4_1 + zmm1 f* zmm9.d
    zmm5_1[0] = zmm5_1[0] f* zmm10.d
    zmm11.d = zmm11.d f* zmm5_1[0]
    zmm1 = zmm12[0] * zmm4_1
    zmm11.d = zmm11.d f+ zmm5_1[0]
    zmm3[0] = zmm3[0] * zmm4_1
    zmm12[0] = zmm12[0] f* zmm7.d
    zmm12[0] = zmm12[0] f* zmm9.d
    zmm11.d = zmm11.d f+ zmm1
    zmm1 = zmm2.d
    zmm2.d = zmm2.d f* zmm10.d
    zmm3[0] = zmm3[0] - zmm12[0]
    zmm12[0] = zmm12[0] f- zmm2.d
    zmm5_1[0] = zmm5_1[0] f* zmm9.d
    zmm11.d = zmm11.d f+ var_170
    zmm3[0] = zmm3[0] * zmm5_1[0]
    zmm12[0] = zmm12[0] * zmm5_1[0]
    zmm5_1[0] = zmm5_1[0] f* zmm7.d
    zmm12[0] = zmm12[0] + zmm5_1[0]
    zmm3[0] = zmm3[0] + zmm5_1[0]
    zmm12[0] = zmm12[0] + zmm3[0]
    zmm3[0] = zmm3[0] + zmm1 * zmm4_1
    zmm12[0] = zmm12[0] + var_168
    zmm3[0] = zmm3[0] + var_16c
    float* rax_13
    float zmm6_1[0x4]
    float zmm11_1[0x4]
    rax_13, zmm6_1, zmm11_1 = sub_1417c7990(&var_180, &var_e8, rax_12)
    float zmm0_1[0x4] = var_1a4
    float zmm5_2[0x4] = *(arg1 + 0x1c)
    float zmm4_2[0x4] = arg1[4].d
    float zmm7_1[0x4] = *rax_13
    float zmm8_1[0x4] = rax_13[1]
    float zmm10_1[0x4] = rax_13[2]
    float zmm9_1[0x4] = rax_13[3]
    zmm0_1[0] = zmm0_1[0] * 0.00999999978f
    zmm5_2[0] = zmm5_2[0] - zmm0_1[0]
    zmm15[0] = zmm15[0] * 0.00999999978f
    zmm4_2[0] = zmm4_2[0] - zmm15[0]
    zmm0_1 = var_1a8
    zmm5_2[0] = zmm5_2[0] - zmm11_1[0]
    zmm0_1[0] = zmm0_1[0] * 0.00999999978f
    zmm4_2[0] = zmm4_2[0] - zmm6_1[0]
    float zmm3_1[0x4] = *(arg1 + 0x24)
    zmm5_2[0] = zmm5_2[0] + zmm5_2[0]
    zmm3_1[0] = zmm3_1[0] - zmm0_1[0]
    zmm6_1 = zmm9_1
    zmm4_2[0] = zmm4_2[0] + zmm4_2[0]
    zmm6_1[0] = zmm6_1[0] * zmm9_1[0]
    zmm15[0] = zmm15[0] + zmm15[0]
    zmm6_1[0] = zmm6_1[0] - 0.5f
    zmm7_1[0] = zmm7_1[0] * zmm5_2[0]
    zmm3_1[0] = zmm3_1[0] - zmm12[0]
    zmm8_1[0] = zmm8_1[0] * zmm4_2[0]
    zmm6_1[0] = zmm6_1[0] * zmm5_2[0]
    zmm3_1[0] = zmm3_1[0] + zmm3_1[0]
    zmm8_1[0] = zmm8_1[0] + zmm7_1[0]
    zmm10_1[0] = zmm10_1[0] * zmm4_2[0]
    zmm10_1[0] = zmm10_1[0] * zmm3_1[0]
    zmm8_1[0] = zmm8_1[0] + zmm10_1[0]
    zmm8_1[0] = zmm8_1[0] * zmm3_1[0]
    zmm8_1[0] = zmm8_1[0] - zmm10_1[0]
    zmm7_1[0] = zmm7_1[0] * zmm8_1[0]
    zmm8_1[0] = zmm8_1[0] * zmm9_1[0]
    zmm6_1[0] = zmm6_1[0] - zmm8_1[0]
    zmm10_1[0] = zmm10_1[0] * zmm5_2[0]
    zmm6_1[0] = zmm6_1[0] + zmm7_1[0]
    zmm7_1[0] = zmm7_1[0] * zmm3_1[0]
    zmm10_1[0] = zmm10_1[0] - zmm7_1[0]
    float var_144_1 = zmm6_1[0]
    zmm8_1[0] = zmm8_1[0] * zmm8_1[0]
    zmm6_1[0] = zmm6_1[0] * zmm4_2[0]
    zmm10_1[0] = zmm10_1[0] * zmm9_1[0]
    zmm6_1[0] = zmm6_1[0] - zmm10_1[0]
    zmm7_1[0] = zmm7_1[0] * zmm4_2[0]
    zmm4_2 = var_1a4
    zmm4_2[0] = zmm4_2[0] + zmm4_2[0]
    zmm6_1[0] = zmm6_1[0] + zmm8_1[0]
    zmm8_1[0] = zmm8_1[0] * zmm5_2[0]
    zmm5_2 = var_1a8
    zmm5_2[0] = zmm5_2[0] + zmm5_2[0]
    zmm7_1[0] = zmm7_1[0] - zmm8_1[0]
    float var_140_1 = zmm6_1[0]
    zmm10_1[0] = zmm10_1[0] * zmm8_1[0]
    zmm6_1[0] = zmm6_1[0] * zmm3_1[0]
    zmm7_1[0] = zmm7_1[0] * zmm9_1[0]
    zmm15[0] = zmm15[0] * zmm8_1[0]
    zmm6_1[0] = zmm6_1[0] - zmm7_1[0]
    zmm6_1[0] = zmm6_1[0] * zmm4_2[0]
    zmm10_1[0] = zmm10_1[0] * zmm5_2[0]
    zmm6_1[0] = zmm6_1[0] + zmm10_1[0]
    zmm4_2[0] = zmm4_2[0] * zmm7_1[0]
    zmm15[0] = zmm15[0] + zmm4_2[0]
    float var_13c_1 = zmm6_1[0]
    zmm10_1[0] = zmm10_1[0] * zmm15[0]
    zmm15[0] = zmm15[0] + zmm10_1[0]
    zmm8_1[0] = zmm8_1[0] * zmm5_2[0]
    zmm8_1[0] = zmm8_1[0] - zmm10_1[0]
    zmm15[0] = zmm15[0] * zmm7_1[0]
    zmm8_1[0] = zmm8_1[0] * zmm9_1[0]
    zmm6_1[0] = zmm6_1[0] - zmm8_1[0]
    zmm6_1[0] = zmm6_1[0] + zmm15[0]
    zmm11_1 = var_104:4.d
    float zmm13[0x4] = var_104.d
    zmm10_1[0] = zmm10_1[0] * zmm4_2[0]
    zmm5_2[0] = zmm5_2[0] * zmm7_1[0]
    float var_154_1 = zmm6_1[0]
    zmm6_1[0] = zmm6_1[0] * zmm15[0]
    zmm10_1[0] = zmm10_1[0] - zmm5_2[0]
    zmm6_1[0] = zmm6_1[0] * zmm5_2[0]
    zmm10_1[0] = zmm10_1[0] * zmm15[0]
    zmm15[0] = zmm15[0] * zmm8_1[0]
    zmm10_1[0] = zmm10_1[0] * zmm9_1[0]
    zmm11_1[0] = zmm11_1[0] + zmm11_1[0]
    zmm15[0] = zmm15[0] * zmm7_1[0]
    zmm7_1 = var_114[3]
    zmm6_1[0] = zmm6_1[0] - zmm10_1[0]
    zmm4_2[0] = zmm4_2[0] * zmm8_1[0]
    zmm7_1[0] = zmm7_1[0] + zmm7_1[0]
    zmm11_1[0] = zmm11_1[0] * zmm11_1[0]
    zmm6_1[0] = zmm6_1[0] + zmm15[0]
    zmm0_1 = var_fc
    zmm15[0] = zmm15[0] - zmm4_2[0]
    zmm4_2 = zmm0_1
    zmm7_1[0] = zmm7_1[0] * zmm7_1[0]
    zmm4_2[0] = zmm4_2[0] * zmm7_1[0]
    zmm15[0] = zmm15[0] * zmm9_1[0]
    zmm9_1 = zmm0_1
    zmm0_1[0] = zmm0_1[0] * zmm11_1[0]
    float zmm2_1[0x4] = 0x3f800000
    float var_150_1 = zmm6_1[0]
    zmm2_1[0] = 1f - zmm7_1[0]
    zmm6_1[0] = zmm6_1[0] - zmm15[0]
    zmm13[0] = zmm13[0] + zmm13[0]
    zmm12 = zmm0_1
    zmm13[0] = zmm13[0] * zmm7_1[0]
    zmm6_1[0] = zmm6_1[0] + zmm10_1[0]
    zmm13[0] = zmm13[0] * zmm13[0]
    zmm2_1[0] = zmm2_1[0] - zmm11_1[0]
    zmm9_1[0] = zmm9_1[0] * zmm13[0]
    zmm12[0] = zmm12[0] + zmm13[0]
    float var_158_1 = zmm6_1[0]
    zmm13[0] = zmm13[0] - zmm0_1[0]
    zmm0_1 = 0x3f800000
    zmm2_1[0] = zmm2_1[0] - zmm13[0]
    zmm0_1[0] = 1f / var_114[0]
    float var_15c_1 = zmm12[0]
    zmm11_1[0] = zmm11_1[0] * zmm7_1[0]
    float zmm1_1[0x4] = 0x3f800000
    zmm1_1[0] = 1f - zmm13[0]
    zmm11_1[0] = zmm11_1[0] * zmm13[0]
    float var_1a8_1 = zmm13[0]
    zmm11_1[0] = zmm11_1[0] - zmm9_1[0]
    zmm7_1 = zmm11_1
    zmm9_1[0] = zmm9_1[0] + zmm11_1[0]
    zmm1_1[0] = zmm1_1[0] - zmm11_1[0]
    zmm5_2 = 0x3f800000
    zmm5_2[0] = 1f / var_114[2]
    zmm7_1[0] = zmm7_1[0] + zmm4_2[0]
    float var_160_1 = zmm11_1[0]
    float var_184_1 = zmm1_1[0]
    zmm11_1[0] = zmm11_1[0] - zmm4_2[0]
    zmm1_1 = 0x3f800000
    zmm6_1 = zmm5_2
    zmm1_1[0] = 1f / var_114[1]
    zmm8_1 = zmm5_2
    zmm6_1[0] = zmm6_1[0] * zmm11_1[0]
    float zmm14[0x4] = zmm1_1
    zmm8_1[0] = zmm8_1[0] * zmm7_1[0]
    zmm14[0] = zmm14[0] * zmm12[0]
    zmm15 = zmm1_1
    zmm5_2[0] = zmm5_2[0] * zmm2_1[0]
    zmm0_1[0] = zmm0_1[0] * var_184_1
    zmm12 = zmm5_2
    float var_188_1 = zmm5_2[0]
    zmm15[0] = zmm15[0] * zmm2_1[0]
    float var_194_1 = zmm0_1[0]
    zmm5_2 = var_194_1
    zmm5_2[0] = zmm5_2[0] * zmm9_1[0]
    zmm0_1[0] = zmm0_1[0] * zmm13[0]
    zmm13 = zmm11_1
    zmm13[0] = zmm13[0] * zmm1_1[0]
    zmm15[0] = zmm15[0] * zmm11_1[0]
    float var_1a0_1 = zmm0_1[0]
    zmm9_1[0] = zmm9_1[0] * zmm0_1[0]
    zmm14[0] = zmm14[0] * zmm11_1[0]
    float var_1a4_1 = zmm5_2[0]
    zmm5_2 = var_1a0_1
    zmm5_2[0] = zmm5_2[0] * zmm9_1[0]
    float var_190_1 = zmm9_1[0]
    zmm12[0] = zmm12[0] * zmm2_1[0]
    zmm13[0] = zmm13[0] * zmm11_1[0]
    zmm5_2[0] = zmm5_2[0] + zmm15[0]
    zmm11_1 = var_190_1
    zmm11_1[0] = zmm11_1[0] * zmm9_1[0]
    zmm9_1 = var_1a4_1
    zmm9_1[0] = zmm9_1[0] + zmm14[0]
    zmm15[0] = zmm15[0] * zmm2_1[0]
    zmm0_1 = zmm11_1
    float var_198_1 = zmm11_1[0]
    zmm11_1 = var_194_1
    zmm0_1[0] = zmm0_1[0] + zmm13[0]
    zmm2_1[0] = zmm2_1[0] * zmm8_1[0]
    zmm13[0] = zmm13[0] * zmm2_1[0]
    float var_198_2 = zmm0_1[0]
    zmm5_2[0] = zmm5_2[0] + zmm2_1[0]
    zmm2_1[0] = zmm2_1[0] * zmm6_1[0]
    zmm14[0] = zmm14[0] * zmm2_1[0]
    zmm4_2 = zmm7_1
    zmm10_1 = var_1a0_1
    zmm9_1[0] = zmm9_1[0] + zmm2_1[0]
    float var_148_1 = zmm5_2[0]
    zmm3_1 = zmm7_1
    zmm5_2 = var_188_1
    zmm5_2[0] = zmm5_2[0] * zmm7_1[0]
    zmm7_1 = var_1a8_1
    zmm10_1[0] = zmm10_1[0] * zmm7_1[0]
    zmm11_1[0] = zmm11_1[0] * zmm7_1[0]
    float var_1a8_2 = zmm10_1[0]
    zmm10_1 = var_190_1
    zmm11_1[0] = zmm11_1[0] + zmm14[0]
    float var_1a4_2 = zmm9_1[0]
    zmm0_1 = var_1a8_2
    zmm0_1[0] = zmm0_1[0] + zmm15[0]
    zmm10_1[0] = zmm10_1[0] * zmm7_1[0]
    zmm4_2[0] = zmm4_2[0] * zmm8_1[0]
    zmm3_1[0] = zmm3_1[0] * zmm6_1[0]
    zmm10_1[0] = zmm10_1[0] + zmm13[0]
    float var_19c_1 = zmm10_1[0]
    zmm2_1 = var_160_1
    zmm0_1[0] = zmm0_1[0] + zmm4_2[0]
    zmm11_1[0] = zmm11_1[0] + zmm3_1[0]
    float var_19c_2 = zmm10_1[0]
    zmm1_1 = zmm2_1
    float var_1a8_3 = zmm0_1[0]
    zmm0_1 = zmm2_1
    zmm1_1[0] = zmm1_1[0] * zmm8_1[0]
    float var_14c_1 = zmm11_1[0]
    zmm0_1[0] = zmm0_1[0] * zmm6_1[0]
    zmm3_1 = var_188_1
    zmm7_1 = var_194_1
    zmm9_1 = var_1a0_1
    zmm3_1[0] = zmm3_1[0] * zmm2_1[0]
    zmm2_1 = var_15c_1
    int64_t rax_14 = *var_f8
    zmm15[0] = zmm15[0] * zmm2_1[0]
    zmm14[0] = zmm14[0] * zmm2_1[0]
    zmm13[0] = zmm13[0] * zmm2_1[0]
    zmm2_1 = var_184_1
    zmm7_1[0] = zmm7_1[0] * zmm2_1[0]
    zmm9_1[0] = zmm9_1[0] * zmm2_1[0]
    zmm10_1[0] = zmm10_1[0] * zmm2_1[0]
    zmm7_1[0] = zmm7_1[0] + zmm14[0]
    zmm9_1[0] = zmm9_1[0] + zmm15[0]
    float var_190_2 = zmm10_1[0]
    zmm7_1[0] = zmm7_1[0] + zmm0_1[0]
    zmm0_1 = var_19c_2
    zmm0_1[0] = zmm0_1[0] + zmm5_2[0]
    zmm9_1[0] = zmm9_1[0] + zmm1_1[0]
    zmm10_1[0] = zmm10_1[0] + zmm13[0]
    float var_194_2 = zmm7_1[0]
    float var_19c_3 = zmm0_1[0]
    zmm0_1 = var_198_2
    zmm0_1[0] = zmm0_1[0] + zmm12[0]
    float var_1a0_2 = zmm9_1[0]
    zmm10_1[0] = zmm10_1[0] + zmm3_1[0]
    float var_198_3 = zmm0_1[0]
    int32_t rax_15 = (*(rax_14 + 0x40))(zmm0_1)
    zmm8_1 = 0xff7fffff
    int64_t r14
    r14.b = 0
    zmm9_1 = 0x7f7fffff
    int32_t result_1 = 0
    int32_t result_4 = 0
    
    if (rax_15 != 0)
        do
            (*(*var_f8 + 0x48))(var_f8, zx.q(result_4), &var_e8)
            zmm3_1 = var_e8
            int32_t var_e4
            zmm6_1 = var_e4
            int32_t var_e0
            zmm2_1 = var_e0
            zmm6_1[0] = zmm6_1[0] * var_1a0_2
            int32_t result_3 = result_4
            zmm6_1[0] = zmm6_1[0] * var_1a8_3
            zmm6_1[0] = zmm6_1[0] * var_148_1
            zmm3_1[0] = zmm3_1[0] * zmm7_1[0]
            zmm10_1[0] = zmm10_1[0] * zmm2_1[0]
            zmm6_1[0] = zmm6_1[0] + zmm3_1[0]
            zmm3_1[0] = zmm3_1[0] * var_14c_1
            zmm3_1[0] = zmm3_1[0] * var_1a4_2
            zmm6_1[0] = zmm6_1[0] + zmm3_1[0]
            zmm0_1 = var_198_3
            zmm0_1[0] = zmm0_1[0] * zmm2_1[0]
            zmm6_1[0] = zmm6_1[0] + zmm10_1[0]
            zmm1_1 = var_19c_3
            zmm6_1[0] = zmm6_1[0] + zmm3_1[0]
            zmm1_1[0] = zmm1_1[0] * zmm2_1[0]
            zmm3_1 = 0x3f800000
            zmm6_1[0] = zmm6_1[0] + zmm0_1[0]
            zmm6_1[0] = zmm6_1[0] * zmm6_1[0]
            zmm6_1[0] = zmm6_1[0] + zmm1_1[0]
            zmm6_1[0] = zmm6_1[0] * zmm6_1[0]
            zmm6_1[0] = zmm6_1[0] * zmm6_1[0]
            zmm6_1[0] = zmm6_1[0] + zmm6_1[0]
            zmm6_1[0] = zmm6_1[0] + zmm6_1[0]
            zmm3_1[0] = 1f / _mm_sqrt_ss(0, zmm6_1[0])[0]
            zmm3_1[0] = zmm3_1[0] * zmm6_1[0]
            zmm3_1[0] = zmm3_1[0] * zmm6_1[0]
            zmm3_1[0] = zmm3_1[0] * zmm6_1[0]
            zmm3_1[0] = zmm3_1[0] * var_144_1
            zmm3_1[0] = zmm3_1[0] * var_140_1
            zmm3_1[0] = zmm3_1[0] * var_13c_1
            zmm3_1[0] = zmm3_1[0] + zmm3_1[0]
            int32_t var_dc
            zmm0_1 = var_dc
            zmm0_1[0] = zmm0_1[0] * zmm3_1[0]
            zmm3_1[0] = zmm3_1[0] + zmm3_1[0]
            zmm3_1[0] = zmm3_1[0] + zmm0_1[0]
            bool cond:1_1 = zmm3_1[0] <= zmm8_1[0]
            float temp0_2[0x4] = _mm_max_ss(zmm3_1[0], zmm8_1[0])
            
            if (cond:1_1)
                result_3 = result_1
            
            result_1 = result_3
            
            if (not(zmm3_1[0] < -1f))
                zmm3_1[0] = zmm3_1[0] * var_150_1[0]
                zmm3_1[0] = zmm3_1[0] * var_154_1[0]
                zmm3_1[0] = zmm3_1[0] * var_158_1[0]
                zmm3_1[0] = zmm3_1[0] + zmm3_1[0]
                zmm3_1[0] = zmm3_1[0] + zmm3_1[0]
                
                if (not(zmm3_1[0] >= zmm9_1[0]))
                    result_2 = result_4
                    r14.b = 1
                    zmm9_1 = zmm3_1
            
            zmm7_1 = var_194_2
            result_4 += 1
            zmm8_1 = temp0_2
        while (result_4 u< rax_15)
    
    if (rax_15 == 0 || r14.b == 0)
        result = zx.q(result_1)
    else
        result = zx.q(result_2)

__security_check_cookie(rax_1 ^ &var_1c8)
return result
