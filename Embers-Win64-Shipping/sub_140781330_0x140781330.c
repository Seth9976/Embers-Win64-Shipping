// 函数: sub_140781330
// 地址: 0x140781330
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdx = 0
int64_t* rdi = *(**(**arg1 + 0x58) + (sx.q(*arg1[1]) << 3))
void* r8_2 = *rdi
void* r9_2 = sx.q(rdi[1].d) * 0xe8 + r8_2

while (r8_2 != r9_2)
    uint64_t rcx = zx.q(*(r8_2 + 0x30))
    r8_2 += 0xe8
    rdx = rdx + rcx.d + (rcx << 1).d

int64_t* rcx_1 = arg1[2]
int32_t rax_5 = rcx_1[1].d + rdx
rcx_1[1].d = rax_5

if (rax_5 s> *(rcx_1 + 0xc))
    sub_1405a4f90(rcx_1)

void* r10 = *rdi
int32_t r9_3 = 0
void* r15_1 = sx.q(rdi[1].d) * 0xe8 + r10
float zmm1[0x4]

if (r10 != r15_1)
    float zmm6[0x4]
    float var_28_1[0x4] = zmm6
    float zmm7[0x4]
    float var_38_1[0x4] = zmm7
    float zmm8[0x4]
    float var_48_1[0x4] = zmm8
    uint32_t zmm9[0x4] = data_143ce0350
    
    do
        int32_t rdi_1 = *(r10 + 0x30)
        int32_t r8_4 = 0
        
        if (rdi_1 != 0)
            int64_t rsi_1 = *arg1[2]
            void* r11_1 = **arg1
            
            do
                uint64_t rdx_2 = zx.q(*(*(r10 + 0x28) + (sx.q(r8_4) << 1)))
                int128_t* rax_12 = rdx_2 * 0x30 + *arg2
                zmm1 = *rax_12
                float temp0_1[0x4] = _mm_add_ps(zmm1, zmm1)
                float temp0_2[0x4] = _mm_shuffle_ps(zmm1, zmm1, 4)
                float temp0_3[0x4] = _mm_mul_ps(temp0_1, zmm1)
                float temp0_5[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_1, temp0_1, 0x29), temp0_2)
                float temp0_6[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xff)
                float temp0_7[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0x1a)
                float temp0_8[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0x12)
                float temp0_10[0x4] = _mm_add_ps(temp0_7, _mm_shuffle_ps(temp0_3, temp0_3, 1))
                float temp0_11[0x4] = _mm_mul_ps(temp0_8, temp0_6)
                zmm1 = rax_12[2]
                float (* rax_13)[0x4]
                float zmm2[0x4]
                float zmm3[0x4]
                float zmm4[0x4]
                
                if (rdx_2.d s>= *(r11_1 + 0x2e8))
                    zmm4 = data_143ce0340
                    float temp0_73[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xc9)
                    float temp0_74[0x4] = _mm_sub_ps(zmm4, temp0_10)
                    float temp0_75[0x4] = _mm_add_ps(temp0_11, temp0_5)
                    float temp0_76[0x4] = _mm_sub_ps(temp0_5, temp0_11)
                    float temp0_77[0x4] = _mm_mul_ps(temp0_74, zmm1)
                    float temp0_78[0x4] = _mm_mul_ps(temp0_75, zmm1)
                    float temp0_79[0x4] = _mm_mul_ps(temp0_73, temp0_76)
                    zmm3 = _mm_and_ps(temp0_77, zmm9)
                    float temp0_83[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_78, zmm3, 0), 
                        _mm_shuffle_ps(temp0_79, zmm3, 0x32), 0x82)
                    float temp0_84[0x4] = _mm_shuffle_ps(temp0_78, zmm3, 0x31)
                    float temp0_86[0x4] =
                        _mm_shuffle_ps(_mm_shuffle_ps(temp0_79, zmm3, 0x10), temp0_84, 0x88)
                    float zmm0[0x4] = rax_12[1]
                    float var_98[0x4]
                    rax_13 = &var_98
                    zmm4[0].q = zmm0 u>> 0x40
                    float temp0_87[0x4] = _mm_shuffle_ps(temp0_78, temp0_79, 0x12)
                    float temp0_88[0x4] = _mm_shuffle_ps(zmm0, zmm4, 0xc4)
                    float temp0_89[0x4] = _mm_shuffle_ps(temp0_87, zmm3, 0xe8)
                    float var_68_1[0x4] = temp0_88
                    var_98 = temp0_83
                    float var_88_1[0x4] = temp0_86
                    float var_78_1[0x4] = temp0_89
                else
                    zmm3 = data_143ce0340
                    zmm6 = rax_12[1]
                    float temp0_12[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xc9)
                    float temp0_13[0x4] = _mm_add_ps(temp0_11, temp0_5)
                    float temp0_14[0x4] = _mm_sub_ps(temp0_5, temp0_11)
                    float (* rcx_5)[0x4] = (zx.q(rdx_2.d) << 6) + *(r11_1 + 0x2e0)
                    float temp0_15[0x4] = _mm_mul_ps(temp0_13, zmm1)
                    float temp0_16[0x4] = _mm_mul_ps(temp0_12, temp0_14)
                    float temp0_17[0x4] = _mm_sub_ps(zmm3, temp0_10)
                    zmm3[0].q = zmm6 u>> 0x40
                    float temp0_18[0x4] = _mm_shuffle_ps(zmm6, zmm3, 0xc4)
                    zmm2 = _mm_and_ps(_mm_mul_ps(temp0_17, zmm1), zmm9)
                    float temp0_21[0x4] = _mm_shuffle_ps(temp0_16, zmm2, 0x32)
                    float temp0_23[0x4] =
                        _mm_shuffle_ps(_mm_shuffle_ps(temp0_15, zmm2, 0), temp0_21, 0x82)
                    float temp0_24[0x4] = _mm_shuffle_ps(temp0_15, zmm2, 0x31)
                    float temp0_25[0x4] = _mm_shuffle_ps(temp0_16, zmm2, 0x10)
                    float temp0_27[0x4] =
                        _mm_shuffle_ps(_mm_shuffle_ps(temp0_15, temp0_16, 0x12), zmm2, 0xe8)
                    zmm2 = *rcx_5
                    float temp0_28[0x4] = _mm_shuffle_ps(temp0_25, temp0_24, 0x88)
                    float temp0_29[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
                    float temp0_30[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
                    float temp0_31[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
                    float temp0_32[0x4] = _mm_mul_ps(temp0_29, temp0_23)
                    float temp0_34[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), temp0_18)
                    float temp0_35[0x4] = _mm_mul_ps(temp0_30, temp0_28)
                    float temp0_36[0x4] = _mm_mul_ps(temp0_31, temp0_27)
                    float temp0_39[0x4] =
                        _mm_add_ps(_mm_add_ps(_mm_add_ps(temp0_32, temp0_35), temp0_36), temp0_34)
                    zmm2 = rcx_5[1]
                    float temp0_40[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
                    float temp0_41[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
                    float temp0_42[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
                    float temp0_43[0x4] = _mm_mul_ps(temp0_40, temp0_23)
                    float var_d8[0x4] = temp0_39
                    float temp0_45[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), temp0_18)
                    float temp0_46[0x4] = _mm_mul_ps(temp0_41, temp0_28)
                    float temp0_47[0x4] = _mm_mul_ps(temp0_42, temp0_27)
                    float temp0_50[0x4] =
                        _mm_add_ps(_mm_add_ps(_mm_add_ps(temp0_43, temp0_46), temp0_47), temp0_45)
                    zmm2 = rcx_5[2]
                    float temp0_51[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
                    float temp0_52[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
                    float temp0_53[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
                    float temp0_54[0x4] = _mm_mul_ps(temp0_51, temp0_23)
                    float var_c8_1[0x4] = temp0_50
                    float temp0_56[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), temp0_18)
                    float temp0_57[0x4] = _mm_mul_ps(temp0_52, temp0_28)
                    float temp0_58[0x4] = _mm_mul_ps(temp0_53, temp0_27)
                    float temp0_61[0x4] =
                        _mm_add_ps(_mm_add_ps(_mm_add_ps(temp0_54, temp0_57), temp0_58), temp0_56)
                    zmm2 = rcx_5[3]
                    float temp0_63[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0), temp0_23)
                    float var_b8_1[0x4] = temp0_61
                    rax_13 = &var_d8
                    float temp0_64[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
                    float temp0_65[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
                    float temp0_66[0x4] = _mm_mul_ps(temp0_64, temp0_28)
                    float temp0_67[0x4] = _mm_mul_ps(temp0_65, temp0_27)
                    float temp0_68[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xff)
                    float temp0_69[0x4] = _mm_add_ps(temp0_63, temp0_66)
                    float temp0_70[0x4] = _mm_mul_ps(temp0_68, temp0_18)
                    float var_a8_1[0x4] = _mm_add_ps(_mm_add_ps(temp0_69, temp0_67), temp0_70)
                
                zmm2 = *rax_13
                r8_4 += 1
                zmm3 = rax_13[1]
                zmm4 = rax_13[2]
                float zmm5[0x4] = rax_13[3]
                float temp0_90[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
                float temp0_91[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0x55)
                int64_t rax_14 = sx.q(r9_3)
                r9_3 += 3
                float* rax_16 = (rax_14 << 4) + rsi_1
                rax_16[4] = temp0_90[0]
                rax_16[5] = temp0_91[0]
                float temp0_92[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0x55)
                float temp0_93[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0x55)
                *rax_16 = zmm2[0]
                rax_16[1] = zmm3[0]
                rax_16[2] = zmm4[0]
                rax_16[3] = zmm5[0]
                float temp0_94[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xaa)
                float temp0_95[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xaa)
                float temp0_96[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
                float temp0_97[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xaa)
                rax_16[0xa] = temp0_94[0]
                rax_16[0xb] = temp0_95[0]
                rax_16[6] = temp0_92[0]
                rax_16[7] = temp0_93[0]
                rax_16[8] = temp0_96[0]
                rax_16[9] = temp0_97[0]
            while (r8_4 u< rdi_1)
        
        r10 += 0xe8
    while (r10 != r15_1)

void* rax_17 = arg1[4]
uint64_t* rcx_6 = arg1[3]
int32_t rdx_5 = (*(rax_17 + 0x14) + *(rax_17 + 0x10)) * 2

if (rdx_5 s> *(rcx_6 + 0xc))
    sub_1405a5410(rcx_6, rdx_5)

void* rsi_2 = *arg2
void* r15_4 = sx.q(arg2[1].d) * 0x30 + rsi_2
float var_108

if (rsi_2 != r15_4)
    int32_t var_fc_1 = 0x3f800000
    
    do
        zmm1 = *(rsi_2 + 0x10)
        int64_t* rdi_2 = arg1[3]
        float var_f8_1[0x4] = *rsi_2
        float temp0_98[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0x55)
        int64_t r14_1 = sx.q(rdi_2[1].d)
        var_108 = zmm1[0]
        float temp0_99[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xaa)
        float var_104_1 = temp0_98[0]
        int32_t rax_19 = (r14_1 + 1).d
        float var_100_1 = temp0_99[0]
        rdi_2[1].d = rax_19
        
        if (rax_19 s> *(rdi_2 + 0xc))
            sub_1405a4f90(rdi_2)
        
        int32_t var_e8
        var_e8.o = var_f8_1
        *(*rdi_2 + r14_1 * 0x10) = var_108.o
        int64_t* rdi_3 = arg1[3]
        int64_t r14_2 = sx.q(rdi_3[1].d)
        int32_t rax_21 = (r14_2 + 1).d
        rdi_3[1].d = rax_21
        
        if (rax_21 s> *(rdi_3 + 0xc))
            sub_1405a4f90(rdi_3)
        
        rsi_2 += 0x30
        *(*rdi_3 + r14_2 * 0x10) = var_e8.o
    while (rsi_2 != r15_4)

void* rcx_13 = *arg1[5]
uint64_t rax_25 = zx.q(*(rcx_13 + 0x1c4)) * 2
void* rsi_3 = *(rcx_13 + (rax_25 << 3) + 0x1c8)
int64_t result = sx.q(*(rcx_13 + (rax_25 << 3) + 0x1d0))
void* r15_7 = result * 0x30 + rsi_3

if (rsi_3 != r15_7)
    int32_t var_dc_1 = 0x3f800000
    
    do
        zmm1 = *(rsi_3 + 0x10)
        int64_t* rdi_4 = arg1[3]
        float var_f8_2[0x4] = *rsi_3
        float temp0_100[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0x55)
        int64_t r14_3 = sx.q(rdi_4[1].d)
        float var_e8_1 = zmm1[0]
        float temp0_101[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xaa)
        float var_e4_1 = temp0_100[0]
        int32_t rax_26 = (r14_3 + 1).d
        float var_e0_1 = temp0_101[0]
        rdi_4[1].d = rax_26
        
        if (rax_26 s> *(rdi_4 + 0xc))
            sub_1405a4f90(rdi_4)
        
        var_108.o = var_f8_2
        *(*rdi_4 + r14_3 * 0x10) = var_e8_1.o
        int64_t* rdi_5 = arg1[3]
        int64_t r14_4 = sx.q(rdi_5[1].d)
        int32_t rax_28 = (r14_4 + 1).d
        rdi_5[1].d = rax_28
        
        if (rax_28 s> *(rdi_5 + 0xc))
            sub_1405a4f90(rdi_5)
        
        result = *rdi_5
        rsi_3 += 0x30
        *(result + r14_4 * 0x10) = var_108.o
    while (rsi_3 != r15_7)

return result
