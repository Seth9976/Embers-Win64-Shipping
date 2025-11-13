// 函数: sub_1428108c0
// 地址: 0x1428108c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm6[0x4]
float var_48[0x4] = zmm6
float zmm7[0x4]
float var_58[0x4] = zmm7
float zmm8[0x4]
float var_68[0x4] = zmm8
float zmm9[0x4]
float var_78[0x4] = zmm9
float zmm10[0x4]
float var_88[0x4] = zmm10
float zmm11[0x4]
float var_98[0x4] = zmm11
float zmm12[0x4]
float var_a8[0x4] = zmm12
float zmm13[0x4]
float var_b8[0x4] = zmm13
float zmm14[0x4]
float var_c8[0x4] = zmm14
float zmm15[0x4]
float var_d8[0x4] = zmm15
void var_160
void var_158
(*(*arg1 + 0x30))(arg1, &var_160, &var_158)
int64_t var_100 = 0
float zmm4[0x4] = zx.o(0)
int64_t i_3 = 2
float var_130[0x4] = data_142d3f660
float var_110[0x4] = data_142d4cc30
int128_t var_120 = zx.o(0)
float var_1c8
float var_1c4
float var_1c0
float var_1b8
float var_1b4
float var_1b0
int32_t var_150
int32_t zmm1
float zmm2

if (arg2 != 0)
    zmm13 = *arg2
    void* rdi_1 = &var_160
    zmm14 = *(arg2 + 4)
    void* rbx_1 = &var_120:8
    zmm15 = *(arg2 + 8)
    int64_t i_4 = 2
    zmm6 = 0x40000000
    int64_t i
    
    do
        int64_t* rcx = *rdi_1
        int32_t* rcx_1
        
        if (rcx == 0)
            var_1c8 = zmm13[0]
            rcx_1 = &var_1c8
            var_1c4 = zmm14[0]
            var_1c0 = zmm15[0]
        else
            int128_t* rax_2 = (*(*rcx + 0xa0))(rcx, &var_150)
            zmm13 = *arg2
            rcx_1 = &var_1b8
            zmm14 = *(arg2 + 4)
            zmm15 = *(arg2 + 8)
            zmm8 = *(rax_2 + 0xc)
            zmm4 = *(rax_2 + 4)
            zmm7 = *(rax_2 + 8)
            zmm13[0] = zmm13[0] f- rax_2[1].d
            zmm14[0] = zmm14[0] f- *(rax_2 + 0x14)
            zmm15[0] = zmm15[0] f- *(rax_2 + 0x18)
            zmm8[0] = zmm8[0] * zmm8[0]
            zmm1 = zmm7[0]
            zmm13[0] = zmm13[0] * zmm6[0]
            zmm8[0] = zmm8[0] - 0.5f
            zmm15[0] = zmm15[0] * zmm6[0]
            zmm14[0] = zmm14[0] * zmm6[0]
            zmm6 = *rax_2
            zmm2 = zmm8[0]
            zmm1 = zmm1 f* zmm15[0]
            float zmm5_1 = zmm6[0]
            zmm4[0] = zmm4[0] * zmm14[0]
            zmm2 = zmm2 * zmm13[0]
            zmm5_1 = zmm5_1 * zmm13[0] + zmm4[0]
            float zmm3 = zmm8[0] * zmm14[0]
            zmm8[0] = zmm8[0] * zmm15[0]
            zmm7[0] = zmm7[0] * zmm14[0]
            zmm5_1 = zmm5_1 f+ zmm1
            zmm1 = zmm4[0] f* zmm15[0] f- zmm7[0]
            zmm6[0] = zmm6[0] * zmm5_1
            zmm2 = zmm2 f- zmm1 f* zmm8[0]
            zmm1 = zmm7[0] f* zmm13[0]
            zmm7[0] = zmm7[0] * zmm5_1
            zmm2 = zmm2 + zmm6[0]
            zmm6[0] = zmm6[0] * zmm15[0]
            zmm6[0] = zmm6[0] * zmm14[0]
            zmm1 = zmm1 f- zmm6[0]
            var_1b8 = zmm2
            zmm4[0] = zmm4[0] * zmm13[0]
            zmm4[0] = zmm4[0] * zmm5_1
            zmm6[0] = zmm6[0] - zmm4[0]
            zmm3 = zmm3 f- zmm1 f* zmm8[0]
            zmm6[0] = zmm6[0] * zmm8[0]
            zmm8[0] = zmm8[0] - zmm6[0]
            zmm6 = 0x40000000
            zmm3 = zmm3 + zmm4[0]
            zmm8[0] = zmm8[0] + zmm7[0]
            var_1b4 = zmm3
            var_1b0 = zmm8[0]
        
        rdi_1 += 8
        *(rbx_1 - 8) = *rcx_1
        *(rbx_1 - 4) = rcx_1[1]
        *rbx_1 = rcx_1[2]
        rbx_1 += 0x1c
        i = i_4
        i_4 -= 1
    while (i != 1)
    zmm4 = zx.o(0)

int32_t i_2 = 0

