// 函数: sub_141ee38f0
// 地址: 0x141ee38f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm10[0x4] = *(arg1 + 0x80)
int64_t* rdi = arg2
float zmm11[0x4] = *(arg1 + 0x90)
float zmm12[0x4] = *(arg1 + 0xa0)
float zmm13[0x4] = *(arg1 + 0xb0)
void*** rax = j_sub_140a82f30(0x1b0)
void*** var_1f0 = rax
void*** r14 = rax
int128_t var_1e0
char arg_8
int128_t zmm6

if (rax == 0)
    r14 = nullptr
    var_1f0 = nullptr
else
    sub_140acc920(&var_1e0, arg1 + 0x49c)
    int64_t* rax_1
    rax_1, zmm6 = sub_140b58170(&arg_8, "GizmoColor", 1)
    int64_t rbx_1 = *rax_1
    int64_t* rcx_2 = *(data_143f5b298 + 0x588)
    int64_t rax_4 = (*(*rcx_2 + 0x280))(rcx_2)
    sub_142118c70(r14)
    r14[0x32] = rax_4
    rdi = arg2
    *r14 = &data_142e0eff8
    int128_t zmm0_1 = var_1e0
    r14[0x35] = rbx_1
    *(r14 + 0x198) = zmm0_1

int64_t* rbx_2 = arg5
int64_t r13 = sx.q(rbx_2[0x16].d)
int32_t rax_5 = (r13 + 1).d
rbx_2[0x16].d = rax_5

if (rax_5 s> *(rbx_2 + 0xb4))
    zmm6 = sub_14083a310(&rbx_2[0x15], r13.d)

uint64_t result = rbx_2[0x15]
int32_t i = 0
*(result + (r13 << 3)) = r14

