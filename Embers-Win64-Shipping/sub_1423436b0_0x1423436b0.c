// 函数: sub_1423436b0
// 地址: 0x1423436b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r9 = *(arg1 + 0x110)

if (r9 == 0 || *(r9 + 0x78) - *(r9 + 0xa4) s<= 0)
    return 

int64_t r8 = sx.q(*(r9 + 0x30))
void* rbp_2 = r8 * 0xb0 + *(arg1 + 0x100)
int64_t* r12_1 = *(**(arg1 + 0x40) + (r8 << 3))
int32_t rdi_1 = 0
uint64_t rax = sx.q(r12_1[1].d)
uint64_t r15_1 = rax
*(r9 + 0xc0) = *arg2
*(r9 + 0xd0) = arg2[1]
*(r9 + 0xe0) = arg2[2]
*(r9 + 0xf0) = arg2[3]

if (rax.d s<= 0)
    return 

int64_t rbx_1 = 0
int64_t rsi_1 = 0
uint32_t zmm13[0x4] = data_143f58a90
float zmm6[0x4]
float var_38_1[0x4] = zmm6
float zmm7[0x4]
float var_48_1[0x4] = zmm7
float zmm8[0x4]
float var_58_1[0x4] = zmm8
float zmm9[0x4]
float var_68_1[0x4] = zmm9
float zmm10[0x4]
float var_78_1[0x4] = zmm10
float zmm11[0x4]
float var_88_1[0x4] = zmm11
float zmm12[0x4]
float var_98_1[0x4] = zmm12