if (arg3 != 0)
    zmm6 = *arg3
    zmm7 = *(arg3 + 4)
    zmm8 = *(arg3 + 8)
    zmm11 = 0x3f800000
    zmm1 = zmm8[0]
    zmm2 = zmm6[0] * zmm6[0]
    zmm7[0] = zmm7[0] * zmm7[0]
    zmm1 = zmm1 f* zmm8[0]
    zmm2 = zmm2 + zmm7[0]
    float arg_10 = zmm6[0]
    var_1b8 = zmm6[0]
    float arg_18 = zmm7[0]
    var_1b4 = zmm7[0]
    float arg_8 = zmm8[0]
    var_1b0 = zmm8[0]
    float temp0_1 = _mm_sqrt_ss(0, zmm2 f+ zmm1)
    
    if (not(temp0_1 <= zmm4[0]))
        float zmm0[0x4] = 0x3f800000
        zmm0[0] = 1f / temp0_1
        zmm6[0] = zmm6[0] * zmm0[0]
        zmm7[0] = zmm7[0] * zmm0[0]
        zmm8[0] = zmm8[0] * zmm0[0]
        arg_10 = zmm6[0]
        var_1b8 = zmm6[0]
        arg_18 = zmm7[0]
        var_1b4 = zmm7[0]
        arg_8 = zmm8[0]
        var_1b0 = zmm8[0]
    
    int32_t var_f0
    zmm6, zmm7 = sub_142811080(&var_1b8, &var_f0, &var_1c8)
    zmm10 = var_1c0
    void* r14_1 = &var_160
    zmm12 = var_1c4
    void* rdi_2 = &var_130[2]
    zmm13 = var_1c8
    int64_t rbx_2 = 0
    int64_t i_1
    
    do
        int64_t* rcx_3 = *r14_1
        void var_1a0
        void var_19c
        void var_198
        float zmm1_1[0x4]
        float zmm2_1[0x4]
        float zmm3_1[0x4]
        float zmm4_1
        float zmm5_2[0x4]
        
        if (rcx_3 == 0)
            *(&var_1a0 + rbx_2) = zmm6[0]
            *(&var_19c + rbx_2) = zmm7[0]
            *(&var_198 + rbx_2) = zmm8[0]
            *(&var_1b8 + rbx_2) = zmm13[0]
            *(&var_1b4 + rbx_2) = zmm12[0]
            *(&var_1b0 + rbx_2) = zmm10[0]
        else
            (*(*rcx_3 + 0xa0))(rcx_3, &var_150)
            int32_t var_148
            zmm14 = var_148
            int32_t var_14c
            zmm15 = var_14c
            int32_t var_144
            zmm2_1 = var_144
            zmm7 = var_150
            zmm15[0] = zmm15[0] + zmm15[0]
            zmm4_1 = zmm2_1[0]
            zmm13 = zmm2_1
            zmm7[0] = zmm7[0] + zmm7[0]
            zmm14[0] = zmm14[0] + zmm14[0]
            zmm15[0] = zmm15[0] * zmm15[0]
            zmm14[0] = zmm14[0] * zmm15[0]
            zmm2_1[0] = zmm2_1[0] * zmm14[0]
            zmm11[0] = zmm11[0] - zmm15[0]
            zmm14[0] = zmm14[0] * zmm14[0]
            zmm13[0] = zmm13[0] * zmm15[0]
            zmm12 = zmm2_1
            zmm4_1 = zmm4_1 * zmm7[0]
            zmm11[0] = zmm11[0] - zmm14[0]
            zmm15[0] = zmm15[0] * zmm7[0]
            zmm7[0] = zmm7[0] * zmm7[0]
            zmm12[0] = zmm12[0] + zmm15[0]
            zmm14[0] = zmm14[0] * zmm7[0]
            zmm15[0] = zmm15[0] - zmm2_1[0]
            zmm11[0] = zmm11[0] - zmm7[0]
            zmm14[0] = zmm14[0] + zmm4_1
            zmm14[0] = zmm14[0] - zmm4_1
            zmm14[0] = zmm14[0] - zmm13[0]
            zmm4_1 = zmm11[0]
            zmm13[0] = zmm13[0] + zmm14[0]
            zmm5_2 = arg_10
            zmm4_1 = zmm4_1 * zmm5_2[0]
            zmm11[0] = zmm11[0] - zmm14[0]
            zmm15[0] = zmm15[0] * zmm5_2[0]
            zmm14[0] = zmm14[0] * arg_8
            zmm11[0] = zmm11[0] - zmm15[0]
            zmm8 = arg_18
            zmm12[0] = zmm12[0] * zmm8[0]
            zmm13[0] = zmm13[0] * zmm5_2[0]
            zmm4_1 = zmm4_1 + zmm12[0]
            zmm11[0] = zmm11[0] * zmm8[0]
            zmm4_1 = zmm4_1 + zmm14[0]
            zmm14[0] = zmm14[0] * arg_8
            zmm15[0] = zmm15[0] + zmm11[0]
            zmm14[0] = zmm14[0] * zmm8[0]
            zmm15[0] = zmm15[0] + zmm14[0]
            *(&var_1a0 + rbx_2) = zmm4_1
            zmm11[0] = zmm11[0] * arg_8
            zmm13[0] = zmm13[0] + zmm14[0]
            *(&var_19c + rbx_2) = zmm15[0]
            zmm3_1 = var_1c8
            zmm13[0] = zmm13[0] + zmm11[0]
            zmm11[0] = zmm11[0] * zmm3_1[0]
            zmm1_1 = var_1c0
            zmm14[0] = zmm14[0] * zmm1_1[0]
            *(&var_198 + rbx_2) = zmm13[0]
            zmm2_1 = var_1c4
            zmm12[0] = zmm12[0] * zmm2_1[0]
            zmm15[0] = zmm15[0] * zmm3_1[0]
            zmm12[0] = zmm12[0] + zmm11[0]
            zmm12[0] = zmm12[0] + zmm14[0]
            zmm14[0] = zmm14[0] * zmm2_1[0]
            zmm2_1[0] = zmm2_1[0] * zmm11[0]
            zmm10 = zmm1_1
            zmm13[0] = zmm13[0] * zmm3_1[0]
            zmm15[0] = zmm15[0] + zmm2_1[0]
            zmm14[0] = zmm14[0] * zmm1_1[0]
            *(&var_1b8 + rbx_2) = zmm12[0]
            zmm14[0] = zmm14[0] + zmm13[0]
            zmm1_1[0] = zmm1_1[0] * zmm11[0]
            zmm11 = 0x3f800000
            zmm15[0] = zmm15[0] + zmm14[0]
            zmm12 = zmm2_1
            zmm13 = zmm3_1
            zmm14[0] = zmm14[0] + zmm1_1[0]
            *(&var_1b4 + rbx_2) = zmm15[0]
            *(&var_1b0 + rbx_2) = zmm14[0]
        
        zmm5_2 = *(&var_198 + rbx_2)
        zmm3_1 = *(&var_1b8 + rbx_2)
        zmm1_1 = *(&var_1a0 + rbx_2)
        zmm4_1 = zmm3_1[0]
        zmm6 = *(&var_19c + rbx_2)
        zmm7 = *(&var_1b4 + rbx_2)
        zmm9 = *(&var_1b0 + rbx_2)
        zmm7[0] = zmm7[0] * zmm5_2[0]
        zmm4_1 = zmm4_1 * zmm5_2[0]
        zmm1_1[0] = zmm1_1[0] * zmm7[0]
        zmm6[0] = zmm6[0] * zmm9[0]
        float var_188 = zmm1_1[0]
        float var_184_1 = zmm6[0]
        zmm6[0] = zmm6[0] - zmm7[0]
        float var_180_1 = zmm5_2[0]
        float var_17c_1 = zmm3_1[0]
        zmm1_1[0] = zmm1_1[0] * zmm9[0]
        float var_178_1 = zmm7[0]
        float var_174_1 = zmm9[0]
        zmm4_1 = zmm4_1 - zmm1_1[0]
        float var_170_1 = zmm6[0]
        zmm6[0] = zmm6[0] * zmm3_1[0]
        float var_16c_1 = zmm4_1
        zmm1_1[0] = zmm1_1[0] - zmm6[0]
        float var_168_1 = zmm1_1[0]
        int32_t* rax_7 = sub_142742ed0(&var_f0, &var_188)
        *(rdi_2 - 8) = *rax_7
        zmm2_1 = *(rdi_2 - 8)
        *(rdi_2 - 4) = rax_7[1]
        float zmm0_1[0x4] = *(rdi_2 - 4)
        int32_t rcx_7 = rax_7[2]
        zmm2_1[0] = zmm2_1[0] * zmm2_1[0]
        *rdi_2 = rcx_7
        zmm1_1 = *rdi_2
        zmm3_1 = rax_7[3]
        zmm1_1[0] = zmm1_1[0] * zmm1_1[0]
        zmm0_1[0] = zmm0_1[0] * zmm0_1[0]
        *(rdi_2 + 4) = zmm3_1[0]
        zmm3_1[0] = zmm3_1[0] * zmm3_1[0]
        zmm2_1[0] = zmm2_1[0] + zmm0_1[0]
        zmm2_1[0] = zmm2_1[0] + zmm1_1[0]
        zmm2_1[0] = zmm2_1[0] + zmm3_1[0]
        float temp0_2[0x4] = _mm_sqrt_ss(0, zmm2_1[0])
        
        if (not(temp0_2[0] == 0f))
            zmm11[0] = zmm11[0] / temp0_2[0]
            *(rdi_2 - 8) = _mm_mul_ps(_mm_shuffle_ps(zmm11, zmm11, 0), *(rdi_2 - 8))
        
        zmm6 = arg_10
        r14_1 += 8
        zmm7 = arg_18
        rbx_2 += 0xc
        zmm8 = arg_8
        rdi_2 += 0x1c
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)

int128_t* rbx_3 = &var_130
int64_t result

do
    result = (*(*arg1 + 0x38))(arg1, zx.q(i_2), rbx_3)
    i_2 += 1
    rbx_3 += 0x1c
while (i_2 u< 2)

return result
