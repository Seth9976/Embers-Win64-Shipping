// 函数: sub_141f4f8c0
// 地址: 0x141f4f8c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = 0
*arg1 = 0
void* rbx = arg3
arg1[1].d = 0
void* rax = sub_140d3c6e0(arg2 + 0x438)
void* r12 = arg2

if (rax != 0)
    r12 = rax

int32_t rbp_1 = arg6 + *(rbx + 0x10)
int32_t rax_1 = *(arg5 + 0x24)

if (rax_1 s> 0)
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
    uint128_t zmm11
    uint128_t var_98_1 = zmm11
    int32_t var_13c_1 = 0x3f800000
    
    do
        int64_t rcx_2 = sx.q(sub_1422c5b30(arg5, zx.q(rbp_1), rdi))
        uint64_t rbx_1 = zx.q(*(*(rbx + 0x28) + (rcx_2 << 1)))
        uint64_t r14_1 = zx.q(rbx_1.d)
        
        if (rax != 0)
            rbx_1 = zx.q(*(*(arg2 + 0x4b0) + (rbx_1 << 2)))
        
        zmm11.d = _mm_cvtepi32_ps(zx.o(sub_1422c5bb0(arg5, zx.q(rbp_1), rdi))).d f* 0.00392156886f
        int128_t* rax_8
        float zmm3[0x4]
        float zmm1[0x4]
        
        if (rbx_1.d == 0xffffffff)
            float var_e8[0x4]
            rax_8 = &var_e8
            zmm1 = data_14399f6f0
            var_e8 = data_14399f6e0
            float var_d8_1[0x4] = zmm1
            float var_c8_1[0x4] = data_14399f700
            float var_b8_1[0x4] = data_14399f710
        else
            float var_128[0x4]
            rax_8 = &var_128
            int128_t* rdx_4 = sx.q(rbx_1.d) * 0x30 + *(r12 + (sx.q(*(r12 + 0x494)) + 0x45) * 0x10)
            zmm1 = *rdx_4
            float temp0_2[0x4] = _mm_shuffle_ps(zmm1, zmm1, 4)
            float temp0_3[0x4] = _mm_add_ps(zmm1, zmm1)
            float temp0_5[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_3, temp0_3, 0x29), temp0_2)
            float temp0_6[0x4] = _mm_mul_ps(temp0_3, zmm1)
            float temp0_9[0x4] =
                _mm_mul_ps(_mm_shuffle_ps(temp0_3, temp0_3, 0x12), _mm_shuffle_ps(zmm1, zmm1, 0xff))
            zmm1 = rdx_4[2]
            float temp0_10[0x4] = _mm_shuffle_ps(temp0_6, temp0_6, 0x1a)
            float temp0_11[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xc9)
            float temp0_13[0x4] = _mm_add_ps(temp0_10, _mm_shuffle_ps(temp0_6, temp0_6, 1))
            float zmm4[0x4] = data_143f3b870
            float temp0_14[0x4] = _mm_add_ps(temp0_9, temp0_5)
            float temp0_15[0x4] = _mm_sub_ps(temp0_5, temp0_9)
            float temp0_16[0x4] = _mm_sub_ps(zmm4, temp0_13)
            float temp0_17[0x4] = _mm_mul_ps(temp0_14, zmm1)
            float temp0_18[0x4] = _mm_mul_ps(temp0_11, temp0_15)
            zmm3 = __andps_xmmxud_memxud(_mm_mul_ps(temp0_16, zmm1), data_143f3b880)
            float temp0_21[0x4] = _mm_shuffle_ps(temp0_18, zmm3, 0x32)
            float temp0_23[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_17, zmm3, 0), temp0_21, 0x82)
            float temp0_24[0x4] = _mm_shuffle_ps(temp0_17, zmm3, 0x31)
            float temp0_26[0x4] =
                _mm_shuffle_ps(_mm_shuffle_ps(temp0_18, zmm3, 0x10), temp0_24, 0x88)
            float zmm0[0x4] = rdx_4[1]
            zmm4[0].q = zmm0 u>> 0x40
            float temp0_27[0x4] = _mm_shuffle_ps(temp0_17, temp0_18, 0x12)
            float temp0_28[0x4] = _mm_shuffle_ps(zmm0, zmm4, 0xc4)
            float temp0_29[0x4] = _mm_shuffle_ps(temp0_27, zmm3, 0xe8)
            float var_f8_1[0x4] = temp0_28
            var_128 = temp0_23
            float var_118_1[0x4] = temp0_26
            float var_108_1[0x4] = temp0_29
        zmm3 = rax_8[1]
        zmm6 = *rax_8
        zmm8 = rax_8[2]
        zmm9 = rax_8[3]
        int64_t var_138_1 = 0
        float (* r14_3)[0x4] = (r14_1 << 6) + *(*(arg2 + 0x430) + 0x2e0)
        int32_t var_130_1 = 0
        float zmm2[0x4] = *r14_3
        float (* rcx_9)[0x4] = zx.q(rbp_1 * *(arg4 + 0x30)) + *(arg4 + 0x28)
        float temp0_30[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
        float temp0_31[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
        float temp0_32[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
        float temp0_33[0x4] = _mm_mul_ps(temp0_30, zmm6)
        float temp0_34[0x4] = _mm_mul_ps(temp0_31, zmm8)
        float temp0_36[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), zmm9)
        float temp0_40[0x4] = _mm_add_ps(
            _mm_add_ps(_mm_add_ps(_mm_mul_ps(temp0_32, zmm3), temp0_33), temp0_34), temp0_36)
        zmm2 = r14_3[1]
        float temp0_41[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
        float temp0_42[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
        float temp0_44[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0x55), zmm3)
        float temp0_45[0x4] = _mm_mul_ps(temp0_41, zmm6)
        float temp0_46[0x4] = _mm_mul_ps(temp0_42, zmm8)
        float temp0_47[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xff)
        float temp0_48[0x4] = _mm_add_ps(temp0_44, temp0_45)
        float temp0_49[0x4] = _mm_mul_ps(temp0_47, zmm9)
        float temp0_51[0x4] = _mm_add_ps(_mm_add_ps(temp0_48, temp0_46), temp0_49)
        zmm2 = r14_3[2]
        float temp0_52[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
        float temp0_53[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
        float temp0_55[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0x55), zmm3)
        float temp0_56[0x4] = _mm_mul_ps(temp0_52, zmm6)
        float temp0_57[0x4] = _mm_mul_ps(temp0_53, zmm8)
        float temp0_58[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xff)
        float temp0_59[0x4] = _mm_add_ps(temp0_55, temp0_56)
        float temp0_60[0x4] = _mm_mul_ps(temp0_58, zmm9)
        float temp0_62[0x4] = _mm_add_ps(_mm_add_ps(temp0_59, temp0_57), temp0_60)
        zmm2 = r14_3[3]
        float temp0_64[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0x55), zmm3)
        float temp0_65[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
        float temp0_66[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
        float temp0_67[0x4] = _mm_mul_ps(temp0_65, zmm6)
        float temp0_68[0x4] = _mm_mul_ps(temp0_66, zmm8)
        float temp0_69[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xff)
        float temp0_70[0x4] = _mm_add_ps(temp0_64, temp0_67)
        float temp0_71[0x4] = _mm_mul_ps(temp0_69, zmm9)
        float var_148[0x4]
        var_148[0] = (*rcx_9)[0]
        float temp0_72[0x4] = _mm_shuffle_ps(var_148, var_148, 0xe1)
        float temp0_73[0x4] = _mm_add_ps(temp0_70, temp0_68)
        temp0_72[0] = (*rcx_9)[1][0]
        float temp0_74[0x4] = _mm_shuffle_ps(temp0_72, temp0_72, 0xc6)
        float temp0_75[0x4] = _mm_add_ps(temp0_73, temp0_71)
        rbx = arg3
        temp0_74[0] = (*rcx_9)[2][0]
        float temp0_76[0x4] = _mm_shuffle_ps(temp0_74, temp0_74, 0xc9)
        rdi += 1
        float temp0_77[0x4] = _mm_shuffle_ps(temp0_76, temp0_76, 0x55)
        float temp0_78[0x4] = _mm_shuffle_ps(temp0_76, temp0_76, 0xff)
        float temp0_79[0x4] = _mm_shuffle_ps(temp0_76, temp0_76, 0)
        float temp0_80[0x4] = _mm_mul_ps(temp0_77, temp0_51)
        float temp0_81[0x4] = _mm_mul_ps(temp0_78, temp0_75)
        float temp0_82[0x4] = _mm_mul_ps(temp0_79, temp0_40)
        var_148 = temp0_76
        float temp0_84[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_76, temp0_76, 0xaa), temp0_62)
        float temp0_87[0x4] =
            _mm_add_ps(_mm_add_ps(temp0_80, temp0_82), _mm_add_ps(temp0_81, temp0_84))
        float temp0_88[0x4] = _mm_shuffle_ps(temp0_87, temp0_87, 0x55)
        float temp0_89[0x4] = _mm_shuffle_ps(temp0_87, temp0_87, 0xaa)
        temp0_89[0] = temp0_89[0] f* zmm11.d
        temp0_87[0] = temp0_87[0] f* zmm11.d
        temp0_89[0] = temp0_89[0] f+ arg1[1].d
        temp0_88[0] = temp0_88[0] f* zmm11.d
        temp0_87[0] = temp0_87[0] f+ *arg1
        temp0_88[0] = temp0_88[0] f+ *(arg1 + 4)
        arg1[1].d = temp0_89[0]
        *arg1 = temp0_87[0]
        *(arg1 + 4) = temp0_88[0]
    while (rdi s< rax_1)

return arg1