do
    if (rbx_1 s>= 0 && rdi_1 s< *(rbp_2 + 0x98))
        void* rcx_1 = *(*(rbp_2 + 0x90) + (rbx_1 << 3))
        
        if (rcx_1 != 0)
            void* r9_1 = *(arg1 + 0x110)
            int32_t* rcx_8
            
            if (*(r9_1 + 0x78) == *(r9_1 + 0xa4))
            label_142343847:
                rcx_8 = nullptr
            else
                void* r8_1 = r9_1 + 0xa8
                void* rdx = *(r8_1 + 8)
                int64_t r10_1 = sx.q(*(*r12_1 + rsi_1 + 0x40))
                
                if (rdx != 0)
                    r8_1 = rdx
                
                int32_t rax_5 = *(r8_1 + (((sx.q(*(r9_1 + 0xb8)) - 1) & r10_1) << 2))
                
                if (rax_5 == 0xffffffff)
                label_142343847_1:
                    rcx_8 = nullptr
                else
                    while (true)
                        rcx_8 = sx.q(rax_5) * 0xa0 + *(r9_1 + 0x70)
                        
                        if (*rcx_8 == r10_1.d)
                            break
                        
                        rax_5 = rcx_8[0x24]
                        
                        if (rax_5 == 0xffffffff)
                            goto label_142343847_2
                    
                    if (rax_5 == 0xffffffff)
                    label_142343847_2:
                        rcx_8 = nullptr
            
            rax = &rcx_8[4]
            
            if (rcx_8 == 0)
                rax = 0
            
            if (rax != 0)
                float zmm1[0x4] = *(rax + 0x50)
                zmm11 = *(rax + 0x60)
                zmm9 = arg2[3]
                float temp0_1[0x4] = _mm_add_ps(zmm1, zmm1)
                float temp0_2[0x4] = _mm_shuffle_ps(zmm1, zmm1, 4)
                float temp0_3[0x4] = _mm_mul_ps(temp0_1, zmm1)
                float temp0_5[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_1, temp0_1, 0x29), temp0_2)
                float temp0_6[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xff)
                float temp0_9[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_3, temp0_3, 0x1a), 
                    _mm_shuffle_ps(temp0_3, temp0_3, 1))
                float temp0_11[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_1, temp0_1, 0x12), temp0_6)
                zmm1 = *(rax + 0x70)
                float temp0_12[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xc9)
                float temp0_13[0x4] = _mm_add_ps(temp0_11, temp0_5)
                float temp0_14[0x4] = _mm_sub_ps(temp0_5, temp0_11)
                float zmm3[0x4] = data_143f58a80
                float temp0_15[0x4] = _mm_mul_ps(temp0_13, zmm1)
                float temp0_16[0x4] = _mm_mul_ps(temp0_12, temp0_14)
                float temp0_17[0x4] = _mm_sub_ps(zmm3, temp0_9)
                zmm3[0].q = zmm11 u>> 0x40
                float temp0_18[0x4] = _mm_shuffle_ps(zmm11, zmm3, 0xc4)
                zmm3 = arg2[1]
                float zmm2[0x4] = _mm_and_ps(_mm_mul_ps(temp0_17, zmm1), zmm13)
                float temp0_21[0x4] = _mm_shuffle_ps(temp0_16, zmm2, 0x32)
                float temp0_23[0x4] =
                    _mm_shuffle_ps(_mm_shuffle_ps(temp0_15, zmm2, 0), temp0_21, 0x82)
                float temp0_24[0x4] = _mm_shuffle_ps(temp0_15, zmm2, 0x31)
                float temp0_25[0x4] = _mm_shuffle_ps(temp0_23, temp0_23, 0)
                float temp0_26[0x4] = _mm_shuffle_ps(temp0_23, temp0_23, 0xaa)
                float temp0_28[0x4] =
                    _mm_shuffle_ps(_mm_shuffle_ps(temp0_16, zmm2, 0x10), temp0_24, 0x88)
                float temp0_29[0x4] = _mm_shuffle_ps(temp0_23, temp0_23, 0x55)
                float temp0_30[0x4] = _mm_shuffle_ps(temp0_28, temp0_28, 0)
                float temp0_31[0x4] = _mm_mul_ps(temp0_29, zmm3)
                float temp0_32[0x4] = _mm_shuffle_ps(temp0_15, temp0_16, 0x12)
                float zmm5[0x4] = arg2[2]
                float temp0_33[0x4] = _mm_shuffle_ps(temp0_32, zmm2, 0xe8)
                zmm2 = *arg2
                float temp0_34[0x4] = _mm_mul_ps(temp0_26, zmm5)
                float temp0_35[0x4] = _mm_mul_ps(temp0_25, zmm2)
                float temp0_36[0x4] = _mm_mul_ps(temp0_30, zmm2)
                float temp0_37[0x4] = _mm_shuffle_ps(temp0_23, temp0_23, 0xff)
                float temp0_38[0x4] = _mm_add_ps(temp0_35, temp0_31)
                float temp0_39[0x4] = _mm_mul_ps(temp0_37, zmm9)
                float temp0_40[0x4] = _mm_shuffle_ps(temp0_33, temp0_33, 0)
                float temp0_42[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_28, temp0_28, 0x55), zmm3)
                float temp0_43[0x4] = _mm_add_ps(temp0_38, temp0_34)
                float temp0_44[0x4] = _mm_mul_ps(temp0_40, zmm2)
                float temp0_45[0x4] = _mm_shuffle_ps(temp0_28, temp0_28, 0xaa)
                float temp0_46[0x4] = _mm_add_ps(temp0_36, temp0_42)
                float temp0_47[0x4] = _mm_mul_ps(temp0_45, zmm5)
                float temp0_48[0x4] = _mm_shuffle_ps(temp0_28, temp0_28, 0xff)
                float temp0_49[0x4] = _mm_add_ps(temp0_43, temp0_39)
                float temp0_50[0x4] = _mm_mul_ps(temp0_48, zmm9)
                float temp0_52[0x4] = _mm_add_ps(_mm_add_ps(temp0_46, temp0_47), temp0_50)
                float temp0_53[0x4] = _mm_shuffle_ps(temp0_33, temp0_33, 0x55)
                float temp0_54[0x4] = _mm_shuffle_ps(temp0_33, temp0_33, 0xaa)
                float temp0_55[0x4] = _mm_shuffle_ps(temp0_18, temp0_18, 0)
                float temp0_56[0x4] = _mm_mul_ps(temp0_53, zmm3)
                float temp0_57[0x4] = _mm_mul_ps(temp0_54, zmm5)
                float temp0_58[0x4] = _mm_mul_ps(temp0_55, zmm2)
                float temp0_59[0x4] = _mm_add_ps(temp0_44, temp0_56)
                float temp0_61[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_33, temp0_33, 0xff), zmm9)
                float temp0_63[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_18, temp0_18, 0x55), zmm3)
                float temp0_64[0x4] = _mm_add_ps(temp0_59, temp0_57)
                float temp0_66[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_18, temp0_18, 0xaa), zmm5)
                float temp0_67[0x4] = _mm_add_ps(temp0_58, temp0_63)
                float temp0_69[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_18, temp0_18, 0xff), zmm9)
                float temp0_70[0x4] = _mm_add_ps(temp0_64, temp0_61)
                float temp0_72[0x4] = _mm_add_ps(_mm_add_ps(temp0_67, temp0_66), temp0_69)
                rax = sub_1423371a0(rcx_1 + 0x10, arg3)
                *rax = temp0_49
                *(rax + 0x10) = temp0_52
                *(rax + 0x20) = temp0_70
                *(rax + 0x30) = temp0_72
    
    rdi_1 += 1
    rbx_1 += 1
    rsi_1 += 0xe8
while (rbx_1 s< r15_1)
