// 函数: sub_141f4bfa0
// 地址: 0x141f4bfa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint8_t result = (*(*arg1 + 0x428))()

if (result == 0)
    uint128_t zmm6_1
    result, zmm6_1 = sub_141f29460(arg1, arg2, zx.q(arg3), arg4)
    void* r8_1 = arg1[0x16]
    
    if (r8_1 != 0)
        int32_t rax_1 = *(r8_1 + 0xc)
        void* const rax_8
        
        if (rax_1 s>= data_143e1d9b4)
            rax_8 = nullptr
        else
            int16_t temp0_1
            int32_t temp1_1
            temp0_1:temp1_1 = sx.q(rax_1)
            uint32_t rdx_2 = zx.d(temp0_1)
            int32_t rax_3 = temp1_1 + rdx_2
            rax_8 =
                *(data_143e1d9a0 + (sx.q(rax_3 s>> 0x10) << 3)) + sx.q(zx.d(rax_3.w) - rdx_2) * 0x18
        
        result = (*(rax_8 + 8) u>> 0x1d).b
        
        if ((result & 1) == 0)
            uint128_t var_18_1 = zmm6_1
            zmm6_1 = *(r8_1 + 0x1c0)
            float zmm1 = arg2.d f* *(arg1 + 0xf4)
            int128_t zmm7
            zmm7.d = arg2.d f* arg1[0x1f].d
            float var_128 = arg2.d f* arg1[0x1e].d
            float var_124_1 = zmm1
            int32_t var_120_1 = zmm7.d
            float var_b8[0x4]
            uint128_t zmm6_2
            uint128_t zmm8_1
            zmm6_2, zmm8_1 = sub_140ade170(&var_128, &var_b8)
            float zmm2_1[0x4] = var_b8
            uint128_t zmm0_2
            float zmm1_1[0x4]
            float zmm3_1[0x4]
            
            if ((arg1[0x21].b & 1) == 0)
                zmm1_1 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0x55)
                zmm3_1 = _mm_mul_ps(_mm_shuffle_ps(zmm6_2, zmm6_2, 0x1b), 
                    _mm_shuffle_ps(zmm2_1, zmm2_1, 0))
                zmm0_2 = _mm_mul_ps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0xff), zmm6_2)
                zmm3_1 = __mulps_xmmps_memps(zmm3_1, data_143f3b3b0)
                zmm2_1 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xaa)
                zmm3_1 = _mm_add_ps(zmm3_1, zmm0_2)
                zmm0_2 = _mm_shuffle_ps(zmm6_2, zmm6_2, 0x4e)
                zmm6_2 = _mm_shuffle_ps(zmm6_2, zmm6_2, 0xb1)
            else
                zmm1_1 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0x4e)
                zmm3_1 = _mm_mul_ps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0x1b), 
                    _mm_shuffle_ps(zmm6_2, zmm6_2, 0))
                zmm0_2 = _mm_mul_ps(_mm_shuffle_ps(zmm6_2, zmm6_2, 0xff), zmm2_1)
                zmm3_1 = __mulps_xmmps_memps(zmm3_1, data_143f3b3b0)
                zmm2_1 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xb1)
                zmm3_1 = _mm_add_ps(zmm3_1, zmm0_2)
                zmm0_2 = _mm_shuffle_ps(zmm6_2, zmm6_2, 0x55)
                zmm6_2 = _mm_shuffle_ps(zmm6_2, zmm6_2, 0xaa)
            
            zmm1_1 = _mm_mul_ps(zmm1_1, zmm0_2)
            zmm2_1 = _mm_mul_ps(zmm2_1, zmm6_2)
            zmm1_1 = __mulps_xmmps_memps(zmm1_1, data_143f3b3a0)
            zmm2_1 = __mulps_xmmps_memps(zmm2_1, data_143f3b390)
            zmm3_1 = _mm_add_ps(zmm3_1, zmm1_1)
            int64_t var_d8 = data_143dbb1f8.q
            float var_118[0x4] = _mm_add_ps(zmm3_1, zmm2_1)
            int32_t rax_10 = data_143dbb200
            var_118 = var_118
            int32_t var_d0_1 = rax_10
            
            if (0f f!= *(arg1 + 0xfc) || 0f f!= arg1[0x20].d || not(0f f== *(arg1 + 0x104)))
                zmm0_2 = zx.o(*(arg1 + 0xfc))
                zmm6_2 = zmm6_1:4.d
                zmm1_1 = zmm0_2
                int32_t rax_11 = *(arg1 + 0x104)
                float zmm7_1[0x4] = var_118[3]
                uint32_t var_e8_1 = zmm0_2.d
                uint128_t var_38_1 = zmm8_1
                zmm8_1 = var_118[2]
                zmm1_1 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x55)
                zmm0_2.d = zmm1_1.d f* zmm6_1:8.d
                zmm2_1 = rax_11
                uint128_t zmm12 = var_e8_1
                zmm2_1[0] = zmm2_1[0] f* zmm6_2.d
                uint128_t zmm4_1
                zmm4_1.d = zmm12.d f* zmm6_1:8.d
                zmm2_1[0] = zmm2_1[0] f- zmm0_2.d
                uint128_t zmm13 = var_118[0]
                zmm0_2.d = zmm2_1.d f* zmm6_1.d
                zmm2_1[0] = zmm2_1[0] + zmm2_1[0]
                zmm4_1.d = zmm4_1.d f- zmm0_2.d
                int64_t var_c8_1 = zmm1_1.q
                float zmm15[0x4] = zmm1_1
                zmm15[0] = zmm15[0] f* zmm6_1.d
                zmm0_2.d = zmm12.d f* zmm6_2.d
                float var_f8_1 = zmm2_1[0]
                zmm4_1.d = zmm4_1.d f+ zmm4_1.d
                zmm15[0] = zmm15[0] f- zmm0_2.d
                zmm0_2 = zmm6_1:0xc.d
                zmm1_1 = zmm0_2
                zmm1_1[0] = zmm1_1[0] * zmm2_1[0]
                zmm3_1 = rax_11
                float zmm14[0x4] = zmm3_1
                int32_t arg_8 = zmm4_1.d
                zmm14[0] = zmm14[0] * var_118[1]
                zmm15[0] = zmm15[0] + zmm15[0]
                uint128_t zmm10
                zmm10.d = zmm0_2.d f* zmm4_1.d
                zmm0_2.d = zmm0_2.d f* zmm15[0]
                zmm6_2.d = zmm6_2.d f* zmm15[0]
                int32_t var_f4_1 = zmm0_2.d
                zmm0_2 = zx.o(*(arg1 + 0xfc))
                var_128.q = zmm0_2.q
                zmm4_1 = var_128
                uint128_t zmm9 = _mm_shuffle_ps(zmm0_2, zmm0_2, 0x55)
                uint128_t zmm11
                zmm11.d = zmm4_1.d f* zmm8_1.d
                zmm0_2.d = zmm9.d f* zmm8_1.d
                zmm14[0] = zmm14[0] f- zmm0_2.d
                zmm0_2.d = zmm3_1.d f* zmm13.d
                zmm11.d = zmm11.d f- zmm0_2.d
                zmm0_2.d = zmm4_1.d f* var_118[1]
                zmm14[0] = zmm14[0] + zmm14[0]
                float zmm5_1 = zmm9.d f* zmm13.d f- zmm0_2.d
                zmm0_2.d = zmm6_1:8.d.d f* arg_8
                zmm11.d = zmm11.d f+ zmm11.d
                zmm7_1[0] = zmm7_1[0] * zmm14[0]
                zmm5_1 = zmm5_1 + zmm5_1
                zmm7_1[0] = zmm7_1[0] f* zmm11.d
                zmm7_1[0] = zmm7_1[0] * zmm5_1
                zmm15[0] = zmm15[0] f* zmm6_1.d
                zmm6_2.d = zmm6_2.d f- zmm0_2.d
                zmm12.d = zmm12.d f+ zmm1_1[0]
                zmm0_2.d = zmm8_1.d f* zmm11.d
                zmm9.d = zmm9.d f+ zmm7_1[0]
                zmm3_1 = arg_8
                zmm4_1.d = zmm4_1.d f+ zmm7_1[0]
                zmm3_1[0] = zmm3_1[0] f* zmm6_1.d
                zmm6_2.d = zmm6_2.d f+ zmm12.d
                zmm8_1.d = zmm8_1.d f* zmm14[0]
                zmm12 = var_118[1]
                zmm1_1 = zmm12
                zmm12.d = zmm12.d f* zmm14[0]
                zmm1_1[0] = zmm1_1[0] * zmm5_1
                zmm1_1[0] = zmm1_1[0] f- zmm0_2.d
                zmm0_2.d = var_c8_1.d f+ zmm10.d
                zmm1_1[0] = zmm1_1[0] f+ zmm4_1.d
                zmm4_1.d = zmm6_1:8.d.d f* var_f8_1
                zmm4_1.d = zmm4_1.d f- zmm15[0]
                zmm6_2.d = zmm6_2.d f- zmm1_1[0]
                zmm1_1 = rax_11
                zmm1_1[0] = zmm1_1[0] f+ var_f4_1
                zmm4_1.d = zmm4_1.d f+ zmm0_2.d
                zmm0_2.d = zmm13.d f* zmm5_1
                zmm13.d = zmm13.d f* zmm11.d
                zmm8_1.d = zmm8_1.d f- zmm0_2.d
                zmm0_2.d = zmm6_1:4.d.d f* var_f8_1
                zmm13.d = zmm13.d f- zmm12.d
                zmm8_1.d = zmm8_1.d f+ zmm9.d
                zmm3_1[0] = zmm3_1[0] f- zmm0_2.d
                zmm0_2.d = rax_11.d f+ zmm7_1[0]
                zmm4_1.d = zmm4_1.d f- zmm8_1.d
                zmm3_1[0] = zmm3_1[0] + zmm1_1[0]
                zmm13.d = zmm13.d f+ zmm0_2.d
                var_d8 = (_mm_unpacklo_ps(zmm6_2, zmm4_1.q)).q
                zmm3_1[0] = zmm3_1[0] f- zmm13.d
                float var_d0_2 = zmm3_1[0]
            
            result = (*(*arg1 + 0x478))(arg1, &var_d8, &var_118, 0, 0, 0)

return result
