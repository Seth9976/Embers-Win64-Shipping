// 函数: sub_141dc3850
// 地址: 0x141dc3850
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1d8
int64_t rax_1 = __security_cookie ^ &var_1d8
char result = *(arg1 + 0x5b)
float (* rsi)[0x4] = arg2

if ((result & 0x10) == 0)
    *(arg1 + 0x5b) = result | 0x10
    void* rcx = *(arg1 + 0x130)
    int128_t* rax_2 = rcx + 0x1c0
    
    if (rcx == 0)
        rax_2 = arg2
    
    float var_118[0x4] = *rax_2
    int128_t var_108_1 = rax_2[1]
    float var_f8_1[0x4] = rax_2[2]
    
    if (rcx != 0 && arg3 == 0)
        int64_t* var_158
        sub_140d3a3a0(&var_158, arg1)
        int32_t var_168
        sub_141dc3570(&data_143a2d000, &var_168, var_158)
        int64_t rax_3 = sx.q(var_168)
        void* rax_6
        
        if (rax_3.d == 0xffffffff)
            rax_6 = nullptr
        else
            rax_6 = rax_3 * 0x50 + data_143a2d000
        
        int128_t* rbx_1 = rax_6 + 0x10
        
        if (rax_6 == 0)
            rbx_1 = nullptr
        
        int64_t* var_1a8
        float zmm0_1[0x4]
        float zmm1_1[0x4]
        float zmm2[0x4]
        uint32_t zmm3[0x4]
        uint32_t zmm4_1[0x4]
        
        if (rbx_1 != 0)
            sub_140d3a3a0(&var_168, arg1)
            sub_141dd43a0(&data_143a2d000, var_168.q)
            float zmm8[0x4] = rbx_1[1]
            zmm4_1 = data_143f38d00
            zmm1_1 = __subps_xmmps_memps(zmm8, rsi[1])
            var_168 = 0x38d1b717
            zmm2 = var_168
            zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0)
            float zmm5_1[0x4]
            
            if (_mm_movemask_ps(_mm_cmpeq_ps(zmm2, _mm_and_ps(zmm1_1, zmm4_1), 1)) != 0)
            label_141dc39df:
                zmm2 = data_143f38cf0
                float zmm6[0x4] = rbx_1[2]
                float zmm7[0x4] = *rsi
                zmm1_1 = _mm_and_ps(zmm6, zmm4_1)
                uint32_t zmm11[0x4] = data_143f38c30
                float zmm12[0x4] = data_143f38c20
                uint32_t temp0_21 = _mm_movemask_ps(_mm_cmpeq_ps(zmm2, zmm1_1, 1))
                var_168.o = zmm7
                float zmm10[0x4]
                
                if (temp0_21 == 0)
                    zmm5_1 = data_143dbb0c0
                    zmm10 = data_143dbb0d0
                    zmm6 = data_143dbb0e0
                else
                    zmm5_1 = __mulps_xmmps_memps(*rbx_1, data_143f38ce0)
                    zmm12[0].q = zmm6 u>> 0x40
                    zmm6 = _mm_shuffle_ps(zmm6, zmm12, 0xc4)
                    zmm1_1 = _mm_rcp_ps(zmm6)
                    zmm3 = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xd2)
                    zmm0_1 = _mm_mul_ps(zmm1_1, zmm1_1)
                    zmm1_1 = _mm_sub_ps(_mm_add_ps(zmm1_1, zmm1_1), _mm_mul_ps(zmm0_1, zmm6))
                    zmm0_1 = _mm_mul_ps(zmm1_1, zmm1_1)
                    zmm1_1 = _mm_add_ps(zmm1_1, zmm1_1)
                    zmm0_1 = _mm_mul_ps(zmm0_1, zmm6)
                    zmm6 = _mm_cmpeq_ps(_mm_and_ps(zmm6, zmm4_1), zmm2, 2)
                    zmm1_1 = _mm_sub_ps(zmm1_1, zmm0_1)
                    zmm6 = _mm_and_ps(zmm6, zx.o(0) ^ zmm1_1) ^ zmm1_1
                    zmm1_1 = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xc9)
                    zmm6 = _mm_and_ps(zmm6, zmm11)
                    zmm8 = _mm_mul_ps(zmm8, zmm6)
                    zmm0_1 = _mm_mul_ps(_mm_shuffle_ps(zmm8, zmm8, 0xc9), zmm3)
                    zmm4_1 =
                        _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(zmm8, zmm8, 0xd2), zmm1_1), zmm0_1)
                    zmm4_1 = _mm_add_ps(zmm4_1, zmm4_1)
                    zmm2 = _mm_mul_ps(_mm_shuffle_ps(zmm4_1, zmm4_1, 0xd2), zmm1_1)
                    zmm1_1 = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xff)
                    zmm0_1 = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xc9)
                    zmm1_1 = _mm_mul_ps(zmm1_1, zmm4_1)
                    zmm0_1 = _mm_mul_ps(zmm0_1, zmm3)
                    zmm1_1 = _mm_add_ps(zmm1_1, zmm8)
                    zmm10 = _mm_and_ps(
                        _mm_sub_ps(zx.o(0), _mm_add_ps(_mm_sub_ps(zmm2, zmm0_1), zmm1_1)), zmm11)
                
                void* rcx_3 = *(arg1 + 0x130)
                float zmm15[0x4] = data_143f38cd0
                zmm8 = data_143f38c90
                float zmm9[0x4] = data_143f38c80
                float zmm13[0x4] = *(rcx_3 + 0x1e0)
                int128_t var_1a0
                int128_t var_190
                uint32_t var_180
                float zmm14[0x4]
                
                if (_mm_movemask_ps(_mm_cmpeq_ps(_mm_min_ps(zmm13, zmm6), zmm15, 1)) == 0)
                    zmm2 = *(rcx_3 + 0x1c0)
                    zmm3 = *(rcx_3 + 0x1d0)
                    zmm0_1 = _mm_shuffle_ps(zmm5_1, zmm5_1, 0)
                    zmm1_1 = _mm_shuffle_ps(zmm2, zmm2, 0x4e)
                    zmm11 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0x1b), zmm0_1)
                    zmm3 = _mm_mul_ps(zmm3, zmm6)
                    zmm4_1 = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xff)
                    zmm11 = _mm_mul_ps(zmm11, zmm8)
                    zmm0_1 = _mm_mul_ps(zmm4_1, zmm2)
                    zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xb1)
                    zmm14 = _mm_mul_ps(zmm13, zmm6)
                    zmm11 = _mm_add_ps(zmm11, zmm0_1)
                    zmm1_1 = _mm_mul_ps(zmm1_1, _mm_shuffle_ps(zmm5_1, zmm5_1, 0x55))
                    zmm2 = _mm_mul_ps(zmm2, _mm_shuffle_ps(zmm5_1, zmm5_1, 0xaa))
                    zmm1_1 = _mm_mul_ps(zmm1_1, zmm9)
                    zmm0_1 = _mm_shuffle_ps(zmm3, zmm3, 0xc9)
                    zmm2 = __mulps_xmmps_memps(zmm2, data_143f38c70)
                    zmm11 = _mm_add_ps(zmm11, zmm1_1)
                    zmm1_1 = _mm_shuffle_ps(zmm3, zmm3, 0xd2)
                    zmm11 = _mm_add_ps(zmm11, zmm2)
                    zmm2 = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xd2)
                    zmm0_1 = _mm_mul_ps(zmm0_1, zmm2)
                    zmm5_1 = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xc9)
                    zmm1_1 = _mm_sub_ps(_mm_mul_ps(zmm1_1, zmm5_1), zmm0_1)
                    zmm1_1 = _mm_add_ps(zmm1_1, zmm1_1)
                    zmm4_1 = _mm_mul_ps(zmm4_1, zmm1_1)
                    zmm12 = _mm_mul_ps(_mm_shuffle_ps(zmm1_1, zmm1_1, 0xd2), zmm5_1)
                    zmm0_1 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0xc9)
                    zmm4_1 = _mm_add_ps(zmm4_1, zmm3)
                    zmm12 = _mm_add_ps(
                        _mm_add_ps(_mm_sub_ps(zmm12, _mm_mul_ps(zmm0_1, zmm2)), zmm4_1), zmm10)
                else
                    zmm3 = zmm5_1
                    zmm1_1 = _mm_add_ps(zmm5_1, zmm5_1)
                    zmm2 = _mm_shuffle_ps(zmm5_1, zmm5_1, 4)
                    zmm4_1 = _mm_shuffle_ps(zmm6, zmm6, 0xc9)
                    zmm5_1 = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xff)
                    _mm_mul_ps(zmm13, zmm6)
                    zmm3 = _mm_mul_ps(zmm3, zmm1_1)
                    zmm2 = _mm_mul_ps(zmm2, _mm_shuffle_ps(zmm1_1, zmm1_1, 0x29))
                    zmm1_1 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x12)
                    zmm0_1 = _mm_shuffle_ps(zmm3, zmm3, 0x1a)
                    zmm5_1 = _mm_mul_ps(zmm5_1, zmm1_1)
                    zmm0_1 = _mm_add_ps(zmm0_1, _mm_shuffle_ps(zmm3, zmm3, 1))
                    zmm9 = _mm_add_ps(zmm5_1, zmm2)
                    zmm2 = _mm_sub_ps(zmm2, zmm5_1)
                    zmm1_1 = _mm_sub_ps(zmm12, zmm0_1)
                    zmm5_1 = _mm_shuffle_ps(zmm13, zmm13, 0xc9)
                    zmm9 = _mm_mul_ps(zmm9, zmm6)
                    zmm4_1 = _mm_mul_ps(zmm4_1, zmm2)
                    zmm1_1 = _mm_and_ps(_mm_mul_ps(zmm1_1, zmm6), zmm11)
                    zmm0_1 = _mm_shuffle_ps(zmm4_1, zmm1_1, 0x32)
                    zmm8 = _mm_shuffle_ps(_mm_shuffle_ps(zmm9, zmm1_1, 0), zmm0_1, 0x82)
                    zmm0_1 = _mm_shuffle_ps(zmm9, zmm1_1, 0x31)
                    zmm7 = _mm_shuffle_ps(_mm_shuffle_ps(zmm4_1, zmm1_1, 0x10), zmm0_1, 0x88)
                    zmm9 = _mm_shuffle_ps(_mm_shuffle_ps(zmm9, zmm4_1, 0x12), zmm1_1, 0xe8)
                    zmm1_1 = *(rcx_3 + 0x1c0)
                    zmm12[0].q = zmm10 u>> 0x40
                    zmm3 = _mm_add_ps(zmm1_1, zmm1_1)
                    zmm10 = _mm_shuffle_ps(zmm10, zmm12, 0xc4)
                    zmm0_1 = _mm_shuffle_ps(zmm1_1, zmm1_1, 4)
                    zmm4_1 = _mm_mul_ps(zmm3, zmm1_1)
                    zmm2 = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0x29), zmm0_1)
                    zmm1_1 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0xff)
                    zmm0_1 = _mm_shuffle_ps(zmm4_1, zmm4_1, 0x1a)
                    zmm3 = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0x12), zmm1_1)
                    zmm0_1 = _mm_add_ps(zmm0_1, _mm_shuffle_ps(zmm4_1, zmm4_1, 1))
                    zmm6 = _mm_add_ps(zmm3, zmm2)
                    zmm2 = _mm_sub_ps(zmm2, zmm3)
                    zmm1_1 = _mm_sub_ps(zmm12, zmm0_1)
                    zmm6 = _mm_mul_ps(zmm6, zmm13)
                    zmm5_1 = _mm_mul_ps(zmm5_1, zmm2)
                    zmm1_1 = _mm_and_ps(_mm_mul_ps(zmm1_1, zmm13), zmm11)
                    zmm0_1 = _mm_shuffle_ps(zmm5_1, zmm1_1, 0x32)
                    zmm3 = _mm_shuffle_ps(_mm_shuffle_ps(zmm6, zmm1_1, 0), zmm0_1, 0x82)
                    zmm0_1 = _mm_shuffle_ps(zmm6, zmm1_1, 0x31)
                    zmm4_1 = _mm_shuffle_ps(_mm_shuffle_ps(zmm5_1, zmm1_1, 0x10), zmm0_1, 0x88)
                    zmm2 = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0x55), zmm7)
                    zmm6 = _mm_shuffle_ps(zmm6, zmm5_1, 0x12)
                    zmm5_1 = *(rcx_3 + 0x1d0)
                    zmm6 = _mm_shuffle_ps(zmm6, zmm1_1, 0xe8)
                    zmm1_1 = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0xaa), zmm9)
                    zmm12[0].q = zmm5_1 u>> 0x40
                    zmm5_1 = _mm_shuffle_ps(zmm5_1, zmm12, 0xc4)
                    zmm0_1 = _mm_shuffle_ps(zmm3, zmm3, 0)
                    zmm3 = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0xff), zmm10)
                    zmm2 = _mm_add_ps(zmm2, _mm_mul_ps(zmm0_1, zmm8))
                    zmm0_1 = _mm_mul_ps(_mm_shuffle_ps(zmm4_1, zmm4_1, 0), zmm8)
                    zmm2 = _mm_add_ps(zmm2, zmm1_1)
                    zmm1_1 = _mm_mul_ps(_mm_shuffle_ps(zmm4_1, zmm4_1, 0xaa), zmm9)
                    zmm2 = _mm_add_ps(zmm2, zmm3)
                    zmm3 = _mm_mul_ps(_mm_shuffle_ps(zmm4_1, zmm4_1, 0x55), zmm7)
                    zmm4_1 = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xff)
                    var_1a8.o = zmm2
                    zmm2 = _mm_shuffle_ps(zmm6, zmm6, 0x55)
                    zmm3 = _mm_add_ps(zmm3, zmm0_1)
                    zmm2 = _mm_mul_ps(zmm2, zmm7)
                    zmm4_1 = _mm_mul_ps(zmm4_1, zmm10)
                    zmm0_1 = _mm_shuffle_ps(zmm6, zmm6, 0)
                    zmm3 = _mm_add_ps(zmm3, zmm1_1)
                    zmm0_1 = _mm_mul_ps(zmm0_1, zmm8)
                    zmm1_1 = _mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0xaa), zmm9)
                    zmm3 = _mm_add_ps(zmm3, zmm4_1)
                    zmm6 = _mm_shuffle_ps(zmm6, zmm6, 0xff)
                    zmm2 = _mm_add_ps(zmm2, zmm0_1)
                    zmm6 = _mm_mul_ps(zmm6, zmm10)
                    zmm0_1 = _mm_shuffle_ps(zmm5_1, zmm5_1, 0)
                    var_1a0 = zmm3
                    zmm3 = _mm_shuffle_ps(zmm5_1, zmm5_1, 0x55)
                    zmm2 = _mm_add_ps(zmm2, zmm1_1)
                    zmm3 = _mm_mul_ps(zmm3, zmm7)
                    zmm1_1 = _mm_mul_ps(_mm_shuffle_ps(zmm5_1, zmm5_1, 0xaa), zmm9)
                    zmm0_1 = _mm_mul_ps(zmm0_1, zmm8)
                    zmm2 = _mm_add_ps(zmm2, zmm6)
                    zmm5_1 = _mm_mul_ps(_mm_shuffle_ps(zmm5_1, zmm5_1, 0xff), zmm10)
                    var_190 = zmm2
                    int96_t var_178_1 =
                        _mm_add_ps(_mm_add_ps(_mm_add_ps(zmm3, zmm0_1), zmm1_1), zmm5_1)[0].12
                    zmm12, zmm14, zmm15 = sub_1407740e0(&var_1a8, 0x322bcc77)
                    float zmm2_1[0x4] = var_1a8.d
                    float zmm1_2 = var_1a8:4.d
                    uint32_t zmm0_2[0x4] = var_1a0.d
                    zmm15 = _mm_and_ps(_mm_cmpeq_ps(zmm15, zmm14, 2), data_143f38cc0 ^ zmm12)
                        ^ data_143f38cc0
                    zmm2_1[0] = zmm2_1[0] * zmm15[0]
                    zmm1_2 = zmm1_2 * zmm15[0]
                    zmm0_2[0] = zmm0_2[0] f* zmm15[0]
                    float zmm3_1 = var_1a0:8.d
                    var_1a8.d = zmm2_1[0]
                    var_1a8:4.d = zmm1_2
                    zmm2_1 = _mm_shuffle_ps(zmm15, zmm15, 0x55)
                    zmm1_2 = var_1a0:0xc.d * zmm2_1[0]
                    var_1a0.d = zmm0_2[0]
                    zmm0_2 = var_190.d
                    zmm0_2[0] = zmm0_2[0] f* zmm2_1[0]
                    zmm3_1 = zmm3_1 * zmm2_1[0]
                    zmm2_1 = var_190:8.d
                    var_1a0:0xc.d = zmm1_2
                    zmm1_2 = var_190:0xc.d
                    var_190.d = zmm0_2[0]
                    zmm0_2 = var_180
                    zmm15 = _mm_shuffle_ps(zmm15, zmm15, 0xaa)
                    zmm1_2 = zmm1_2 * zmm15[0]
                    zmm0_2[0] = zmm0_2[0] f* zmm15[0]
                    zmm2_1[0] = zmm2_1[0] * zmm15[0]
                    var_190:0xc.d = zmm1_2
                    var_180 = zmm0_2[0]
                    var_1a0:8.d = zmm3_1
                    var_190:8.d = zmm2_1[0]
                    sub_14077e4a0(&var_158, &var_1a8)
                    zmm5_1 = var_158.o
                    zmm11 = data_143f38cb0
                    zmm7 = *rsi
                    zmm15 = data_143f38cd0
                    zmm8 = data_143f38c90
                    zmm9 = data_143f38c80
                    zmm1_1 = _mm_mul_ps(zmm5_1, zmm5_1)
                    var_168 = 0x322bcc77
                    zmm1_1 = _mm_add_ps(zmm1_1, _mm_shuffle_ps(zmm1_1, zmm1_1, 0x4e))
                    zmm4_1 = _mm_add_ps(_mm_shuffle_ps(zmm1_1, zmm1_1, 0x39), zmm1_1)
                    zmm1_1 = _mm_rsqrt_ps(zmm4_1)
                    zmm3 = _mm_mul_ps(zmm4_1, zmm11)
                    zmm2 = _mm_add_ps(
                        _mm_mul_ps(_mm_sub_ps(zmm11, _mm_mul_ps(_mm_mul_ps(zmm1_1, zmm1_1), zmm3)), 
                            zmm1_1), 
                        zmm1_1)
                    zmm11 = _mm_sub_ps(zmm11, _mm_mul_ps(_mm_mul_ps(zmm2, zmm2), zmm3))
                    zmm0_1 = var_168
                    zmm0_1 = _mm_cmpeq_ps(_mm_shuffle_ps(zmm0_1, zmm0_1, 0), zmm4_1, 2)
                    zmm11 = _mm_add_ps(_mm_mul_ps(zmm11, zmm2), zmm2)
                    zmm2 = _mm_unpacklo_ps(var_178_1:4.d, 0)
                    zmm11 = _mm_and_ps(_mm_mul_ps(zmm11, zmm5_1) ^ data_143f38ca0, zmm0_1)
                        ^ data_143f38ca0
                    zmm12 =
                        _mm_unpacklo_ps(_mm_unpacklo_ps(var_178_1.d, var_178_1:8.d[0].q), zmm2[0].q)
                
                zmm5_1 = rsi[2]
                
                if (_mm_movemask_ps(_mm_cmpeq_ps(_mm_min_ps(zmm14, zmm5_1), zmm15, 1)) == 0)
                    zmm0_1 = _mm_shuffle_ps(zmm11, zmm11, 0x1b)
                    zmm6 = _mm_mul_ps(_mm_shuffle_ps(zmm7, zmm7, 0), zmm0_1)
                    zmm1_1 = _mm_shuffle_ps(zmm7, zmm7, 0x55)
                    zmm3 = _mm_mul_ps(zmm5_1, zmm12)
                    zmm4_1 = _mm_shuffle_ps(zmm7, zmm7, 0xff)
                    zmm6 = _mm_mul_ps(zmm6, zmm8)
                    zmm0_1 = _mm_mul_ps(zmm4_1, zmm11)
                    zmm2 = _mm_shuffle_ps(zmm3, zmm3, 0xd2)
                    zmm13 = _mm_mul_ps(zmm5_1, zmm14)
                    zmm6 = _mm_add_ps(zmm6, zmm0_1)
                    zmm1_1 = _mm_mul_ps(zmm1_1, _mm_shuffle_ps(zmm11, zmm11, 0x4e))
                    zmm0_1 = _mm_mul_ps(_mm_shuffle_ps(zmm7, zmm7, 0xaa), 
                        _mm_shuffle_ps(zmm11, zmm11, 0xb1))
                    zmm1_1 = _mm_mul_ps(zmm1_1, zmm9)
                    zmm0_1 = __mulps_xmmps_memps(zmm0_1, data_143f38c70)
                    zmm6 = _mm_add_ps(zmm6, zmm1_1)
                    zmm1_1 = _mm_shuffle_ps(zmm7, zmm7, 0xd2)
                    zmm7 = _mm_shuffle_ps(zmm7, zmm7, 0xc9)
                    zmm2 = _mm_mul_ps(zmm2, zmm7)
                    zmm6 = _mm_add_ps(zmm6, zmm0_1)
                    zmm2 = _mm_sub_ps(zmm2, _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0xc9), zmm1_1))
                    zmm2 = _mm_add_ps(zmm2, zmm2)
                    zmm5_1 = _mm_shuffle_ps(zmm2, zmm2, 0xd2)
                    zmm0_1 = _mm_shuffle_ps(zmm2, zmm2, 0xc9)
                    zmm5_1 = _mm_mul_ps(zmm5_1, zmm7)
                    zmm0_1 = _mm_mul_ps(zmm0_1, zmm1_1)
                    zmm2 = _mm_mul_ps(zmm2, zmm4_1)
                    zmm5_1 = __addps_xmmps_memps(
                        _mm_add_ps(_mm_sub_ps(zmm5_1, zmm0_1), _mm_add_ps(zmm2, zmm3)), rsi[1])
                else
                    zmm8 = rsi[1]
                    zmm2 = _mm_add_ps(zmm7, zmm7)
                    _mm_mul_ps(zmm5_1, zmm14)
                    zmm0_1 = _mm_shuffle_ps(zmm7, zmm7, 4)
                    zmm4_1 = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xc9)
                    zmm3 = _mm_mul_ps(zmm7, zmm2)
                    zmm1_1 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0x29), zmm0_1)
                    zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0x12)
                    zmm0_1 =
                        _mm_add_ps(_mm_shuffle_ps(zmm3, zmm3, 0x1a), _mm_shuffle_ps(zmm3, zmm3, 1))
                    zmm2 = _mm_mul_ps(zmm2, _mm_shuffle_ps(zmm7, zmm7, 0xff))
                    zmm10 = _mm_add_ps(zmm2, zmm1_1)
                    zmm1_1 = _mm_sub_ps(zmm1_1, zmm2)
                    zmm2 = _mm_add_ps(zmm11, zmm11)
                    zmm10 = _mm_mul_ps(zmm10, zmm5_1)
                    zmm4_1 = _mm_mul_ps(zmm4_1, zmm1_1)
                    zmm1_1 = _mm_sub_ps(data_143f38c20, zmm0_1)
                    zmm3 = _mm_mul_ps(zmm2, zmm11)
                    zmm1_1 = __andps_xmmxud_memxud(_mm_mul_ps(zmm1_1, zmm5_1), data_143f38c30)
                    zmm0_1 = _mm_shuffle_ps(zmm4_1, zmm1_1, 0x32)
                    zmm9 = _mm_shuffle_ps(_mm_shuffle_ps(zmm10, zmm1_1, 0), zmm0_1, 0x82)
                    zmm0_1 = _mm_shuffle_ps(zmm10, zmm1_1, 0x31)
                    zmm7 = _mm_shuffle_ps(_mm_shuffle_ps(zmm4_1, zmm1_1, 0x10), zmm0_1, 0x88)
                    zmm0_1 = data_143f38c20
                    zmm10 = _mm_shuffle_ps(_mm_shuffle_ps(zmm10, zmm4_1, 0x12), zmm1_1, 0xe8)
                    zmm1_1 = _mm_shuffle_ps(zmm2, zmm2, 0x29)
                    zmm0_1[0].q = zmm8 u>> 0x40
                    zmm8 = _mm_shuffle_ps(zmm8, zmm0_1, 0xc4)
                    zmm1_1 = _mm_mul_ps(zmm1_1, _mm_shuffle_ps(zmm11, zmm11, 4))
                    zmm0_1 =
                        _mm_add_ps(_mm_shuffle_ps(zmm3, zmm3, 0x1a), _mm_shuffle_ps(zmm3, zmm3, 1))
                    zmm11 = _mm_shuffle_ps(zmm11, zmm11, 0xff)
                    zmm2 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0x12), zmm11)
                    zmm11 = data_143f38c20
                    zmm4_1 = _mm_shuffle_ps(zmm14, zmm14, 0xc9)
                    zmm6 = _mm_add_ps(zmm2, zmm1_1)
                    zmm1_1 = _mm_sub_ps(zmm1_1, zmm2)
                    zmm6 = _mm_mul_ps(zmm6, zmm14)
                    zmm4_1 = _mm_mul_ps(zmm4_1, zmm1_1)
                    zmm1_1 = __andps_xmmxud_memxud(_mm_mul_ps(_mm_sub_ps(zmm11, zmm0_1), zmm14), 
                        data_143f38c30)
                    zmm0_1 = _mm_shuffle_ps(zmm4_1, zmm1_1, 0x32)
                    zmm3 = _mm_shuffle_ps(_mm_shuffle_ps(zmm6, zmm1_1, 0), zmm0_1, 0x82)
                    zmm0_1 = _mm_shuffle_ps(zmm6, zmm1_1, 0x31)
                    zmm5_1 = _mm_shuffle_ps(_mm_shuffle_ps(zmm4_1, zmm1_1, 0x10), zmm0_1, 0x88)
                    zmm6 = _mm_shuffle_ps(zmm6, zmm4_1, 0x12)
                    zmm2 = _mm_shuffle_ps(zmm3, zmm3, 0x55)
                    zmm0_1 = zmm11
                    zmm6 = _mm_shuffle_ps(zmm6, zmm1_1, 0xe8)
                    zmm1_1 = _mm_shuffle_ps(zmm3, zmm3, 0xaa)
                    zmm2 = _mm_mul_ps(zmm2, zmm7)
                    zmm1_1 = _mm_mul_ps(zmm1_1, zmm10)
                    zmm0_1[0].q = zmm12 u>> 0x40
                    zmm12 = _mm_shuffle_ps(zmm12, zmm0_1, 0xc4)
                    zmm0_1 = _mm_shuffle_ps(zmm3, zmm3, 0)
                    zmm3 = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0xff), zmm8)
                    zmm2 = _mm_add_ps(zmm2, _mm_mul_ps(zmm0_1, zmm9))
                    zmm0_1 = _mm_mul_ps(_mm_shuffle_ps(zmm5_1, zmm5_1, 0), zmm9)
                    zmm2 = _mm_add_ps(zmm2, zmm1_1)
                    zmm1_1 = _mm_mul_ps(_mm_shuffle_ps(zmm5_1, zmm5_1, 0xaa), zmm10)
                    zmm2 = _mm_add_ps(zmm2, zmm3)
                    zmm3 = _mm_mul_ps(_mm_shuffle_ps(zmm5_1, zmm5_1, 0x55), zmm7)
                    zmm5_1 = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xff)
                    var_1a8.o = zmm2
                    zmm2 = _mm_shuffle_ps(zmm6, zmm6, 0x55)
                    zmm3 = _mm_add_ps(zmm3, zmm0_1)
                    zmm2 = _mm_mul_ps(zmm2, zmm7)
                    zmm5_1 = _mm_mul_ps(zmm5_1, zmm8)
                    zmm0_1 = _mm_shuffle_ps(zmm6, zmm6, 0)
                    zmm3 = _mm_add_ps(zmm3, zmm1_1)
                    zmm0_1 = _mm_mul_ps(zmm0_1, zmm9)
                    zmm1_1 = _mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0xaa), zmm10)
                    zmm2 = _mm_add_ps(zmm2, zmm0_1)
                    zmm6 = _mm_shuffle_ps(zmm6, zmm6, 0xff)
                    zmm3 = _mm_add_ps(zmm3, zmm5_1)
                    zmm6 = _mm_mul_ps(zmm6, zmm8)
                    zmm0_1 = _mm_shuffle_ps(zmm12, zmm12, 0)
                    zmm2 = _mm_add_ps(zmm2, zmm1_1)
                    zmm0_1 = _mm_mul_ps(zmm0_1, zmm9)
                    var_1a0 = zmm3
                    zmm3 = _mm_shuffle_ps(zmm12, zmm12, 0x55)
                    var_190 = _mm_add_ps(zmm2, zmm6)
                    zmm3 = _mm_add_ps(_mm_mul_ps(zmm3, zmm7), zmm0_1)
                    zmm2 = _mm_mul_ps(_mm_shuffle_ps(zmm12, zmm12, 0xaa), zmm10)
                    zmm12 = _mm_mul_ps(_mm_shuffle_ps(zmm12, zmm12, 0xff), zmm8)
                    int96_t var_178_2 = _mm_add_ps(_mm_add_ps(zmm3, zmm2), zmm12)[0].12
                    int128_t zmm11_1
                    float zmm15_1[0x4]
                    zmm11_1, zmm13, zmm15_1 = sub_1407740e0(&var_1a8, 0x322bcc77)
                    float zmm2_2[0x4] = var_1a8.d
                    float zmm1_3 = var_1a8:4.d
                    uint32_t zmm0_3[0x4] = var_1a0.d
                    zmm15_1 = _mm_and_ps(_mm_cmpeq_ps(zmm15_1, zmm13, 2), data_143f38cc0 ^ zmm11_1)
                        ^ data_143f38cc0
                    zmm2_2[0] = zmm2_2[0] * zmm15_1[0]
                    zmm1_3 = zmm1_3 * zmm15_1[0]
                    var_1a8.d = zmm2_2[0]
                    zmm0_3[0] = zmm0_3[0] f* zmm15_1[0]
                    float zmm3_2 = var_1a0:8.d
                    var_1a8:4.d = zmm1_3
                    zmm2_2 = _mm_shuffle_ps(zmm15_1, zmm15_1, 0x55)
                    zmm1_3 = var_1a0:0xc.d * zmm2_2[0]
                    var_1a0.d = zmm0_3[0]
                    zmm0_3 = var_190.d
                    zmm0_3[0] = zmm0_3[0] f* zmm2_2[0]
                    zmm3_2 = zmm3_2 * zmm2_2[0]
                    zmm2_2 = var_190:8.d
                    var_1a0:0xc.d = zmm1_3
                    zmm1_3 = var_190:0xc.d
                    var_190.d = zmm0_3[0]
                    zmm0_3 = var_180
                    zmm15_1 = _mm_shuffle_ps(zmm15_1, zmm15_1, 0xaa)
                    zmm1_3 = zmm1_3 * zmm15_1[0]
                    zmm0_3[0] = zmm0_3[0] f* zmm15_1[0]
                    zmm2_2[0] = zmm2_2[0] * zmm15_1[0]
                    var_190:0xc.d = zmm1_3
                    var_180 = zmm0_3[0]
                    var_1a0:8.d = zmm3_2
                    var_190:8.d = zmm2_2[0]
                    sub_14077e4a0(&var_158, &var_1a8)
                    zmm5_1 = var_158.o
                    zmm6 = data_143f38cb0
                    zmm1_1 = _mm_mul_ps(zmm5_1, zmm5_1)
                    var_168 = 0x322bcc77
                    zmm1_1 = _mm_add_ps(zmm1_1, _mm_shuffle_ps(zmm1_1, zmm1_1, 0x4e))
                    zmm4_1 = _mm_add_ps(_mm_shuffle_ps(zmm1_1, zmm1_1, 0x39), zmm1_1)
                    zmm1_1 = _mm_rsqrt_ps(zmm4_1)
                    zmm3 = _mm_mul_ps(zmm4_1, zmm6)
                    zmm2 = _mm_add_ps(
                        _mm_mul_ps(_mm_sub_ps(zmm6, _mm_mul_ps(_mm_mul_ps(zmm1_1, zmm1_1), zmm3)), 
                            zmm1_1), 
                        zmm1_1)
                    zmm6 = _mm_sub_ps(zmm6, _mm_mul_ps(_mm_mul_ps(zmm2, zmm2), zmm3))
                    zmm0_1 = var_168
                    zmm0_1 = _mm_cmpeq_ps(_mm_shuffle_ps(zmm0_1, zmm0_1, 0), zmm4_1, 2)
                    zmm6 = _mm_add_ps(_mm_mul_ps(zmm6, zmm2), zmm2)
                    zmm2 = _mm_unpacklo_ps(var_178_2:4.d, 0)
                    zmm6 = _mm_and_ps(_mm_mul_ps(zmm6, zmm5_1) ^ data_143f38ca0, zmm0_1)
                        ^ data_143f38ca0
                    zmm5_1 =
                        _mm_unpacklo_ps(_mm_unpacklo_ps(var_178_2.d, var_178_2:8.d[0].q), zmm2[0].q)
                
                var_118 = zmm6
                float var_f8_2[0x4] = zmm13
                float var_108_2[0x4] = zmm5_1
            else
                zmm3 = *rbx_1
                zmm5_1 = *rsi
                uint32_t temp0_10 = _mm_movemask_ps(_mm_cmpeq_ps(zmm2, 
                    _mm_and_ps(_mm_sub_ps(zmm3, zmm5_1), zmm4_1), 1))
                uint32_t temp0_14
                
                if (temp0_10 != 0)
                    temp0_14 = _mm_movemask_ps(_mm_cmpeq_ps(zmm2, 
                        _mm_and_ps(_mm_add_ps(zmm3, zmm5_1), zmm4_1), 1))
                
                if (temp0_10 != 0 && temp0_14 != 0)
                    goto label_141dc39df
                
                if (_mm_movemask_ps(_mm_cmpeq_ps(zmm2, 
                        _mm_and_ps(__subps_xmmps_memps(rbx_1[2], rsi[2]), zmm4_1), 1)) != 0)
                    goto label_141dc39df
        
        bool cond:2_1 = data_143a2d028 == 0
        var_158.d = 0
        int64_t var_144_1 = 0
        void* var_150 = &data_143a2d010
        var_158:4.d = 1
        int32_t var_148_1 = 0xffffffff
        
        if (not(cond:2_1))
            sub_14059bdd0(&var_158)
        
        zmm4_1 = var_148_1.o
        int64_t* var_180_1 = &data_143a2d000
        zmm0_1 = var_158.o
        var_1a8 = &data_143a2d000
        int64_t* var_128_1 = &data_143a2d000
        int16_t var_120_1 = 0
        zmm3 = zmm0_1
        zmm0_1 = zmm4_1
        zmm2 = var_1a8.o
        void* rax_14 = zmm3[0].q
        zmm1_1 = _mm_unpackhi_pd(zmm4_1, zmm4_1[0].q)
        var_158.o = zmm2
        zmm0_1[0].q = zmm1_1.q
        var_148_1.o = zmm3
        
        if ((zmm4_1[0].q u>> 0x20).d s< *(rax_14 + 0x18))
            int32_t i_1
            int32_t i = i_1
            
            do
                if (sub_140d3e110(sx.q(i) * 0x50 + *var_158) == 0)
                    sub_141dd44f0(zmm0_1[2].q, i)
                    var_120_1.b = 1
                
                var_144_1:4.d &= not.d(var_150:4.d)
                sub_14059bdd0(&var_150)
                i = i_1
            while (i s< *(var_148_1.q + 0x18))
            
            if (var_120_1.b != 0 && var_120_1:1.b != 0)
                sub_141dbcf70(var_128_1, var_128_1[1].d - *(var_128_1 + 0x34), 1)
    
    sub_141dc21a0(arg1, &var_118, nullptr, arg4, arg3)
    result = sub_141dd0a60(arg1)

__security_check_cookie(rax_1 ^ &var_1d8)
return result
