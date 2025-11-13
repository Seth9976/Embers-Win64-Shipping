// 函数: sub_14240fbe0
// 地址: 0x14240fbe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax_1 = sub_142411e90(arg1, *(*(arg1 + 0x18) + (sx.q(*(arg1 + 0x20)) << 2) - 4))
int64_t rcx = *(arg1 + 0x28)
int64_t r8_1 = sx.q(*(arg1 + 0x30)) * 0xa
float zmm7[0x4] = *(rcx + (r8_1 << 3) - 0x50)
float zmm8[0x4] = *(rcx + (r8_1 << 3) - 0x40)
float zmm9[0x4] = *(rcx + (r8_1 << 3) - 0x30)
float zmm10[0x4] = *(rcx + (r8_1 << 3) - 0x20)
float zmm6[0x4] = *(rcx + (r8_1 << 3) - 0x10)

if (arg7 == 0 && *(arg1 + 0x94) == 0)
    float zmm0_1[0x4] = *(arg1 + 0xa4)
    float zmm3[0x4] = 0x3f800000
    
    if (not(zmm0_1[0] == 1f))
        zmm6 = data_142d3f660
        zmm3[0] = 1f / zmm0_1[0]
        int64_t var_bc_1 = 0
        int64_t var_c4_1 = 0
        int64_t var_b0_1 = 0
        int64_t var_a8_1 = 0
        int32_t var_9c_1 = 0
        float var_c8[0x4]
        float zmm2[0x4] = var_c8
        zmm2[0] = zmm3[0]
        var_c8 = zmm2
        float temp0_1[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
        float temp0_2[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
        float temp0_3[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
        float temp0_5[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), zmm10)
        float temp0_6[0x4] = _mm_mul_ps(temp0_2, zmm7)
        float temp0_7[0x4] = _mm_mul_ps(temp0_3, zmm9)
        float temp0_11[0x4] =
            _mm_add_ps(_mm_add_ps(_mm_add_ps(_mm_mul_ps(temp0_1, zmm8), temp0_6), temp0_7), temp0_5)
        zmm2 = var_bc_1:4.o
        float temp0_12[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xe1)
        temp0_12[0] = zmm3[0]
        float temp0_13[0x4] = _mm_shuffle_ps(temp0_12, temp0_12, 0xe1)
        var_bc_1:4.o = temp0_13
        float temp0_14[0x4] = _mm_shuffle_ps(temp0_13, temp0_13, 0x55)
        float temp0_15[0x4] = _mm_shuffle_ps(temp0_13, temp0_13, 0)
        float temp0_16[0x4] = _mm_shuffle_ps(temp0_13, temp0_13, 0xaa)
        float temp0_18[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_13, temp0_13, 0xff), zmm10)
        float temp0_19[0x4] = _mm_mul_ps(temp0_15, zmm7)
        float temp0_20[0x4] = _mm_mul_ps(temp0_16, zmm9)
        float temp0_21[0x4] = _mm_mul_ps(temp0_14, zmm8)
        var_c8 = temp0_11
        float temp0_24[0x4] =
            _mm_add_ps(_mm_add_ps(_mm_add_ps(temp0_21, temp0_19), temp0_20), temp0_18)
        zmm2 = var_a8_1.o
        float temp0_25[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xd2)
        temp0_25[0] = zmm3[0]
        float temp0_26[0x4] = _mm_shuffle_ps(temp0_25, temp0_25, 0xc9)
        var_a8_1.o = temp0_26
        float temp0_27[0x4] = _mm_shuffle_ps(temp0_26, temp0_26, 0x55)
        float temp0_28[0x4] = _mm_shuffle_ps(temp0_26, temp0_26, 0)
        float temp0_29[0x4] = _mm_shuffle_ps(temp0_26, temp0_26, 0xaa)
        float temp0_31[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_26, temp0_26, 0xff), zmm10)
        float temp0_32[0x4] = _mm_mul_ps(temp0_28, zmm7)
        float temp0_33[0x4] = _mm_mul_ps(temp0_29, zmm9)
        var_bc_1:4.o = temp0_24
        float temp0_35[0x4] = _mm_add_ps(_mm_mul_ps(temp0_27, zmm8), temp0_32)
        float temp0_37[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0), zmm7)
        float temp0_38[0x4] = _mm_add_ps(temp0_35, temp0_33)
        float temp0_40[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0xaa), zmm9)
        float temp0_41[0x4] = _mm_add_ps(temp0_38, temp0_31)
        float temp0_43[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0x55), zmm8)
        float temp0_45[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0xff), zmm10)
        var_a8_1.o = temp0_41
        float temp0_48[0x4] =
            _mm_add_ps(_mm_add_ps(_mm_add_ps(temp0_43, temp0_37), temp0_40), temp0_45)
        int32_t rax_2 = sub_140b212b0(&var_c8, 0x40, 0)
        zmm7 = var_c8
        zmm8 = var_bc_1:4.o
        zmm9 = var_a8_1.o
        zmm10 = temp0_48
        zmm6 = rax_2.o

