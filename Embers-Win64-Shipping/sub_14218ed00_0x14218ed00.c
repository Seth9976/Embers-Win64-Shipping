// 函数: sub_14218ed00
// 地址: 0x14218ed00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = &__return_addr

if (*(arg1 + 0x18) != 0)
    *(arg1 + 0x14c) = data_143dbb1f8.q
    uint128_t zmm6 = zx.o(0)
    uint128_t zmm7 = zx.o(0)
    int32_t rax = data_143dbb200
    uint128_t zmm8 = 0x3f800000
    *(arg1 + 0x154) = rax
    *(arg1 + 0x140) = *(arg1 + 0x14c)
    *(arg1 + 0x148) = rax
    *(arg1 + 0x158) = 0
    uint128_t zmm2 = *(*(arg1 + 0x18) + 0x1d0)
    *(arg1 + 0x158) = 1
    int32_t var_160_1 = _mm_shuffle_ps(zmm2, zmm2, 0xaa).d
    uint128_t zmm0 = _mm_unpacklo_ps(zmm2, _mm_shuffle_ps(zmm2, zmm2, 0x55).q)
    *(arg1 + 0x14c) = zmm0.q
    *(arg1 + 0x140) = zmm0.q
    *(arg1 + 0x154) = var_160_1
    *(arg1 + 0x148) = var_160_1
    void* rcx = *(arg1 + 0x1e8)
    int32_t arg_8
    int32_t arg_10
    
    if (rcx != 0)
        sub_141fe3590(rcx + 0x40, &arg_8, &arg_10)
        zmm6 = arg_8
        zmm7 = arg_10
    
    int32_t i = 0
    uint128_t var_168_1 = *(*(arg1 + 0x18) + 0x1e0)
    uint128_t zmm1
    uint128_t zmm3
    uint128_t zmm4
    float zmm5[0x4]
    
    if (*(arg1 + 0x118) s> 0)
        void* r14_1 = nullptr
        uint32_t zmm9[0x4]
        uint32_t var_78_1[0x4] = zmm9
        uint32_t zmm10[0x4]
        uint32_t var_88_1[0x4] = zmm10
        uint32_t zmm12[0x4] = var_160_1
        float zmm13[0x4] = var_168_1:4.d
        uint32_t zmm14[0x4] = var_168_1.d
        
        do
            int64_t* rcx_4 = *(arg1 + 0x1d0)
            void* rdi_2 = sx.q(zx.d(*(r14_1 + *(arg1 + 0xf8))) * *(arg1 + 0x114)) + *(arg1 + 0xf0)
            arg_8 = *(arg1 + 0x30)
            __builtin_memset(&arg_10, 0, 0x18)
            int64_t var_108
            __builtin_memset(&var_108, 0, 0x38)
            int64_t var_100
            int64_t var_f8
            int64_t var_f0
            int64_t var_e8
            int64_t var_e0
            int64_t var_d8
            int64_t arg_18
            int64_t arg_20
            (*(*rcx_4 + 0x388))(rcx_4, arg1, rdi_2, &arg_8, &arg_10, &var_d8, &var_e0, &var_e8, 
                &var_f0, &var_f8, &var_100, &var_108, &arg_20, &arg_18, var_168_1)
            uint32_t rax_7 = zx.d(*(arg1 + 0x158))
            zmm14[0] = zmm14[0] f* *(rdi_2 + 0x50)
            zmm13[0] = zmm13[0] f* *(rdi_2 + 0x54)
            zmm12[0] = zmm12[0] f* *(rdi_2 + 0x58)
            
            if (rax_7.b == 0)
                *(arg1 + 0x14c) = *(rdi_2 + 0x10)
                rax_7 = *(rdi_2 + 0x18)
                *(arg1 + 0x154) = rax_7
                *(arg1 + 0x140) = *(arg1 + 0x14c)
                *(arg1 + 0x148) = rax_7
                rax_7.b = 1
                *(arg1 + 0x158) = 1
            else
                *(arg1 + 0x140) = __minss_xmmss_memss((*(rdi_2 + 0x10)).d, *(arg1 + 0x140)).d
                *(arg1 + 0x144) = __minss_xmmss_memss((*(rdi_2 + 0x14)).d, *(arg1 + 0x144)).d
                *(arg1 + 0x148) = __minss_xmmss_memss((*(rdi_2 + 0x18)).d, *(arg1 + 0x148)).d
                *(arg1 + 0x14c) = __maxss_xmmss_memss((*(rdi_2 + 0x10)).d, *(arg1 + 0x14c)).d
                *(arg1 + 0x150) = __maxss_xmmss_memss((*(rdi_2 + 0x14)).d, *(arg1 + 0x150)).d
                *(arg1 + 0x154) = __maxss_xmmss_memss((*(rdi_2 + 0x18)).d, *(arg1 + 0x154)).d
            
            zmm2.d = zmm6.d f+ *(rdi_2 + 0x10)
            zmm3.d = zmm6.d f+ *(rdi_2 + 0x14)
            zmm4.d = zmm6.d f+ *(rdi_2 + 0x18)
            int32_t var_138_1 = zmm3.d
            uint32_t var_134_1 = zmm4.d
            
            if (rax_7.b == 0)
                zmm1 = zx.o(zmm2.d.q)
                *(arg1 + 0x14c) = zmm1.q
                *(arg1 + 0x140) = zmm1.q
                *(arg1 + 0x154) = var_134_1
                *(arg1 + 0x148) = var_134_1
                rax_7.b = 1
                *(arg1 + 0x158) = 1
            else
                zmm0 = __minss_xmmss_memss(zmm2.d, *(arg1 + 0x140))
                zmm1 = __minss_xmmss_memss(zmm3.d, *(arg1 + 0x144))
                zmm2 = __maxss_xmmss_memss(zmm2.d, *(arg1 + 0x14c))
                zmm3 = __maxss_xmmss_memss(zmm3.d, *(arg1 + 0x150))
                *(arg1 + 0x140) = zmm0.d
                zmm0 = _mm_min_ss((*(arg1 + 0x148)).d, zmm4.d)
                *(arg1 + 0x144) = zmm1.d
                zmm4 = __maxss_xmmss_memss(zmm4.d, *(arg1 + 0x154))
                *(arg1 + 0x14c) = zmm2.d
                *(arg1 + 0x150) = zmm3.d
                *(arg1 + 0x148) = zmm0.d
                *(arg1 + 0x154) = zmm4.d
            
            zmm2.d = zmm7.d f+ *(rdi_2 + 0x10)
            zmm4.d = zmm7.d f+ *(rdi_2 + 0x14)
            zmm3.d = zmm7.d f+ *(rdi_2 + 0x18)
            int32_t var_12c_1 = zmm4.d
            uint32_t var_128_1 = zmm3.d
            
            if (rax_7.b == 0)
                zmm1 = zx.o(zmm2.d.q)
                *(arg1 + 0x14c) = zmm1.q
                *(arg1 + 0x140) = zmm1.q
                *(arg1 + 0x154) = var_128_1
                *(arg1 + 0x148) = var_128_1
                rax_7.b = 1
                *(arg1 + 0x158) = 1
            else
                zmm0 = __minss_xmmss_memss(zmm2.d, *(arg1 + 0x140))
                zmm1 = __minss_xmmss_memss(zmm4.d, *(arg1 + 0x144))
                zmm2 = __maxss_xmmss_memss(zmm2.d, *(arg1 + 0x14c))
                *(arg1 + 0x140) = zmm0.d
                zmm0 = __minss_xmmss_memss(zmm3.d, *(arg1 + 0x148))
                zmm3 = __maxss_xmmss_memss(zmm3.d, *(arg1 + 0x154))
                *(arg1 + 0x144) = zmm1.d
                *(arg1 + 0x14c) = zmm2.d
                *(arg1 + 0x148) = zmm0.d
                zmm0 = _mm_max_ss((*(arg1 + 0x150)).d, zmm4.d)
                *(arg1 + 0x154) = zmm3.d
                *(arg1 + 0x150) = zmm0.d
            
            int32_t* rcx_5 = arg_10.q
            
            if (rax_7.b == 0)
                *(arg1 + 0x14c) = *rcx_5
                rax_7 = rcx_5[2]
                *(arg1 + 0x154) = rax_7
                *(arg1 + 0x140) = *(arg1 + 0x14c)
                *(arg1 + 0x148) = rax_7
                rax_7.b = 1
                *(arg1 + 0x158) = 1
            else
                *(arg1 + 0x140) = __minss_xmmss_memss((*(arg1 + 0x140)).d, *rcx_5).d
                *(arg1 + 0x144) = __minss_xmmss_memss(rcx_5[1].d, *(arg1 + 0x144)).d
                *(arg1 + 0x148) = __minss_xmmss_memss((*(arg1 + 0x148)).d, rcx_5[2]).d
                *(arg1 + 0x14c) = __maxss_xmmss_memss((*rcx_5).d, *(arg1 + 0x14c)).d
                zmm1 = *(arg1 + 0x154)
                *(arg1 + 0x150) = __maxss_xmmss_memss(rcx_5[1].d, *(arg1 + 0x150)).d
                *(arg1 + 0x154) = __maxss_xmmss_memss(zmm1.d, rcx_5[2]).d
            
            zmm4.d = zmm6.d f+ *rcx_5
            zmm2.d = zmm6.d f+ rcx_5[1]
            zmm3.d = zmm6.d f+ rcx_5[2]
            int32_t var_120_1 = zmm2.d
            uint32_t var_11c_1 = zmm3.d
            
            if (rax_7.b == 0)
                zmm1 = zx.o(zmm4.d.q)
                *(arg1 + 0x14c) = zmm1.q
                *(arg1 + 0x140) = zmm1.q
                *(arg1 + 0x154) = var_11c_1
                *(arg1 + 0x148) = var_11c_1
                rax_7.b = 1
                *(arg1 + 0x158) = 1
            else
                zmm0 = __minss_xmmss_memss(zmm4.d, *(arg1 + 0x140))
                zmm1 = __minss_xmmss_memss(zmm2.d, *(arg1 + 0x144))
                zmm2 = __maxss_xmmss_memss(zmm2.d, *(arg1 + 0x150))
                *(arg1 + 0x140) = zmm0.d
                zmm0 = *(arg1 + 0x148)
                *(arg1 + 0x144) = zmm1.d
                zmm0 = _mm_min_ss(zmm0.d, zmm3.d)
                zmm1 = *(arg1 + 0x14c)
                zmm3 = __maxss_xmmss_memss(zmm3.d, *(arg1 + 0x154))
                zmm1 = _mm_max_ss(zmm1.d, zmm4.d)
                *(arg1 + 0x150) = zmm2.d
                *(arg1 + 0x148) = zmm0.d
                *(arg1 + 0x154) = zmm3.d
                *(arg1 + 0x14c) = zmm1.d
            
            zmm4.d = zmm7.d f+ *rcx_5
            zmm2.d = zmm7.d f+ rcx_5[1]
            zmm3.d = zmm7.d f+ rcx_5[2]
            int32_t var_114_1 = zmm2.d
            uint32_t var_110_1 = zmm3.d
            
            if (rax_7.b == 0)
                zmm1 = zx.o(zmm4.d.q)
                *(arg1 + 0x14c) = zmm1.q
                *(arg1 + 0x140) = zmm1.q
                *(arg1 + 0x154) = var_110_1
                *(arg1 + 0x148) = var_110_1
                rax_7.b = 1
                *(arg1 + 0x158) = 1
            else
                zmm0 = __minss_xmmss_memss(zmm4.d, *(arg1 + 0x140))
                zmm1 = __minss_xmmss_memss(zmm2.d, *(arg1 + 0x144))
                zmm2 = __maxss_xmmss_memss(zmm2.d, *(arg1 + 0x150))
                *(arg1 + 0x140) = zmm0.d
                zmm0 = __minss_xmmss_memss(zmm3.d, *(arg1 + 0x148))
                zmm3 = __maxss_xmmss_memss(zmm3.d, *(arg1 + 0x154))
                *(arg1 + 0x144) = zmm1.d
                zmm1 = _mm_max_ss((*(arg1 + 0x14c)).d, zmm4.d)
                *(arg1 + 0x150) = zmm2.d
                *(arg1 + 0x148) = zmm0.d
                *(arg1 + 0x154) = zmm3.d
                *(arg1 + 0x14c) = zmm1.d
            
            if (rax_7.b == 0)
                *(arg1 + 0x14c) = *(rcx_5 + 0x1c)
                rax_7 = rcx_5[9]
                *(arg1 + 0x154) = rax_7
                *(arg1 + 0x140) = *(arg1 + 0x14c)
                *(arg1 + 0x148) = rax_7
                rax_7.b = 1
                *(arg1 + 0x158) = 1
            else
                *(arg1 + 0x140) = __minss_xmmss_memss((*(arg1 + 0x140)).d, rcx_5[7]).d
                *(arg1 + 0x144) = __minss_xmmss_memss(rcx_5[8].d, *(arg1 + 0x144)).d
                *(arg1 + 0x148) = __minss_xmmss_memss(rcx_5[9].d, *(arg1 + 0x148)).d
                *(arg1 + 0x14c) = __maxss_xmmss_memss(rcx_5[7].d, *(arg1 + 0x14c)).d
                zmm1 = *(arg1 + 0x154)
                *(arg1 + 0x150) = __maxss_xmmss_memss(rcx_5[8].d, *(arg1 + 0x150)).d
                *(arg1 + 0x154) = __maxss_xmmss_memss(zmm1.d, rcx_5[9]).d
            
            zmm2.d = zmm6.d f+ rcx_5[7]
            zmm3.d = zmm6.d f+ rcx_5[8]
            zmm4.d = zmm6.d f+ rcx_5[9]
            int32_t var_144_1 = zmm3.d
            uint32_t var_140_1 = zmm4.d
            
            if (rax_7.b == 0)
                zmm1 = zx.o(zmm2.d.q)
                *(arg1 + 0x14c) = zmm1.q
                *(arg1 + 0x140) = zmm1.q
                *(arg1 + 0x154) = var_140_1
                *(arg1 + 0x148) = var_140_1
                rax_7.b = 1
                *(arg1 + 0x158) = 1
            else
                zmm0 = __minss_xmmss_memss(zmm2.d, *(arg1 + 0x140))
                zmm1 = __minss_xmmss_memss(zmm3.d, *(arg1 + 0x144))
                zmm2 = __maxss_xmmss_memss(zmm2.d, *(arg1 + 0x14c))
                zmm3 = __maxss_xmmss_memss(zmm3.d, *(arg1 + 0x150))
                *(arg1 + 0x140) = zmm0.d
                zmm0 = __minss_xmmss_memss(zmm4.d, *(arg1 + 0x148))
                zmm4 = __maxss_xmmss_memss(zmm4.d, *(arg1 + 0x154))
                *(arg1 + 0x144) = zmm1.d
                *(arg1 + 0x14c) = zmm2.d
                *(arg1 + 0x150) = zmm3.d
                *(arg1 + 0x148) = zmm0.d
                *(arg1 + 0x154) = zmm4.d
            
            zmm2.d = zmm7.d f+ rcx_5[7]
            zmm3.d = zmm7.d f+ rcx_5[8]
            zmm4.d = zmm7.d f+ rcx_5[9]
            var_168_1.d = zmm2.d
            var_168_1:4.d = zmm3.d
            int32_t var_160_2 = zmm4.d
            
            if (rax_7.b == 0)
                zmm1 = zx.o(var_168_1.q)
                *(arg1 + 0x14c) = zmm1.q
                *(arg1 + 0x140) = zmm1.q
                *(arg1 + 0x154) = var_160_2
                *(arg1 + 0x148) = var_160_2
                *(arg1 + 0x158) = 1
            else
                zmm1 = *(arg1 + 0x144)
                zmm0 = __minss_xmmss_memss(zmm2.d, *(arg1 + 0x140))
                zmm2 = __maxss_xmmss_memss(zmm2.d, *(arg1 + 0x14c))
                zmm1 = _mm_min_ss(zmm1.d, zmm3.d)
                zmm3 = __maxss_xmmss_memss(zmm3.d, *(arg1 + 0x150))
                *(arg1 + 0x140) = zmm0.d
                zmm0 = _mm_min_ss((*(arg1 + 0x148)).d, zmm4.d)
                *(arg1 + 0x144) = zmm1.d
                *(arg1 + 0x14c) = zmm2.d
                *(arg1 + 0x150) = zmm3.d
                *(arg1 + 0x148) = zmm0.d
                *(arg1 + 0x154) = _mm_max_ss((*(arg1 + 0x154)).d, zmm4.d).d
            
            zmm5 = _mm_and_ps(zmm13, 0x7fffffff)
            uint32_t temp0_59[0x4] = _mm_and_ps(zmm14, 0x7fffffff)
            float temp0_60[0x4] = _mm_max_ss(zmm5[0], temp0_59[0])
            uint32_t temp0_61[0x4] = _mm_and_ps(zmm12, 0x7fffffff)
            i += 1
            r14_1 += 2
            zmm8 = _mm_max_ss(_mm_max_ss(temp0_60[0], temp0_61[0])[0], zmm8.d)
        while (i s< *(arg1 + 0x118))
    
    zmm0.d = zmm8.d f+ *(arg1 + 0x154)
    zmm1.d = (*(arg1 + 0x140)).d f- zmm8.d
    zmm2.d = (*(arg1 + 0x144)).d f- zmm8.d
    zmm5 = zmm8
    zmm5[0] = zmm5[0] f+ *(arg1 + 0x14c)
    zmm4.d = zmm8.d f+ *(arg1 + 0x150)
    int32_t var_140_2 = zmm0.d
    zmm0.d = (*(arg1 + 0x148)).d f- zmm8.d
    zmm3 = _mm_unpacklo_ps(zmm1, zmm2.q)
    uint64_t var_15c_1 = (_mm_unpacklo_ps(zmm5, zmm4.q)).q
    int32_t var_160_4 = zmm0.d
    int32_t var_154_1 = var_140_2
    result = 1.d
    zmm0.q = zmm3.q
    *(arg1 + 0x140) = zmm0
    *(arg1 + 0x150) = var_15c_1
    *(arg1 + 0x158) = result

return result
