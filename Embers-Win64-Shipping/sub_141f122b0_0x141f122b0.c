// 函数: sub_141f122b0
// 地址: 0x141f122b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = arg1[0x16]

if (result != 0 && arg1[0x31].b != 1)
    bool cond:0_1 = arg1[0x2c].d == 0
    float zmm2[0x4] = *(result + 0x1d0)
    result = zx.q(_mm_shuffle_ps(zmm2, zmm2, 0xaa)[0])
    *(arg1 + 0x17c) = (_mm_unpacklo_ps(zmm2, _mm_shuffle_ps(zmm2, zmm2, 0x55)[0].q)).q
    float zmm0[0x4] = 0x3f800000
    zmm0[0] = 1f f/ arg1[0x1e].d
    *(arg1 + 0x184) = result.d
    *(arg1 + 0x16c) = zmm0[0]
    
    if (not(cond:0_1))
        int64_t rdx
        rdx.b = 1
        (*(*arg1 + 0x528))(arg1, rdx)
        int32_t var_c8[0x4]
        (*(*arg1 + 0x520))(arg1, &var_c8, zx.o(0))
        int64_t* rsi_1 = arg1[0x16]
        float zmm1[0x4] = *(rsi_1 + 0x1c0)
        float (* rdi_1)[0x4] = &rsi_1[0x30]
        uint32_t temp0_5 = _mm_movemask_ps(_mm_cmpeq_ps(*rdi_1, zmm1, 4))
        float var_b8[0x4] = zmm1
        
        if (temp0_5 != 0)
            *rdi_1 = zmm1
            void var_a8
            int64_t* rax_3 = sub_140adf5d0(&var_b8, &var_a8)
            rdi_1[1][0].q = *rax_3
            (*rdi_1)[6] = rax_3[1].d
            rsi_1 = arg1[0x16]
        
        int64_t var_d8 = rdi_1[1][0].q
        float var_d0_2 = (*rdi_1)[6]
        void var_98
        memset(&var_98, 0, 0x88)
        int32_t var_90_1 = 0x3f800000
        result = sub_141f42080(rsi_1, &var_c8, &var_d8, 0, &var_98, 0, 0)
        arg1[0x31].b = 1

return result