if (*(rax_1 + 0x10) s> 0)
    int64_t* rcx_3 = *(*(rax_1 + 8) + (sx.q(*(rax_1 + 0x10)) << 3) - 8)
    void* rax_5 = (*(*rcx_3 + 0x18))(rcx_3)
    
    if (rax_5 != 0)
        void* result = *(rax_5 + 8)
        
        if (*(result + 0x230) == arg3 && *(result + 0x238) == arg4 && *(result + 0x240) == arg5
                && *(result + 0x244) == arg2 && *(result + 0x290) == zmm6[0])
            int32_t r8_3 = *(result + 0x2a0) & 1
            
            if ((*arg6 & 1) == r8_3)
                if (r8_3 == 0)
                    return result
                
                if (not((*(result + 0x2a4))[0] f!= arg6[1])
                        && not((*(result + 0x2a8))[0] f!= arg6[2])
                        && not((*(result + 0x2ac))[0] f!= arg6[3])
                        && not((*(result + 0x2b0))[0] f!= arg6[4])
                        && not((*(result + 0x2b4))[0] f!= arg6[5])
                        && not((*(result + 0x2b8))[0] f!= arg6[6])
                        && not((*(result + 0x2bc))[0] f!= arg6[7])
                        && not((*(result + 0x2c0))[0] f!= arg6[8]))
                    return result

void*** rax_10 = j_sub_140a82f30(0x10)
void*** rdi_1 = rax_10

if (rax_10 == 0)
    rdi_1 = nullptr
else
    *rdi_1 = &data_143344340
    void* rax_11 = j_sub_140a82f30(0x2d0)
    
    if (rax_11 == 0)
        rdi_1[1] = 0
    else
        __builtin_memset(rax_11, 0, 0x60)
        *(rax_11 + 0x60) = (sx.q(data_1439c7a30) u>> 2).d
        int64_t rax_14
        int64_t rdx_1
        rdx_1:rax_14 = mulu.dp.q(-0x5555555555555555, sx.q(data_1439c7a2c))
        uint32_t rdx_2 = (rdx_1 u>> 5).d
        
        if (rdx_2 u>= 0xffff)
            rdx_2 = 0xffff
        
        *(rax_11 + 0x64) = rdx_2
        *(rax_11 + 0x128) = 0
        *(rax_11 + 0x130) = 0
        *(rax_11 + 0x134) = 2
        *(rax_11 + 0x200) = 0
        *(rax_11 + 0x210) = 0
        *(rax_11 + 0x214) = 4
        *(rax_11 + 0x220) = 1
        *(rax_11 + 0x230) = arg3
        
        if (arg3 != 0)
            *(arg3 + 8) += 1
        
        *(rax_11 + 0x250) = zmm7
        *(rax_11 + 0x238) = arg4
        *(rax_11 + 0x260) = zmm8
        *(rax_11 + 0x240) = arg5
        *(rax_11 + 0x270) = zmm9
        *(rax_11 + 0x244) = arg2
        *(rax_11 + 0x280) = zmm10
        *(rax_11 + 0x290) = zmm6
        *(rax_11 + 0x2a0) = *arg6
        *(rax_11 + 0x2b0) = *(arg6 + 0x10)
        *(rax_11 + 0x2c0) = arg6[8]
        rdi_1[1] = rax_11

int64_t rsi_1 = sx.q(*(rax_1 + 0x10))
int32_t rcx_5 = (rsi_1 + 1).d
*(rax_1 + 0x10) = rcx_5

if (rcx_5 s> *(rax_1 + 0x14))
    sub_1405a4d70(rax_1 + 8)

*(*(rax_1 + 8) + (rsi_1 << 3)) = rdi_1
return rdi_1[1]
