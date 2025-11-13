// 函数: sub_141ad0610
// 地址: 0x141ad0610
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = arg4[1].d
*arg2 = *arg4
arg2[1].d = rax
uint32_t rdx = zx.d(*(arg1 + 0x241))
float zmm6[0x4]
float var_28[0x4] = zmm6
uint128_t zmm0
float zmm1[0x4]
float zmm2[0x4]
float zmm3[0x4]
float zmm4[0x4]
float zmm5[0x4]

if (rdx == 0)
    zmm5 = *(*arg3 + 0x10)
else
    if (rdx != 1)
        float zmm7[0x4]
        float var_38_1[0x4] = zmm7
        float zmm8[0x4]
        float var_48_1[0x4] = zmm8
        float zmm9[0x4]
        float var_58_1[0x4] = zmm9
        float zmm10[0x4]
        float var_68_1[0x4] = zmm10
        float zmm11[0x4]
        float var_78_1[0x4] = zmm11
        float zmm12[0x4]
        float var_88_1[0x4] = zmm12
        float zmm13[0x4]
        float var_98_1[0x4] = zmm13
        float zmm14[0x4]
        float var_a8_1[0x4] = zmm14
        float zmm15[0x4]
        float var_b8_1[0x4] = zmm15
        uint64_t* rax_9
        float var_108[0x4]
        float var_f8[0x4]
        
        if (rdx == 3)
            if (*arg3[4] == 0)
                sub_141a98300(&arg3[1], 0)
            
            float (* rax_11)[0x4] = arg3[1]
            void* rcx_9 = *arg3
            zmm13 = rax_11[2]
            zmm5 = *rax_11
            zmm14 = *(rcx_9 + 0x30)
            zmm15 = rax_11[1]
            
            if (_mm_movemask_ps(_mm_cmpeq_ps(_mm_min_ps(zmm14, zmm13), data_143f2b8d0, 1)) == 0)
                zmm2 = *(rcx_9 + 0x10)
                zmm6 = _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0), _mm_shuffle_ps(zmm2, zmm2, 0x1b))
                zmm0 = _mm_shuffle_ps(zmm5, zmm5, 0xff)
                zmm1 = _mm_shuffle_ps(zmm5, zmm5, 0x55)
                zmm0 = _mm_mul_ps(zmm0, zmm2)
                zmm6 = __mulps_xmmps_memps(zmm6, data_143f2b850)
                zmm5 = _mm_shuffle_ps(zmm5, zmm5, 0xaa)
                zmm6 = _mm_add_ps(zmm6, zmm0)
                zmm1 = _mm_mul_ps(zmm1, _mm_shuffle_ps(zmm2, zmm2, 0x4e))
                zmm5 = _mm_mul_ps(zmm5, _mm_shuffle_ps(zmm2, zmm2, 0xb1))
                zmm1 = __mulps_xmmps_memps(zmm1, data_143f2b840)
                zmm5 = __mulps_xmmps_memps(zmm5, data_143f2b830)
                zmm6 = _mm_add_ps(_mm_add_ps(zmm6, zmm1), zmm5)
            else
                zmm11 = data_143f2b810
                zmm1 = _mm_add_ps(zmm5, zmm5)
                zmm3 = zmm5
                zmm2 = _mm_shuffle_ps(zmm5, zmm5, 4)
                zmm4 = _mm_shuffle_ps(zmm13, zmm13, 0xc9)
                zmm5 = _mm_shuffle_ps(zmm5, zmm5, 0xff)
                zmm3 = _mm_mul_ps(zmm3, zmm1)
                zmm2 = _mm_mul_ps(zmm2, _mm_shuffle_ps(zmm1, zmm1, 0x29))
                zmm1 = _mm_shuffle_ps(zmm1, zmm1, 0x12)
                zmm0 = _mm_shuffle_ps(zmm3, zmm3, 0x1a)
                zmm5 = _mm_mul_ps(zmm5, zmm1)
                zmm0 = _mm_add_ps(zmm0, _mm_shuffle_ps(zmm3, zmm3, 1))
                zmm3 = *(rcx_9 + 0x10)
                zmm10 = _mm_add_ps(zmm5, zmm2)
                zmm2 = _mm_sub_ps(zmm2, zmm5)
                zmm1 = _mm_sub_ps(zmm11, zmm0)
                zmm5 = _mm_shuffle_ps(zmm14, zmm14, 0xc9)
                zmm10 = _mm_mul_ps(zmm10, zmm13)
                zmm4 = _mm_mul_ps(zmm4, zmm2)
                zmm1 = _mm_mul_ps(zmm1, zmm13)
                zmm2 = _mm_shuffle_ps(zmm3, zmm3, 4)
                zmm1 = __andps_xmmxud_memxud(zmm1, data_143f2b820)
                zmm0 = _mm_shuffle_ps(zmm4, zmm1, 0x32)
                zmm9 = _mm_shuffle_ps(_mm_shuffle_ps(zmm10, zmm1, 0), zmm0, 0x82)
                zmm0 = _mm_shuffle_ps(zmm10, zmm1, 0x31)
                zmm8 = _mm_shuffle_ps(_mm_shuffle_ps(zmm4, zmm1, 0x10), zmm0, 0x88)
                zmm10 = _mm_shuffle_ps(zmm10, zmm4, 0x12)
                zmm4 = zmm3
                zmm10 = _mm_shuffle_ps(zmm10, zmm1, 0xe8)
                zmm1 = _mm_add_ps(zmm3, zmm3)
                zmm0.q = zmm15 u>> 0x40
                zmm15 = _mm_shuffle_ps(zmm15, zmm0, 0xc4)
                zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xff)
                zmm4 = _mm_mul_ps(zmm4, zmm1)
                zmm2 = _mm_mul_ps(zmm2, _mm_shuffle_ps(zmm1, zmm1, 0x29))
                zmm1 = _mm_shuffle_ps(zmm1, zmm1, 0x12)
                zmm0 = _mm_shuffle_ps(zmm4, zmm4, 0x1a)
                zmm3 = _mm_mul_ps(zmm3, zmm1)
                zmm0 = _mm_add_ps(zmm0, _mm_shuffle_ps(zmm4, zmm4, 1))
                zmm7 = _mm_add_ps(zmm3, zmm2)
                zmm2 = _mm_sub_ps(zmm2, zmm3)
                zmm1 = _mm_sub_ps(zmm11, zmm0)
                zmm7 = _mm_mul_ps(zmm7, zmm14)
                zmm5 = _mm_mul_ps(zmm5, zmm2)
                zmm1 = __andps_xmmxud_memxud(_mm_mul_ps(zmm1, zmm14), data_143f2b820)
                zmm0 = _mm_shuffle_ps(zmm5, zmm1, 0x32)
                zmm3 = _mm_shuffle_ps(_mm_shuffle_ps(zmm7, zmm1, 0), zmm0, 0x82)
                zmm0 = _mm_shuffle_ps(zmm7, zmm1, 0x31)
                zmm4 = _mm_shuffle_ps(_mm_shuffle_ps(zmm5, zmm1, 0x10), zmm0, 0x88)
                zmm7 = _mm_shuffle_ps(zmm7, zmm5, 0x12)
                zmm5 = *(rcx_9 + 0x20)
                zmm2 = _mm_shuffle_ps(zmm3, zmm3, 0x55)
                zmm7 = _mm_shuffle_ps(zmm7, zmm1, 0xe8)
                zmm2 = _mm_mul_ps(zmm2, zmm8)
                zmm1 = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0xaa), zmm10)
                zmm0.q = zmm5 u>> 0x40
                zmm5 = _mm_shuffle_ps(zmm5, zmm0, 0xc4)
                zmm0 = _mm_shuffle_ps(zmm3, zmm3, 0)
                zmm3 = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0xff), zmm15)
                zmm2 = _mm_add_ps(zmm2, _mm_mul_ps(zmm0, zmm9))
                zmm0 = _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0), zmm9)
                zmm2 = _mm_add_ps(zmm2, zmm1)
                zmm1 = _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0xaa), zmm10)
                zmm2 = _mm_add_ps(zmm2, zmm3)
                zmm3 = _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0x55), zmm8)
                zmm4 = _mm_shuffle_ps(zmm4, zmm4, 0xff)
                var_f8 = zmm2
                zmm2 = _mm_shuffle_ps(zmm7, zmm7, 0x55)
                zmm3 = _mm_add_ps(zmm3, zmm0)
                zmm2 = _mm_mul_ps(zmm2, zmm8)
                zmm4 = _mm_mul_ps(zmm4, zmm15)
                zmm0 = _mm_shuffle_ps(zmm7, zmm7, 0)
                zmm3 = _mm_add_ps(zmm3, zmm1)
                zmm0 = _mm_mul_ps(zmm0, zmm9)
                zmm1 = _mm_mul_ps(_mm_shuffle_ps(zmm7, zmm7, 0xaa), zmm10)
                zmm3 = _mm_add_ps(zmm3, zmm4)
                zmm7 = _mm_shuffle_ps(zmm7, zmm7, 0xff)
                zmm2 = _mm_add_ps(zmm2, zmm0)
                zmm7 = _mm_mul_ps(zmm7, zmm15)
                zmm0 = _mm_shuffle_ps(zmm5, zmm5, 0)
                int96_t var_e8_2 = zmm3[0].12
                zmm3 = _mm_shuffle_ps(zmm5, zmm5, 0x55)
                zmm2 = _mm_add_ps(zmm2, zmm1)
                zmm3 = _mm_mul_ps(zmm3, zmm8)
                zmm1 = _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0xaa), zmm10)
                zmm0 = _mm_mul_ps(zmm0, zmm9)
                zmm2 = _mm_add_ps(zmm2, zmm7)
                zmm5 = _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0xff), zmm15)
                zmm3 = _mm_add_ps(zmm3, zmm0)
                int96_t var_d8_2 = zmm2[0].12
                float var_c8_2[0x4] = _mm_add_ps(_mm_add_ps(zmm3, zmm1), zmm5)
                zmm11, zmm12, zmm13, zmm14 = sub_1407740e0(&var_f8, 0x322bcc77)
                float zmm2_3[0x4] = var_f8[0]
                float zmm1_3 = var_f8[1]
                zmm12 = _mm_and_ps(_mm_cmpeq_ps(zmm12, _mm_mul_ps(zmm13, zmm14), 2), 
                    data_143f2b8c0 ^ zmm11)
                uint32_t zmm0_3[0x4] = var_f8[2]
                zmm12 ^= data_143f2b8c0
                zmm2_3[0] = zmm2_3[0] * zmm12[0]
                zmm1_3 = zmm1_3 * zmm12[0]
                var_f8[0] = zmm2_3[0]
                zmm0_3[0] = zmm0_3[0] f* zmm12[0]
                var_f8[1] = zmm1_3
                zmm2_3 = _mm_shuffle_ps(zmm12, zmm12, 0x55)
                zmm1_3 = var_e8_2:4.d * zmm2_3[0]
                var_f8[2] = zmm0_3[0]
                zmm0_3 = var_e8_2:8.d
                zmm0_3[0] = zmm0_3[0] f* zmm2_3[0]
                float zmm3_3 = var_e8_2.d * zmm2_3[0]
                zmm2_3 = var_d8_2.d
                var_e8_2:4.d = zmm1_3
                var_e8_2:8.d = zmm0_3[0]
                zmm0_3 = var_d8_2:8.d
                zmm12 = _mm_shuffle_ps(zmm12, zmm12, 0xaa)
                zmm1_3 = var_d8_2:4.d * zmm12[0]
                zmm0_3[0] = zmm0_3[0] f* zmm12[0]
                zmm2_3[0] = zmm2_3[0] * zmm12[0]
                var_d8_2:4.d = zmm1_3
                var_d8_2:8.d = zmm0_3[0]
                var_e8_2.d = zmm3_3
                var_d8_2.d = zmm2_3[0]
                sub_14077e4a0(&var_108, &var_f8)
                zmm5 = var_108
                zmm6 = data_143f2b8b0
                zmm1 = _mm_mul_ps(zmm5, zmm5)
                zmm1 = _mm_add_ps(zmm1, _mm_shuffle_ps(zmm1, zmm1, 0x4e))
                zmm4 = _mm_add_ps(_mm_shuffle_ps(zmm1, zmm1, 0x39), zmm1)
                zmm1 = _mm_rsqrt_ps(zmm4)
                zmm3 = _mm_mul_ps(zmm4, zmm6)
                zmm2 = _mm_add_ps(
                    _mm_mul_ps(_mm_sub_ps(zmm6, _mm_mul_ps(_mm_mul_ps(zmm1, zmm1), zmm3)), zmm1), 
                    zmm1)
                zmm6 = _mm_sub_ps(zmm6, _mm_mul_ps(_mm_mul_ps(zmm2, zmm2), zmm3))
                zmm0 = _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), zmm4, 2)
                zmm6 = _mm_and_ps(
                    _mm_mul_ps(_mm_add_ps(_mm_mul_ps(zmm6, zmm2), zmm2), zmm5) ^ data_143f2b8a0, 
                    zmm0) ^ data_143f2b8a0
            
            zmm6 = __mulps_xmmps_memps(zmm6, data_143f2b8e0)
            zmm5 = _mm_unpacklo_ps(_mm_unpacklo_ps(*arg2, arg2[1].d.q), 
                _mm_unpacklo_ps(*(arg2 + 4), zx.o(0)[0].q)[0].q)
            zmm1 = _mm_shuffle_ps(zmm6, zmm6, 0xc9)
            zmm2 = _mm_shuffle_ps(zmm6, zmm6, 0xd2)
            zmm0 = _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0xc9), zmm2)
            zmm3 = _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0xd2), zmm1)
            zmm6 = _mm_shuffle_ps(zmm6, zmm6, 0xff)
            zmm3 = _mm_sub_ps(zmm3, zmm0)
            zmm3 = _mm_add_ps(zmm3, zmm3)
            zmm6 = _mm_mul_ps(zmm6, zmm3)
            zmm4 = _mm_shuffle_ps(zmm3, zmm3, 0xd2)
            zmm0 = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0xc9), zmm2)
            zmm4 = _mm_mul_ps(zmm4, zmm1)
            zmm6 = _mm_add_ps(zmm6, zmm5)
            zmm4 = _mm_add_ps(_mm_sub_ps(zmm4, zmm0), zmm6)
            int32_t var_100_2 = _mm_shuffle_ps(zmm4, zmm4, 0xaa).d
            *arg2 = (_mm_unpacklo_ps(zmm4, _mm_shuffle_ps(zmm4, zmm4, 0x55)[0].q)).q
            arg2[1].d = var_100_2
            rax_9 = arg2
        else if (rdx != 4)
            rax_9 = arg2
        else
            void* r14_1 = arg3[3]
            
            if (sub_141ea6180(arg1 + 0x130, r14_1) != 0)
                int32_t rax_2 = *(arg1 + 0x138)
                int32_t rdx_4
                
                if (rax_2 s>= 0)
                    rdx_4 = *(arg1 + 0x13c)
                else
                    int32_t rcx_1 = rax_2 * 2
                    
                    if ((rcx_1 & 0xfffffffe) == 0xfffffffe)
                        rdx_4 = -1
                    else
                        rdx_4 = *(*(r14_1 + 0x80) + (sx.q(rcx_1) s>> 1 << 2))
                
                int128_t* rax_6 = sub_141ab9f30(&arg3[1], rdx_4)
                void* rcx_5 = *arg3
                zmm14 = rax_6[2]
                float zmm4_1[0x4] = *rax_6
                zmm13 = *(rcx_5 + 0x30)
                zmm15 = rax_6[1]
                float zmm0_1[0x4]
                float zmm1_1[0x4]
                float zmm2_1[0x4]
                float zmm3_1[0x4]
                float zmm5_1[0x4]
                
                if (_mm_movemask_ps(_mm_cmpeq_ps(_mm_min_ps(zmm13, zmm14), data_143f2b8d0, 1)) == 0)
                    zmm2_1 = *(rcx_5 + 0x10)
                    zmm0_1 = _mm_shuffle_ps(zmm4_1, zmm4_1, 0)
                    zmm6 = _mm_mul_ps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0x1b), zmm0_1)
                    zmm1_1 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0x4e)
                    zmm0_1 = _mm_mul_ps(_mm_shuffle_ps(zmm4_1, zmm4_1, 0xff), zmm2_1)
                    zmm6 = __mulps_xmmps_memps(zmm6, data_143f2b850)
                    zmm2_1 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xb1)
                    zmm6 = _mm_add_ps(zmm6, zmm0_1)
                    zmm1_1 = _mm_mul_ps(zmm1_1, _mm_shuffle_ps(zmm4_1, zmm4_1, 0x55))
                    zmm2_1 = _mm_mul_ps(zmm2_1, _mm_shuffle_ps(zmm4_1, zmm4_1, 0xaa))
                    zmm1_1 = __mulps_xmmps_memps(zmm1_1, data_143f2b840)
                    zmm2_1 = __mulps_xmmps_memps(zmm2_1, data_143f2b830)
                    zmm6 = _mm_add_ps(_mm_add_ps(zmm6, zmm1_1), zmm2_1)
                else
                    zmm11 = data_143f2b810
                    zmm0_1 = _mm_shuffle_ps(zmm4_1, zmm4_1, 4)
                    zmm2_1 = _mm_add_ps(zmm4_1, zmm4_1)
                    zmm5_1 = _mm_shuffle_ps(zmm13, zmm13, 0xc9)
                    zmm3_1 = _mm_mul_ps(zmm2_1, zmm4_1)
                    zmm1_1 = _mm_mul_ps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0x29), zmm0_1)
                    zmm4_1 = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xff)
                    zmm0_1 = _mm_add_ps(_mm_shuffle_ps(zmm3_1, zmm3_1, 0x1a), 
                        _mm_shuffle_ps(zmm3_1, zmm3_1, 1))
                    zmm2_1 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0x12)
                    zmm3_1 = *(rcx_5 + 0x10)
                    zmm2_1 = _mm_mul_ps(zmm2_1, zmm4_1)
                    zmm4_1 = _mm_shuffle_ps(zmm14, zmm14, 0xc9)
                    zmm10 = _mm_add_ps(zmm2_1, zmm1_1)
                    zmm1_1 = _mm_sub_ps(zmm1_1, zmm2_1)
                    zmm2_1 = _mm_shuffle_ps(zmm3_1, zmm3_1, 4)
                    zmm10 = _mm_mul_ps(zmm10, zmm14)
                    zmm4_1 = _mm_mul_ps(zmm4_1, zmm1_1)
                    zmm1_1 = __andps_xmmxud_memxud(_mm_mul_ps(_mm_sub_ps(zmm11, zmm0_1), zmm14), 
                        data_143f2b820)
                    zmm0_1 = _mm_shuffle_ps(zmm4_1, zmm1_1, 0x32)
                    zmm9 = _mm_shuffle_ps(_mm_shuffle_ps(zmm10, zmm1_1, 0), zmm0_1, 0x82)
                    zmm0_1 = _mm_shuffle_ps(zmm10, zmm1_1, 0x31)
                    zmm8 = _mm_shuffle_ps(_mm_shuffle_ps(zmm4_1, zmm1_1, 0x10), zmm0_1, 0x88)
                    zmm10 = _mm_shuffle_ps(zmm10, zmm4_1, 0x12)
                    zmm4_1 = zmm3_1
                    zmm10 = _mm_shuffle_ps(zmm10, zmm1_1, 0xe8)
                    zmm1_1 = _mm_add_ps(zmm3_1, zmm3_1)
                    zmm11[0].q = zmm15 u>> 0x40
                    zmm15 = _mm_shuffle_ps(zmm15, zmm11, 0xc4)
                    zmm3_1 = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xff)
                    zmm4_1 = _mm_mul_ps(zmm4_1, zmm1_1)
                    zmm2_1 = _mm_mul_ps(zmm2_1, _mm_shuffle_ps(zmm1_1, zmm1_1, 0x29))
                    zmm1_1 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x12)
                    zmm0_1 = _mm_shuffle_ps(zmm4_1, zmm4_1, 0x1a)
                    zmm3_1 = _mm_mul_ps(zmm3_1, zmm1_1)
                    zmm0_1 = _mm_add_ps(zmm0_1, _mm_shuffle_ps(zmm4_1, zmm4_1, 1))
                    zmm7 = _mm_add_ps(zmm3_1, zmm2_1)
                    zmm2_1 = _mm_sub_ps(zmm2_1, zmm3_1)
                    zmm1_1 = _mm_sub_ps(zmm11, zmm0_1)
                    zmm7 = _mm_mul_ps(zmm7, zmm13)
                    zmm5_1 = _mm_mul_ps(zmm5_1, zmm2_1)
                    zmm1_1 = __andps_xmmxud_memxud(_mm_mul_ps(zmm1_1, zmm13), data_143f2b820)
                    zmm0_1 = _mm_shuffle_ps(zmm5_1, zmm1_1, 0x32)
                    zmm3_1 = _mm_shuffle_ps(_mm_shuffle_ps(zmm7, zmm1_1, 0), zmm0_1, 0x82)
                    zmm0_1 = _mm_shuffle_ps(zmm7, zmm1_1, 0x31)
                    zmm4_1 = _mm_shuffle_ps(_mm_shuffle_ps(zmm5_1, zmm1_1, 0x10), zmm0_1, 0x88)
                    zmm7 = _mm_shuffle_ps(zmm7, zmm5_1, 0x12)
                    zmm5_1 = *(rcx_5 + 0x20)
                    zmm2_1 = _mm_shuffle_ps(zmm3_1, zmm3_1, 0x55)
                    zmm7 = _mm_shuffle_ps(zmm7, zmm1_1, 0xe8)
                    zmm2_1 = _mm_mul_ps(zmm2_1, zmm8)
                    zmm1_1 = _mm_mul_ps(_mm_shuffle_ps(zmm3_1, zmm3_1, 0xaa), zmm10)
                    zmm11[0].q = zmm5_1 u>> 0x40
                    zmm5_1 = _mm_shuffle_ps(zmm5_1, zmm11, 0xc4)
                    zmm0_1 = _mm_shuffle_ps(zmm3_1, zmm3_1, 0)
                    zmm3_1 = _mm_mul_ps(_mm_shuffle_ps(zmm3_1, zmm3_1, 0xff), zmm15)
                    zmm2_1 = _mm_add_ps(zmm2_1, _mm_mul_ps(zmm0_1, zmm9))
                    zmm0_1 = _mm_mul_ps(_mm_shuffle_ps(zmm4_1, zmm4_1, 0), zmm9)
                    zmm2_1 = _mm_add_ps(zmm2_1, zmm1_1)
                    zmm1_1 = _mm_mul_ps(_mm_shuffle_ps(zmm4_1, zmm4_1, 0xaa), zmm10)
                    zmm2_1 = _mm_add_ps(zmm2_1, zmm3_1)
                    zmm3_1 = _mm_mul_ps(_mm_shuffle_ps(zmm4_1, zmm4_1, 0x55), zmm8)
                    zmm4_1 = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xff)
                    var_f8 = zmm2_1
                    zmm2_1 = _mm_shuffle_ps(zmm7, zmm7, 0x55)
                    zmm3_1 = _mm_add_ps(zmm3_1, zmm0_1)
                    zmm2_1 = _mm_mul_ps(zmm2_1, zmm8)
                    zmm4_1 = _mm_mul_ps(zmm4_1, zmm15)
                    zmm0_1 = _mm_shuffle_ps(zmm7, zmm7, 0)
                    zmm3_1 = _mm_add_ps(zmm3_1, zmm1_1)
                    zmm0_1 = _mm_mul_ps(zmm0_1, zmm9)
                    zmm1_1 = _mm_mul_ps(_mm_shuffle_ps(zmm7, zmm7, 0xaa), zmm10)
                    zmm3_1 = _mm_add_ps(zmm3_1, zmm4_1)
                    zmm7 = _mm_shuffle_ps(zmm7, zmm7, 0xff)
                    zmm2_1 = _mm_add_ps(zmm2_1, zmm0_1)
                    zmm7 = _mm_mul_ps(zmm7, zmm15)
                    zmm0_1 = _mm_shuffle_ps(zmm5_1, zmm5_1, 0)
                    int96_t var_e8_1 = zmm3_1[0].12
                    zmm3_1 = _mm_shuffle_ps(zmm5_1, zmm5_1, 0x55)
                    zmm2_1 = _mm_add_ps(zmm2_1, zmm1_1)
                    zmm3_1 = _mm_mul_ps(zmm3_1, zmm8)
                    zmm1_1 = _mm_mul_ps(_mm_shuffle_ps(zmm5_1, zmm5_1, 0xaa), zmm10)
                    zmm0_1 = _mm_mul_ps(zmm0_1, zmm9)
                    zmm2_1 = _mm_add_ps(zmm2_1, zmm7)
                    zmm5_1 = _mm_mul_ps(_mm_shuffle_ps(zmm5_1, zmm5_1, 0xff), zmm15)
                    zmm3_1 = _mm_add_ps(zmm3_1, zmm0_1)
                    int96_t var_d8_1 = zmm2_1[0].12
                    float var_c8_1[0x4] = _mm_add_ps(_mm_add_ps(zmm3_1, zmm1_1), zmm5_1)
                    zmm11, zmm12, zmm13, zmm14 = sub_1407740e0(&var_f8, 0x322bcc77)
                    float zmm2_2[0x4] = var_f8[0]
                    float zmm1_2 = var_f8[1]
                    zmm12 = _mm_and_ps(_mm_cmpeq_ps(zmm12, _mm_mul_ps(zmm13, zmm14), 2), 
                        data_143f2b8c0 ^ zmm11)
                    uint32_t zmm0_2[0x4] = var_f8[2]
                    zmm12 ^= data_143f2b8c0
                    zmm2_2[0] = zmm2_2[0] * zmm12[0]
                    zmm1_2 = zmm1_2 * zmm12[0]
                    var_f8[0] = zmm2_2[0]
                    zmm0_2[0] = zmm0_2[0] f* zmm12[0]
                    var_f8[1] = zmm1_2
                    zmm2_2 = _mm_shuffle_ps(zmm12, zmm12, 0x55)
                    zmm1_2 = var_e8_1:4.d * zmm2_2[0]
                    var_f8[2] = zmm0_2[0]
                    zmm0_2 = var_e8_1:8.d
                    zmm0_2[0] = zmm0_2[0] f* zmm2_2[0]
                    float zmm3_2 = var_e8_1.d * zmm2_2[0]
                    zmm2_2 = var_d8_1.d
                    var_e8_1:4.d = zmm1_2
                    var_e8_1:8.d = zmm0_2[0]
                    zmm0_2 = var_d8_1:8.d
                    zmm12 = _mm_shuffle_ps(zmm12, zmm12, 0xaa)
                    zmm1_2 = var_d8_1:4.d * zmm12[0]
                    zmm0_2[0] = zmm0_2[0] f* zmm12[0]
                    zmm2_2[0] = zmm2_2[0] * zmm12[0]
                    var_d8_1:4.d = zmm1_2
                    var_d8_1:8.d = zmm0_2[0]
                    var_e8_1.d = zmm3_2
                    var_d8_1.d = zmm2_2[0]
                    sub_14077e4a0(&var_108, &var_f8)
                    zmm5_1 = var_108
                    zmm6 = data_143f2b8b0
                    zmm1_1 = _mm_mul_ps(zmm5_1, zmm5_1)
                    zmm1_1 = _mm_add_ps(zmm1_1, _mm_shuffle_ps(zmm1_1, zmm1_1, 0x4e))
                    zmm4_1 = _mm_add_ps(_mm_shuffle_ps(zmm1_1, zmm1_1, 0x39), zmm1_1)
                    zmm1_1 = _mm_rsqrt_ps(zmm4_1)
                    zmm3_1 = _mm_mul_ps(zmm4_1, zmm6)
                    zmm2_1 = _mm_add_ps(
                        _mm_mul_ps(
                            _mm_sub_ps(zmm6, _mm_mul_ps(_mm_mul_ps(zmm1_1, zmm1_1), zmm3_1)), 
                            zmm1_1), 
                        zmm1_1)
                    zmm6 = _mm_sub_ps(zmm6, _mm_mul_ps(_mm_mul_ps(zmm2_1, zmm2_1), zmm3_1))
                    zmm0_1 = _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), zmm4_1, 2)
                    zmm6 = _mm_and_ps(
                        _mm_mul_ps(_mm_add_ps(_mm_mul_ps(zmm6, zmm2_1), zmm2_1), zmm5_1)
                            ^ data_143f2b8a0, 
                        zmm0_1) ^ data_143f2b8a0
                
                zmm6 = __mulps_xmmps_memps(zmm6, data_143f2b8e0)
                zmm5_1 = _mm_unpacklo_ps(_mm_unpacklo_ps(*arg2, arg2[1].d[0].q), 
                    _mm_unpacklo_ps(*(arg2 + 4), zx.o(0)[0].q)[0].q)
                zmm1_1 = _mm_shuffle_ps(zmm6, zmm6, 0xd2)
                zmm0_1 = _mm_mul_ps(_mm_shuffle_ps(zmm5_1, zmm5_1, 0xc9), zmm1_1)
                zmm4_1 = _mm_shuffle_ps(zmm6, zmm6, 0xc9)
                zmm2_1 = _mm_mul_ps(_mm_shuffle_ps(zmm5_1, zmm5_1, 0xd2), zmm4_1)
                zmm6 = _mm_shuffle_ps(zmm6, zmm6, 0xff)
                zmm2_1 = _mm_sub_ps(zmm2_1, zmm0_1)
                zmm2_1 = _mm_add_ps(zmm2_1, zmm2_1)
                zmm6 = _mm_mul_ps(zmm6, zmm2_1)
                zmm0_1 = _mm_mul_ps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0xc9), zmm1_1)
                zmm3_1 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xd2)
                zmm6 = _mm_add_ps(zmm6, zmm5_1)
                zmm3_1 = _mm_add_ps(_mm_sub_ps(_mm_mul_ps(zmm3_1, zmm4_1), zmm0_1), zmm6)
                float var_100_1 = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xaa)[0]
                *arg2 = (_mm_unpacklo_ps(zmm3_1, _mm_shuffle_ps(zmm3_1, zmm3_1, 0x55)[0].q)).q
                arg2[1].d = var_100_1
            
            rax_9 = arg2
        return rax_9
    
    zmm5 = *(*arg3 + 0x70)

