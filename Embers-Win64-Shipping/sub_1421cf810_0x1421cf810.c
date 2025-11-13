// 函数: sub_1421cf810
// 地址: 0x1421cf810
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = *(arg1 + 0x18)
float zmm12[0x4] = arg2

if (result != 0 && *(arg1 + 0x118) s> 0)
    char rcx = *(result + 0x432) & 2
    void* rdx_1
    
    if (rcx == 0)
        rdx_1 = *(result + 0x408)
    
    uint64_t rbx
    
    if (rcx != 0 || rdx_1 == 0 || (*(rdx_1 + 0xb0) & 2) != 0)
        rbx.b = 0
    else
        rbx.b = 1
    
    int96_t var_128_1 = (*(result + 0x1e0)).12
    char arg_8 = rbx.b
    int64_t var_198
    uint64_t var_188_1
    uint128_t var_148
    uint64_t var_13c
    uint128_t zmm0
    
    if (rcx != 0)
        __builtin_memset(&var_198, 0, 0x1c)
    else
        void* rcx_1 = *(*(arg1 + 0x1d0) + 0x30)
        
        if (rcx_1 == 0)
            int32_t var_170_1 = 0
            arg2 = _mm_unpacklo_ps(zx.o(0), 0)
            int32_t var_140_1 = 0
            int32_t var_1a0_1 = 0
            var_13c = (_mm_unpacklo_ps(zx.o(0), 0)).q
            int32_t var_134_1 = 0
            int32_t var_130_1 = 0
            zmm0.q = arg2.q
            var_148 = zmm0
            var_198.o = zmm0
            var_188_1 = var_13c
        else
            int128_t* rax_1 = sub_1423633d0(rcx_1, &var_148)
            var_198.o = *rax_1
            var_188_1 = rax_1[1].q
    
    float zmm6[0x4]
    float var_48_1[0x4] = zmm6
    char r13_1 = *(*(*(arg1 + 0x28) + 0x30) + 0x59) & 1
    float var_118_1[0x4]
    uint128_t var_108_1
    float var_f8_1[0x4]
    uint128_t var_e8_1
    uint128_t zmm2
    uint128_t zmm3
    uint128_t zmm4
    uint128_t zmm5
    
    if (r13_1 == 0)
        var_118_1 = data_14399f6e0
        var_108_1 = data_14399f6f0
        var_f8_1 = data_14399f700
        var_e8_1 = data_14399f710
    else
        void* rax_3 = *(arg1 + 0x18)
        zmm3 = *(rax_3 + 0x1c0)
        zmm4 = zmm3
        arg2 = _mm_add_ps(zmm3, zmm3)
        zmm2 = _mm_shuffle_ps(zmm3, zmm3, 4)
        zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xff)
        zmm4 = _mm_mul_ps(zmm4, arg2)
        zmm2 = _mm_mul_ps(zmm2, _mm_shuffle_ps(arg2, arg2, 0x29))
        zmm3 = _mm_mul_ps(zmm3, _mm_shuffle_ps(arg2, arg2, 0x12))
        arg2 = *(rax_3 + 0x1e0)
        zmm0 = _mm_shuffle_ps(zmm4, zmm4, 0x1a)
        zmm5 = _mm_shuffle_ps(arg2, arg2, 0xc9)
        zmm0 = _mm_add_ps(zmm0, _mm_shuffle_ps(zmm4, zmm4, 1))
        zmm4 = data_143f4dea0
        float temp0_15[0x4] = _mm_add_ps(zmm3, zmm2)
        zmm2 = _mm_sub_ps(zmm2, zmm3)
        zmm3 = _mm_sub_ps(zmm4, zmm0)
        float temp0_18[0x4] = _mm_mul_ps(temp0_15, arg2)
        zmm5 = _mm_mul_ps(zmm5, zmm2)
        zmm3 = __andps_xmmxud_memxud(_mm_mul_ps(zmm3, arg2), data_143f4deb0)
        zmm0 = _mm_shuffle_ps(zmm5, zmm3, 0x32)
        arg2 = _mm_shuffle_ps(_mm_shuffle_ps(temp0_18, zmm3, 0), zmm0, 0x82)
        zmm0 = _mm_shuffle_ps(temp0_18, zmm3, 0x31)
        zmm2 = _mm_shuffle_ps(_mm_shuffle_ps(zmm5, zmm3, 0x10), zmm0, 0x88)
        zmm0 = *(rax_3 + 0x1d0)
        zmm4.q = zmm0 u>> 0x40
        float temp0_28[0x4] = _mm_shuffle_ps(temp0_18, zmm5, 0x12)
        var_e8_1 = _mm_shuffle_ps(zmm0, zmm4, 0xc4)
        var_118_1 = arg2
        var_108_1 = zmm2
        var_f8_1 = _mm_shuffle_ps(temp0_28, zmm3, 0xe8)
    
    if (rbx.b != 0)
        *(arg1 + 0x14c) = data_143dbb1f8.q
        int32_t rax_4 = data_143dbb200
        *(arg1 + 0x154) = rax_4
        *(arg1 + 0x140) = *(arg1 + 0x14c)
        *(arg1 + 0x148) = rax_4
        *(arg1 + 0x158) = 0
    
    uint128_t zmm13 = 0x49800000
    uint128_t zmm14 = 0xc9800000
    uint128_t zmm15 = 0x49800000
    *(arg1 + 0xf0)
    int32_t var_178_1 = 0x49800000
    int32_t var_174_1 = 0x49800000
    int32_t var_170_2 = 0x49800000
    int32_t var_1a8_1 = 0xc9800000
    int32_t var_1a4_1 = 0xc9800000
    int32_t var_1a0_2 = 0xc9800000
    zx.d(**(arg1 + 0xf8)) * *(arg1 + 0x114)
    result = *(arg1 + 0x10)
    int32_t i = 0
    char r12_1 = not.b(*(result + 0x37)) & 1
    int64_t var_190
    
    if (*(arg1 + 0x118) s> 0)
        arg2 = var_198.d
        zmm2 = var_198:4.d
        zmm4 = arg2
        arg2.d = arg2.d f- var_190:4.d
        zmm4.d = zmm4.d f+ var_190:4.d
        zmm5 = zmm2
        zmm2.d = zmm2.d f- var_188_1.d
        zmm5.d = zmm5.d f+ var_188_1.d
        float zmm7[0x4]
        float var_58_1[0x4] = zmm7
        int64_t r15_1 = 0
        zmm4.d = zmm4.d f- arg2.d
        float zmm8[0x4]
        float var_68_1[0x4] = zmm8
        arg2 = var_190.d
        uint128_t zmm9
        uint128_t var_78_1 = zmm9
        zmm5.d = zmm5.d f- zmm2.d
        uint128_t zmm10
        uint128_t var_88_1 = zmm10
        zmm2.d = arg2.d f+ var_188_1:4.d
        arg2.d = arg2.d f- var_188_1:4.d
        uint128_t zmm11 = 0x3f000000
        int32_t arg_18 = zmm4.d
        int32_t arg_20 = zmm5.d
        zmm2.d = zmm2.d f- arg2.d
        int32_t var_158_1 = zmm2.d
        
        do
            r15_1 += 2
            uint64_t* rbx_2 =
                sx.q(zx.d(*(*(arg1 + 0xf8) + r15_1 - 2)) * *(arg1 + 0x114)) + *(arg1 + 0xf0)
            int32_t rdx_5 = *(rbx_2 + 0x5c)
            int32_t rax_9 = rbx_2[3].d
            int32_t rcx_8 = rdx_5 & 0xfdffffff
            zmm0 = zx.o(rbx_2[2])
            *rbx_2 = zmm0.q
            rbx_2[1].d = rax_9
            *(rbx_2 + 0x5c) = rcx_8
            uint8_t rax_11
            
            if (((rdx_5 u>> 0x19).b & 1) == 0 || r12_1 == 0)
                rax_11 = 0
            else
                rax_11 = 1
            
            if (test_bit(rdx_5, 0x1a) || rax_11 != 0)
                int32_t rax_13 = rbx_2[3].d
                zmm3 = *(rbx_2 + 0x2c)
                zmm7 = _mm_shuffle_ps(zmm0, zmm0, 0x55)
                zmm6 = zmm0.d
                zmm8 = rax_13
            else
                if (test_bit(rcx_8, 0x1c))
                    int32_t rax_12 = rbx_2[3].d
                    zmm7 = _mm_shuffle_ps(zmm0, zmm0, 0x55)
                    zmm6 = zmm0.d
                    zmm8 = rax_12
                else
                    zmm6 = zmm12
                    zmm7 = zmm12
                    zmm6[0] = zmm6[0] f* rbx_2[6].d
                    zmm8 = zmm12
                    zmm7[0] = zmm7[0] f* *(rbx_2 + 0x34)
                    zmm8[0] = zmm8[0] f* rbx_2[7].d
                    zmm6[0] = zmm6[0] f+ rbx_2[2].d
                    zmm7[0] = zmm7[0] f+ *(rbx_2 + 0x14)
                    zmm8[0] = zmm8[0] f+ rbx_2[3].d
                
                zmm0 = *(rbx_2 + 0x2c)
                
                if (test_bit(rcx_8, 0x1d))
                    zmm3 = zmm0
                else
                    zmm3.d = zmm12.d f* *(rbx_2 + 0x4c)
                    zmm3.d = zmm3.d f+ zmm0.d
            
            arg2 = *(arg1 + 0x1a8)
            zmm9.d = zmm4.d f* rbx_2[0xa].d
            zmm6[0] = zmm6[0] f+ arg2.d
            arg2.d = arg2.d f+ *rbx_2
            zmm8[0] = zmm8[0] f+ *(arg1 + 0x1b0)
            zmm7[0] = zmm7[0] f+ *(arg1 + 0x1ac)
            zmm9.d = zmm9.d f* zmm11.d
            zmm10.d = zmm5.d f* *(rbx_2 + 0x54)
            zmm9.d = zmm9.d f* var_128_1.d
            zmm10.d = zmm10.d f* zmm11.d
            zmm11.d = zmm2.d f* rbx_2[0xb].d
            zmm10.d = zmm10.d f* var_128_1:4.d
            zmm11.d = zmm11.d f* 0.5f
            *rbx_2 = arg2.d
            arg2.d = (*(arg1 + 0x1ac)).d f+ *(rbx_2 + 4)
            zmm11.d = zmm11.d f* var_128_1:8.d
            float result_1 = zmm8[0]
            *(rbx_2 + 4) = arg2.d
            zmm2.d = (*(arg1 + 0x1b0)).d f+ rbx_2[1].d
            rbx_2[1].d = zmm2.d
            zmm0, zmm6, zmm7, zmm8, zmm9 = sub_140a454f0(zmm3, 0x40c90fdb)
            result = zx.q(result_1)
            rbx_2[2] = (_mm_unpacklo_ps(zmm6, zmm7[0].q)).q
            rbx_2[3].d = result.d
            *(rbx_2 + 0x2c) = zmm0.d
            rbx = zx.q(arg_8)
            
            if (rbx.b != 0)
                if (r13_1 != 0)
                    var_13c.d = 0x3f800000
                    zmm2.d = zmm6[0]
                    var_198 = 0
                    _mm_shuffle_ps(zmm2, zmm2, 0xe1)
                    zmm2.d = zmm7[0]
                    var_190.d = 0
                    _mm_shuffle_ps(zmm2, zmm2, 0xc6)
                    zmm2.d = zmm8[0]
                    zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xc9)
                    var_148 = zmm2
                    float temp0_38[0x4] =
                        __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0xff), var_e8_1)
                    arg2 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0x55), var_108_1)
                    zmm0 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0xaa), var_f8_1)
                    zmm2 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0), var_118_1)
                    zmm6 = _mm_add_ps(_mm_add_ps(temp0_38, zmm0), _mm_add_ps(arg2, zmm2))
                    zmm7 = _mm_shuffle_ps(zmm6, zmm6, 0x55)
                    zmm8 = _mm_shuffle_ps(zmm6, zmm6, 0xaa)
                
                zmm0.d = zmm6.d f- zmm9.d
                zmm9.d = zmm9.d f+ zmm6[0]
                zmm13 = _mm_min_ss(zmm0.d, zmm13.d)
                zmm0.d = zmm7.d f- zmm10.d
                zmm14 = _mm_max_ss(zmm9.d, zmm14.d)
                zmm10.d = zmm10.d f+ zmm7[0]
                zmm15 = _mm_min_ss(zmm0.d, zmm15.d)
                zmm0.d = zmm8.d f- zmm11.d
                var_1a4_1 = __maxss_xmmss_memss(zmm10.d, var_1a4_1).d
                zmm11.d = zmm11.d f+ zmm8[0]
                var_170_2 = __minss_xmmss_memss(zmm0.d, var_170_2).d
                var_1a0_2 = __maxss_xmmss_memss(zmm11.d, var_1a0_2).d
            
            zmm4 = arg_18
            i += 1
            zmm5 = arg_20
            zmm2 = var_158_1
            zmm11 = 0x3f000000
        while (i s< *(arg1 + 0x118))
        
        var_178_1 = zmm13.d
        var_1a8_1 = zmm14.d
        int32_t var_174_2 = zmm15.d
    
    if (rbx.b != 0)
        var_190 = var_1a8_1.q
        var_190.d = var_170_2
        var_188_1:4.d = var_1a0_2
        int32_t var_180
        var_180.b = 1
        result = 1
        zmm0.q = var_178_1.q
        *(arg1 + 0x140) = zmm0
        *(arg1 + 0x150) = var_188_1
        *(arg1 + 0x158) = 1

return result
