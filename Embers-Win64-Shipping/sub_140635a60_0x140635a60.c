// 函数: sub_140635a60
// 地址: 0x140635a60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result

if (arg1 == 0)
    result.b = 0
else
    void* rax = sub_1424890f0()
    void* r8_1 = *(arg1 + 0x10)
    result = sx.q(*(rax + 0x38))
    
    if (result.d s> *(r8_1 + 0x38))
        result.b = 0
    else if (*(*(r8_1 + 0x30) + (result << 3)) != rax + 0x30)
        result.b = 0
    else
        void* rcx_1 = *(arg1 + 0x280)
        
        if (rcx_1 == 0)
            result.b = 0
        else
            uint64_t var_68 = 0
            int32_t var_60_1 = 0
            sub_141f5e6a0(rcx_1, &var_68)
            uint64_t var_88
            uint64_t var_78
            
            if (var_60_1 s> 0)
                int32_t* rax_1 = sub_141f5e140(*(arg1 + 0x280), &var_78, *var_68, 0)
                int128_t zmm6
                zmm6.d = arg3.d f+ rax_1[2]
                var_88.d = *rax_1
                var_88:4.d = rax_1[1]
                int32_t var_80_1 = zmm6.d
                sub_141dd67f0(arg1, &var_88, 0, nullptr, 0)
            
            int64_t* rcx_4 = *(arg1 + 0x280)
            (*(*rcx_4 + 0x588))(rcx_4, 0)
            int64_t arg_8 = 0
            sub_141f32b40(*(arg1 + 0x280), *(arg1 + 0x290), &data_143f3f280, 0)
            int64_t* rcx_6 = *(arg1 + 0x280)
            int32_t rax_4 = arg5[1].d
            var_88 = *arg5
            int32_t var_80_2 = rax_4
            float zmm7_1[0x4]
            float zmm8_1[0x4]
            float zmm9_1[0x4]
            float zmm10_1[0x4]
            zmm7_1, zmm8_1, zmm9_1, zmm10_1 = sub_141f48c80(rcx_6, &var_88, 0, 0, 0)
            int64_t* rdi_1 = *(arg1 + 0x280)
            int32_t rax_5 = arg4[1].d
            var_78 = *arg4
            uint128_t zmm0_3 = zx.o(rdi_1[0x25])
            bool cond:0_1 = zmm0_3.d f!= rdi_1[0x36].d
            int32_t var_70_1 = rax_5
            int32_t rax_6 = rdi_1[0x26].d
            var_88 = zmm0_3.q
            
            if (cond:0_1 || var_88:4.d.d f!= *(rdi_1 + 0x1b4) || not(rax_6.d f== rdi_1[0x37].d))
                uint128_t zmm3_1 = zx.o(rdi_1[0x25])
                float zmm2[0x4] = data_143cdbd80
                uint32_t zmm5_1[0x4] = data_143cdbcf0
                float var_38_1[0x4] = zmm7_1
                zmm7_1 = _mm_unpacklo_ps(zmm3_1, _mm_shuffle_ps(zmm3_1, zmm3_1, 0x55).q)[0].q
                    | rax_6[0].q << 0x40
                var_88 = zmm3_1.q
                float var_48_1[0x4] = zmm8_1
                zmm8_1 = data_143cdbd70
                zmm3_1 = _mm_div_ps(zmm7_1, zmm8_1)
                uint32_t temp0_4[0x4] = _mm_and_ps(zmm5_1, zmm8_1)
                float temp0_6[0x4] = _mm_cvtepi32_ps(_mm_cvttps_epi32(zmm3_1))
                zmm2 = _mm_and_ps(
                    _mm_cmpeq_ps(zmm2, __andps_xmmxud_memxud(zmm3_1, data_143cdbcf0), 2), 
                    temp0_6 ^ zmm3_1) ^ temp0_6
                uint128_t zmm1_2 = _mm_max_ps(_mm_sub_ps(zx.o(0), temp0_4), 
                    _mm_min_ps(_mm_sub_ps(zmm7_1, _mm_mul_ps(zmm2, zmm8_1)), temp0_4))
                float temp0_15[0x4] = _mm_cmpeq_ps(zx.o(0), zmm1_2, 2)
                zmm0_3 = _mm_add_ps(zmm1_2, zmm8_1)
                zmm2 = _mm_and_ps(zmm0_3 ^ zmm1_2, temp0_15) ^ zmm0_3
                zmm0_3 = _mm_cmpeq_ps(data_143cdbd60, zmm2, 1)
                zmm1_2 = _mm_and_ps(_mm_sub_ps(zmm2, zmm8_1) ^ zmm2, zmm0_3) ^ zmm2
                int32_t var_80_5 = _mm_shuffle_ps(zmm1_2, zmm1_2, 0xaa).d
                rdi_1[0x36] = (_mm_unpacklo_ps(zmm1_2, _mm_shuffle_ps(zmm1_2, zmm1_2, 0x55)[0].q)).q
                rdi_1[0x37].d = var_80_5
                zmm8_1 = var_48_1
                zmm7_1 = var_38_1
                void var_58
                *(rdi_1 + 0x1a0) = *sub_140ade170(rdi_1 + 0x1b0, &var_58)
            
            var_88.o = *(rdi_1 + 0x1a0)
            sub_141f48240(rdi_1, &var_78, &var_88, 0, zmm7_1, zmm8_1, zmm9_1, zmm10_1, 0, 0)
            
            if (arg2 != 0)
                int64_t* rcx_9 = *(arg1 + 0x288)
                
                if (rcx_9 != 0)
                    (*(*rcx_9 + 0x590))(rcx_9, 3, 0)
            
            uint64_t rcx_10 = var_68
            
            if (rcx_10 != 0)
                sub_140a74f90(rcx_10)
            
            result.b = 1

return result