zmm5 = __mulps_xmmps_memps(zmm5, data_143f2b8e0)
zmm6 = _mm_unpacklo_ps(_mm_unpacklo_ps(*arg2, arg2[1].d.q), _mm_unpacklo_ps(*(arg2 + 4), 0)[0].q)
zmm1 = _mm_shuffle_ps(zmm5, zmm5, 0xd2)
zmm0 = _mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0xc9), zmm1)
zmm4 = _mm_shuffle_ps(zmm5, zmm5, 0xc9)
zmm2 = _mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0xd2), zmm4)
zmm5 = _mm_shuffle_ps(zmm5, zmm5, 0xff)
zmm2 = _mm_sub_ps(zmm2, zmm0)
zmm2 = _mm_add_ps(zmm2, zmm2)
zmm5 = _mm_mul_ps(zmm5, zmm2)
zmm0 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xc9), zmm1)
zmm3 = _mm_shuffle_ps(zmm2, zmm2, 0xd2)
zmm5 = _mm_add_ps(zmm5, zmm6)
zmm3 = _mm_add_ps(_mm_sub_ps(_mm_mul_ps(zmm3, zmm4), zmm0), zmm5)
int32_t var_100_3 = _mm_shuffle_ps(zmm3, zmm3, 0xaa).d
*arg2 = (_mm_unpacklo_ps(zmm3, _mm_shuffle_ps(zmm3, zmm3, 0x55)[0].q)).q
arg2[1].d = var_100_3
return arg2