if (rdi[1].d s> 0)
    result = zx.q(arg4)
    int32_t r15_1 = 1
    int64_t* rcx_5 = nullptr
    int128_t zmm7 = 0x3f800000
    int128_t zmm9 = zx.o(0)
    int128_t var_48_1 = zmm6
    int128_t zmm8
    int128_t var_68_1 = zmm8
    int64_t* var_1e8_1 = nullptr
    
    do
        if ((result.d & r15_1) != 0)
            zmm8 = zmm7
            
            if (*(arg1 + 0x4a4) != 0)
                void* rcx_6 = *(rcx_5 + *rdi)
                
                if (not(zmm7.d f== *(rcx_6 + 0x2bc)))
                    zmm6 = __minss_xmmss_memss((*(rcx_6 + 0x294)).d, *(rcx_6 + 0x280))
                    
                    if (not(zmm6.d f== zmm9.d))
                        float var_c8[0x4]
                        float (* rax_7)[0x4] = sub_1422f9c00(rcx_6, &var_c8, arg1 + 0x490)
                        int128_t zmm0_2
                        zmm0_2.d = (*(arg1 + 0x4a8)).d f/ zmm6.d
                        zmm0_2.d = zmm0_2.d f* (*rax_7)[3]
                        
                        if (not(zmm0_2.d f>= zmm7.d) && not(zmm0_2.d f<= zmm9.d))
                            zmm8 = zmm0_2
            
            int32_t rax_8 = sub_14081f8e0(rbx_2, 1)
            arg_8 = 0
            int64_t* rdi_4 = zx.q(rax_8 s% 0x66) * 0xa0 + *(*rbx_2 + (sx.q(rax_8 s/ 0x66) << 3))
            int64_t* r13_1 = rdi_4
            int64_t* rax_10 = rdi_4[0xd]
            
            if (rax_10 != 0)
                r13_1 = rax_10
            
            r13_1[2] = arg1 + 0x258
            *(rdi_4 + 0x9c) &= 0xffffffbf
            rdi_4[0xf] = arg1 + 0x280
            var_1e0:8.q = &arg_8
            var_1e0.q = j_sub_140597fc0
            rdi_4[0x10] = r14
            void* rax_13 = sub_140a756e0(&var_1e0, &data_143958018)
            void*** rbx_5 = (*(rax_13 + 0x10) + 0xf) & 0xfffffffffffffff0
            void* rax_14 = &rbx_5[6]
            
            if (rax_14 u> *(rax_13 + 0x18))
                sub_140b0e3d0(rax_13 + 0x10, 0x40)
                rbx_5 = (*(rax_13 + 0x10) + 0xf) & 0xfffffffffffffff0
                rax_14 = &rbx_5[6]
            
            *(rax_13 + 0x10) = rax_14
            
            if (rbx_5 != 0)
                rbx_5[2] = 0
                rbx_5[3] = 0
                *rbx_5 = &data_142e0f070
                rbx_5[2].d = 0xffffffff
                *(rbx_5 + 0x14) = 4
                rbx_5[1] = &data_142d99570
                rbx_5[3].d = 2
                rbx_5[4] = 0
                rbx_5[5] = 0
            
            int32_t rcx_14 = arg5[0x18].d
            arg5[0x18].d = rcx_14 + 1
            
            if (rcx_14 + 1 s> *(arg5 + 0xc4))
                sub_14083a310(&arg5[0x17], rcx_14)
            
            float zmm4_1[0x4] = data_142d3f660
            int64_t rax_16 = arg5[0x17]
            int64_t var_1bc_1 = 0
            int64_t var_1c4_1 = 0
            float var_1c8[0x4]
            float zmm3[0x4] = var_1c8
            zmm3[0] = zmm8.d
            int64_t var_1b0_1 = 0
            var_1c8 = zmm3
            float zmm2[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0x55)
            float zmm0_3[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0)
            float zmm1_1[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xaa)
            zmm3 = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0xff), zmm13)
            int64_t var_1a8_1 = 0
            zmm2 = _mm_mul_ps(zmm2, zmm11)
            int32_t var_19c_1 = 0
            zmm0_3 = _mm_mul_ps(zmm0_3, zmm10)
            zmm1_1 = _mm_mul_ps(zmm1_1, zmm12)
            zmm2 = _mm_add_ps(zmm2, zmm0_3)
            *(rax_16 + (sx.q(rcx_14) << 3)) = rbx_5
            int64_t rcx_16
            rcx_16.b = *(arg1 + 0x32) - 1 u<= 1
            zmm2 = _mm_add_ps(_mm_add_ps(zmm2, zmm1_1), zmm3)
            zmm3 = var_1bc_1:4.o
            zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xe1)
            zmm3[0] = zmm8.d
            zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xe1)
            var_1bc_1:4.o = zmm3
            zmm0_3 = _mm_shuffle_ps(zmm3, zmm3, 0)
            zmm1_1 = _mm_shuffle_ps(zmm3, zmm3, 0xaa)
            float var_148[0x4] = zmm2
            zmm2 = _mm_shuffle_ps(zmm3, zmm3, 0x55)
            zmm3 = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0xff), zmm13)
            zmm2 = _mm_mul_ps(zmm2, zmm11)
            zmm0_3 = _mm_mul_ps(zmm0_3, zmm10)
            zmm1_1 = _mm_mul_ps(zmm1_1, zmm12)
            zmm2 = _mm_add_ps(_mm_add_ps(_mm_add_ps(zmm2, zmm0_3), zmm1_1), zmm3)
            zmm3 = var_1a8_1.o
            zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xd2)
            zmm3[0] = zmm8.d
            zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xc9)
            var_1a8_1.o = zmm3
            zmm0_3 = _mm_shuffle_ps(zmm3, zmm3, 0)
            zmm1_1 = _mm_shuffle_ps(zmm3, zmm3, 0xaa)
            float var_138_1[0x4] = zmm2
            zmm2 = _mm_shuffle_ps(zmm3, zmm3, 0x55)
            zmm3 = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0xff), zmm13)
            zmm0_3 = _mm_mul_ps(zmm0_3, zmm10)
            zmm1_1 = _mm_mul_ps(zmm1_1, zmm12)
            zmm2 = _mm_add_ps(_mm_mul_ps(zmm2, zmm11), zmm0_3)
            zmm0_3 = _mm_mul_ps(_mm_shuffle_ps(zmm4_1, zmm4_1, 0), zmm10)
            zmm2 = _mm_add_ps(zmm2, zmm1_1)
            zmm1_1 = _mm_mul_ps(_mm_shuffle_ps(zmm4_1, zmm4_1, 0xaa), zmm12)
            float var_128_1[0x4] = _mm_add_ps(zmm2, zmm3)
            int64_t var_17c_1 = 0
            int64_t var_184_1 = 0
            int64_t var_170_1 = 0
            int64_t var_168_1 = 0
            int32_t var_15c_1 = 0
            zmm3 = _mm_add_ps(
                _mm_add_ps(
                    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm4_1, zmm4_1, 0x55), zmm11), zmm0_3), 
                    zmm1_1), 
                _mm_mul_ps(_mm_shuffle_ps(zmm4_1, zmm4_1, 0xff), zmm13))
            zmm4_1 = data_142d3f660
            float var_118_1[0x4] = zmm3
            float var_188[0x4]
            zmm3 = var_188
            zmm3[0] = zmm8.d
            var_188 = zmm3
            zmm2 = _mm_shuffle_ps(zmm3, zmm3, 0x55)
            zmm0_3 = _mm_shuffle_ps(zmm3, zmm3, 0)
            zmm1_1 = _mm_shuffle_ps(zmm3, zmm3, 0xaa)
            zmm3 = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0xff), zmm13)
            zmm2 = _mm_mul_ps(zmm2, zmm11)
            zmm0_3 = _mm_mul_ps(zmm0_3, zmm10)
            zmm1_1 = _mm_mul_ps(zmm1_1, zmm12)
            zmm2 = _mm_add_ps(_mm_add_ps(_mm_add_ps(zmm2, zmm0_3), zmm1_1), zmm3)
            zmm3 = var_17c_1:4.o
            zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xe1)
            zmm3[0] = zmm8.d
            zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xe1)
            var_17c_1:4.o = zmm3
            zmm0_3 = _mm_shuffle_ps(zmm3, zmm3, 0)
            zmm1_1 = _mm_shuffle_ps(zmm3, zmm3, 0xaa)
            float var_108[0x4] = zmm2
            zmm2 = _mm_shuffle_ps(zmm3, zmm3, 0x55)
            zmm3 = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0xff), zmm13)
            zmm2 = _mm_mul_ps(zmm2, zmm11)
            zmm0_3 = _mm_mul_ps(zmm0_3, zmm10)
            zmm1_1 = _mm_mul_ps(zmm1_1, zmm12)
            zmm2 = _mm_add_ps(_mm_add_ps(_mm_add_ps(zmm2, zmm0_3), zmm1_1), zmm3)
            zmm3 = var_168_1.o
            zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xd2)
            zmm3[0] = zmm8.d
            zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xc9)
            var_168_1.o = zmm3
            zmm0_3 = _mm_shuffle_ps(zmm3, zmm3, 0)
            zmm1_1 = _mm_shuffle_ps(zmm3, zmm3, 0xaa)
            float var_f8_1[0x4] = zmm2
            zmm2 = _mm_shuffle_ps(zmm3, zmm3, 0x55)
            zmm3 = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0xff), zmm13)
            zmm0_3 = _mm_mul_ps(zmm0_3, zmm10)
            zmm1_1 = _mm_mul_ps(zmm1_1, zmm12)
            zmm2 = _mm_add_ps(_mm_mul_ps(zmm2, zmm11), zmm0_3)
            zmm0_3 = _mm_mul_ps(_mm_shuffle_ps(zmm4_1, zmm4_1, 0), zmm10)
            zmm2 = _mm_add_ps(zmm2, zmm1_1)
            zmm1_1 = _mm_mul_ps(_mm_shuffle_ps(zmm4_1, zmm4_1, 0xaa), zmm12)
            zmm2 = _mm_add_ps(zmm2, zmm3)
            zmm3 = _mm_mul_ps(_mm_shuffle_ps(zmm4_1, zmm4_1, 0x55), zmm11)
            zmm4_1 = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xff)
            float var_e8_1[0x4] = zmm2
            float var_d8_1[0x4] =
                _mm_add_ps(_mm_add_ps(_mm_add_ps(zmm3, zmm0_3), zmm1_1), _mm_mul_ps(zmm4_1, zmm13))
            sub_1422f21f0(rbx_5, &var_108, &var_148, arg1 + 0xc0, arg1 + 0xdc, 1, 0, rcx_16.b, 0)
            r13_1[1] = &rbx_5[1]
            r13_1[8].d = 0
            int32_t temp2_1
            int32_t temp3_1
            temp2_1:temp3_1 = muls.dp.d(0x55555556, *(arg1 + 0x278))
            r13_1[0xa].d = 0
            rbx_2 = arg5
            *(r13_1 + 0x44) = temp2_1 + (temp2_1 u>> 0x1f)
            *(r13_1 + 0x54) = *(arg1 + 0x20c) - 1
            *(rdi_4 + 0x9c) = (zx.d(*(arg1 + 0x35)) & 1) | (*(rdi_4 + 0x9c) & 0xfffe007e)
            zmm7, zmm9, zmm10, zmm11, zmm12, zmm13 = sub_1422dd2a0(arg5, i, rdi_4)
            rcx_5 = var_1e8_1
            result = zx.q(arg4)
            r14 = var_1f0
            rdi = arg2
        
        rcx_5 = &rcx_5[1]
        r15_1 = rol.d(r15_1, 1)
        i += 1
        var_1e8_1 = rcx_5
    while (i s< rdi[1].d)

return result
