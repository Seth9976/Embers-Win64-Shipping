// 函数: sub_1421cf0a0
// 地址: 0x1421cf0a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = *(arg1 + 0x18)
float zmm13[0x4] = arg2

if (result != 0)
    void* rcx
    
    if ((*(result + 0x432) & 2) == 0)
        rcx = *(result + 0x408)
    
    uint64_t rbx
    
    if ((*(result + 0x432) & 2) != 0 || rcx == 0 || (*(rcx + 0xb0) & 2) != 0)
        rbx.b = 0
    else
        rbx.b = 1
    
    void* r13_1 = *(arg1 + 0x28)
    int96_t var_128_1 = (*(result + 0x1e0)).12
    char arg_8 = rbx.b
    
    if (rbx.b != 0)
        *(arg1 + 0x14c) = data_143dbb1f8.q
        int32_t rax = data_143dbb200
        *(arg1 + 0x154) = rax
        *(arg1 + 0x140) = *(arg1 + 0x14c)
        *(arg1 + 0x148) = rax
        *(arg1 + 0x158) = 0
    
    int32_t i = 0
    uint128_t zmm6
    uint128_t var_48_1 = zmm6
    int32_t arg_20 = 0xbf000000
    float var_178_1 = -0.5f
    float zmm7[0x4]
    float var_58_1[0x4] = zmm7
    void* r15_1 = **(*(arg1 + 0x10) + 0x40)
    
    if (rbx.b != 0)
        int32_t r14_1 = *(r15_1 + 0x40)
        int32_t rbx_1 = 0
        
        if (r14_1 != 0)
            do
                void* rsi_1 = *(*(r15_1 + 0x38) + (sx.q(rbx_1) << 3))
                
                if (rsi_1 != 0)
                    void* rax_3 = sub_142558280()
                    void* rdx_1 = *(rsi_1 + 0x10)
                    int64_t rax_4 = sx.q(*(rax_3 + 0x38))
                    
                    if (rax_4.d s<= *(rdx_1 + 0x38)
                            && *(*(rdx_1 + 0x30) + (rax_4 << 3)) == rax_3 + 0x30)
                        zmm7 = *(rsi_1 + 0x34)
                        zmm6.d = (*(rsi_1 + 0x30)).d f- 0.5f
                        zmm7[0] = zmm7[0] - 0.5f
                        arg_20 = zmm6.d
                        var_178_1 = zmm7[0]
                        break
                
                rbx_1 += 1
            while (rbx_1 u< r14_1)
        
        rbx = zx.q(arg_8)
    
    uint128_t zmm11 = 0x49800000
    float zmm12[0x4] = 0xc9800000
    uint128_t zmm14 = 0x49800000
    int64_t rcx_5 = sx.q(sub_1421b7d40(arg1))
    uint128_t zmm15 = 0x49800000
    int32_t var_170_1 = 0x49800000
    int32_t var_16c_1 = 0x49800000
    int32_t var_168_1 = 0x49800000
    char rax_8 = *(*(r13_1 + 0x30) + 0x59) & 1
    float var_188_1 = -1048576f
    float var_184_1 = -1048576f
    float var_180_1 = -1048576f
    uint128_t var_118_1
    uint128_t var_108_1
    uint128_t var_f8_1
    uint128_t var_e8_1
    uint128_t zmm0
    uint128_t zmm2
    uint128_t zmm3
    
    if (rax_8 == 0)
        var_118_1 = data_14399f6e0
        var_108_1 = data_14399f6f0
        var_f8_1 = data_14399f700
        var_e8_1 = data_14399f710
    else
        void* rax_9 = *(arg1 + 0x18)
        arg2 = *(rax_9 + 0x1c0)
        zmm0 = _mm_shuffle_ps(arg2, arg2, 4)
        zmm3 = _mm_add_ps(arg2, arg2)
        zmm2 = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0x29), zmm0)
        uint128_t zmm4 = _mm_mul_ps(zmm3, arg2)
        zmm3 = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0x12), _mm_shuffle_ps(arg2, arg2, 0xff))
        arg2 = *(rax_9 + 0x1e0)
        zmm0 = _mm_shuffle_ps(zmm4, zmm4, 0x1a)
        uint128_t zmm5 = _mm_shuffle_ps(arg2, arg2, 0xc9)
        zmm0 = _mm_add_ps(zmm0, _mm_shuffle_ps(zmm4, zmm4, 1))
        zmm4 = data_143f4dea0
        zmm6 = _mm_add_ps(zmm3, zmm2)
        zmm2 = _mm_sub_ps(zmm2, zmm3)
        zmm3 = _mm_sub_ps(zmm4, zmm0)
        zmm6 = _mm_mul_ps(zmm6, arg2)
        zmm5 = _mm_mul_ps(zmm5, zmm2)
        zmm3 = __andps_xmmxud_memxud(_mm_mul_ps(zmm3, arg2), data_143f4deb0)
        zmm0 = _mm_shuffle_ps(zmm5, zmm3, 0x32)
        arg2 = _mm_shuffle_ps(_mm_shuffle_ps(zmm6, zmm3, 0), zmm0, 0x82)
        zmm0 = _mm_shuffle_ps(zmm6, zmm3, 0x31)
        zmm2 = _mm_shuffle_ps(_mm_shuffle_ps(zmm5, zmm3, 0x10), zmm0, 0x88)
        zmm0 = *(rax_9 + 0x1d0)
        zmm4.q = zmm0 u>> 0x40
        zmm6 = _mm_shuffle_ps(zmm6, zmm5, 0x12)
        var_e8_1 = _mm_shuffle_ps(zmm0, zmm4, 0xc4)
        var_118_1 = arg2
        var_108_1 = zmm2
        var_f8_1 = _mm_shuffle_ps(zmm6, zmm3, 0xe8)
    
    result = *(arg1 + 0x10)
    char r13_2 = not.b(*(result + 0x37)) & 1
    
    if (*(arg1 + 0x118) s> 0)
        float zmm8[0x4]
        float var_68_1[0x4] = zmm8
        float zmm9[0x4]
        float var_78_1[0x4] = zmm9
        void* r15_2 = nullptr
        zmm2 = zx.o(0)
        
        do
            uint64_t* rbx_3 =
                sx.q(zx.d(*(r15_2 + *(arg1 + 0xf8))) * *(arg1 + 0x114)) + *(arg1 + 0xf0)
            int32_t rcx_8 = *(rbx_3 + 0x5c)
            int32_t rax_11 = rbx_3[3].d
            zmm0 = zx.o(rbx_3[2])
            *rbx_3 = zmm0.q
            rbx_3[1].d = rax_11
            int32_t rcx_9 = rcx_8 & 0xfdffffff
            *(rbx_3 + 0x5c) = rcx_9
            uint8_t rax_13
            
            if (((rcx_8 u>> 0x19).b & 1) == 0 || r13_2 == 0)
                rax_13 = 0
            else
                rax_13 = 1
            
            if (test_bit(rcx_9, 0x1a) || rax_13 != 0)
                int32_t rax_15 = rbx_3[3].d
                zmm3 = *(rbx_3 + 0x2c)
                zmm8 = _mm_shuffle_ps(zmm0, zmm0, 0x55)
                zmm7 = zmm0.d
                zmm9 = rax_15
            else
                if (test_bit(rcx_9, 0x1c))
                    int32_t rax_14 = rbx_3[3].d
                    zmm8 = _mm_shuffle_ps(zmm0, zmm0, 0x55)
                    zmm7 = zmm0.d
                    zmm9 = rax_14
                else
                    zmm7 = zmm13
                    zmm8 = zmm13
                    zmm7[0] = zmm7[0] f* rbx_3[6].d
                    zmm9 = zmm13
                    zmm8[0] = zmm8[0] f* *(rbx_3 + 0x34)
                    zmm9[0] = zmm9[0] f* rbx_3[7].d
                    zmm7[0] = zmm7[0] f+ rbx_3[2].d
                    zmm8[0] = zmm8[0] f+ *(rbx_3 + 0x14)
                    zmm9[0] = zmm9[0] f+ rbx_3[3].d
                
                zmm0 = *(rbx_3 + 0x2c)
                
                if (test_bit(rcx_9, 0x1d))
                    zmm3 = zmm0
                else
                    zmm3.d = zmm13.d f* *(rbx_3 + 0x4c)
                    zmm3.d = zmm3.d f+ zmm0.d
            
            if (arg_8 != 0)
                if (rcx_5 != -1)
                    zmm6 = _mm_max_ss(
                        _mm_max_ss(_mm_and_ps(*(rcx_5 + rbx_3 + 0x10), 0x7fffffff).d, 
                            _mm_and_ps(*(rcx_5 + rbx_3 + 0xc), 0x7fffffff).d).d, 
                        _mm_and_ps(*(rcx_5 + rbx_3 + 0x14), 0x7fffffff).d)
                else
                    zmm0.d = var_128_1.d.d f* rbx_3[0xa].d
                    zmm6.d = var_128_1:4.d.d f* *(rbx_3 + 0x54)
                    zmm0 = _mm_and_ps(zmm0, 0x7fffffff)
                    zmm6 = _mm_max_ss(_mm_and_ps(zmm6, 0x7fffffff).d, zmm0.d)
                    zmm0.d = var_128_1:8.d.d f* rbx_3[0xb].d
                    zmm6 = _mm_max_ss(zmm6.d, _mm_and_ps(zmm0, 0x7fffffff).d)
                
                arg2.d = var_178_1.d f* *(rbx_3 + 0x54)
                zmm0.d = arg_20.d f* rbx_3[0xa].d
                zmm6.d = zmm6.d f+ _mm_max_ss(
                    _mm_max_ss(_mm_and_ps(arg2, 0x7fffffff).d, _mm_and_ps(zmm0, 0x7fffffff).d).d, 
                    zmm2.d).d
            
            zmm0 = *(arg1 + 0x1a8)
            zmm8[0] = zmm8[0] f+ *(arg1 + 0x1ac)
            zmm9[0] = zmm9[0] f+ *(arg1 + 0x1b0)
            zmm7[0] = zmm7[0] f+ zmm0.d
            zmm0.d = zmm0.d f+ *rbx_3
            float var_190_3 = zmm9[0]
            *rbx_3 = zmm0.d
            arg2.d = (*(arg1 + 0x1ac)).d f+ *(rbx_3 + 4)
            *(rbx_3 + 4) = arg2.d
            zmm2.d = (*(arg1 + 0x1b0)).d f+ rbx_3[1].d
            arg2 = _mm_unpacklo_ps(zmm7, zmm8[0].q)
            rbx_3[1].d = zmm2.d
            rbx_3[2] = arg2.q
            rbx_3[3].d = var_190_3
            zmm0, result, zmm6, zmm7, zmm8, zmm9 = sub_140a454f0(zmm3, 0x40c90fdb)
            *(rbx_3 + 0x2c) = zmm0.d
            rbx = zx.q(arg_8)
            
            if (rbx.b != 0)
                if (rax_8 != 0)
                    int32_t var_12c_1 = 0x3f800000
                    zmm2.d = zmm7[0]
                    uint128_t var_158
                    var_158.q = 0
                    _mm_shuffle_ps(zmm2, zmm2, 0xe1)
                    zmm2.d = zmm8[0]
                    int32_t var_150_1 = 0
                    _mm_shuffle_ps(zmm2, zmm2, 0xc6)
                    zmm2.d = zmm9[0]
                    zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xc9)
                    uint128_t var_138 = zmm2
                    float temp0_50[0x4] =
                        __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0xff), var_e8_1)
                    arg2 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0x55), var_108_1)
                    zmm0 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0xaa), var_f8_1)
                    zmm2 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0), var_118_1)
                    zmm7 = _mm_add_ps(_mm_add_ps(temp0_50, zmm0), _mm_add_ps(arg2, zmm2))
                    zmm8 = _mm_shuffle_ps(zmm7, zmm7, 0x55)
                    zmm9 = _mm_shuffle_ps(zmm7, zmm7, 0xaa)
                
                zmm7[0] = zmm7[0] f+ zmm6.d
                zmm0.d = zmm7.d f- zmm6.d
                zmm12 = _mm_max_ss(zmm7[0], zmm12[0])
                zmm11 = _mm_min_ss(zmm0.d, zmm11.d)
                zmm0.d = zmm8.d f- zmm6.d
                zmm8[0] = zmm8[0] f+ zmm6.d
                zmm14 = _mm_min_ss(zmm0.d, zmm14.d)
                zmm0.d = zmm9.d f- zmm6.d
                var_184_1 = __maxss_xmmss_memss(zmm8[0], var_184_1)[0]
                zmm9[0] = zmm9[0] f+ zmm6.d
                zmm15 = _mm_min_ss(zmm0.d, zmm15.d)
                var_180_1 = __maxss_xmmss_memss(zmm9[0], var_180_1)[0]
            
            i += 1
            r15_2 += 2
            zmm2 = zx.o(0)
        while (i s< *(arg1 + 0x118))
        
        var_170_1 = zmm11.d
        var_188_1 = zmm12[0]
        int32_t var_16c_2 = zmm14.d
        var_168_1 = zmm15.d
    
    if (rbx.b != 0)
        int32_t var_150_2 = var_168_1
        float var_144_1 = var_180_1
        result = zx.q(1.d)
        zmm0.q = var_170_1.q
        *(arg1 + 0x140) = zmm0
        *(arg1 + 0x150) = var_188_1.q
        *(arg1 + 0x158) = result.d

return result
