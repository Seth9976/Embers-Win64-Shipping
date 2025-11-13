// 函数: sub_1421a3a20
// 地址: 0x1421a3a20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = *(arg1 + 0x18)
uint128_t zmm11 = arg2

if (result != 0)
    void* rcx
    
    if ((*(result + 0x432) & 2) == 0)
        rcx = *(result + 0x408)
    
    float var_180
    int64_t r13
    uint128_t zmm0
    float zmm2[0x4]
    
    if ((*(result + 0x432) & 2) != 0 || rcx == 0 || (*(rcx + 0xb0) & 2) != 0)
        r13.b = 0
    else
        r13.b = 1
        *(arg1 + 0x14c) = data_143dbb1f8.q
        int32_t rax = data_143dbb200
        *(arg1 + 0x154) = rax
        *(arg1 + 0x140) = *(arg1 + 0x14c)
        *(arg1 + 0x148) = rax
        *(arg1 + 0x158) = 0
        zmm2 = *(*(arg1 + 0x18) + 0x1d0)
        *(arg1 + 0x158) = 1
        var_180 = _mm_shuffle_ps(zmm2, zmm2, 0xaa).d
        zmm0 = _mm_unpacklo_ps(zmm2, _mm_shuffle_ps(zmm2, zmm2, 0x55)[0].q)
        *(arg1 + 0x14c) = zmm0.q
        *(arg1 + 0x140) = zmm0.q
        *(arg1 + 0x154) = var_180
        *(arg1 + 0x148) = var_180
    
    void* rcx_1 = *(arg1 + 0x1e8)
    float zmm7[0x4] = zx.o(0)
    float zmm8[0x4] = zx.o(0)
    int32_t arg_8
    int32_t arg_18
    
    if (rcx_1 != 0)
        sub_141fe3590(rcx_1 + 0x40, &arg_8, &arg_18)
        zmm7 = arg_8
        zmm8 = arg_18
    
    uint32_t zmm6[0x4] = 0x3f800000
    int32_t i = 0
    result = *(arg1 + 0x10)
    uint128_t var_168_1 = *(*(arg1 + 0x18) + 0x1e0)
    char r14_1 = not.b(*(result + 0x37)) & 1
    
    if (*(arg1 + 0x118) s> 0)
        void* r12_1 = nullptr
        uint32_t zmm9[0x4]
        uint32_t var_78_1[0x4] = zmm9
        uint32_t zmm10[0x4]
        uint32_t var_88_1[0x4] = zmm10
        uint32_t zmm13[0x4] = 0x3f800000
        uint32_t zmm15[0x4] = var_168_1:8.d
        
        do
            int32_t rax_5 = *(arg1 + 0x30)
            int32_t rcx_4 = zx.d(*(r12_1 + *(arg1 + 0xf8))) * *(arg1 + 0x114)
            arg_18.q = 0
            int64_t var_118
            __builtin_memset(&var_118, 0, 0x40)
            int64_t arg_20 = 0
            arg_8 = rax_5
            uint64_t* rsi_2 = sx.q(rcx_4) + *(arg1 + 0xf0)
            int32_t rbx_1 = *(rsi_2 + 0x5c)
            *(rsi_2 + 0x5c) = rbx_1 & 0xfdffffff
            int64_t* rcx_5 = *(arg1 + 0x1d0)
            float var_188
            float var_178
            int64_t var_110
            int64_t var_108
            int64_t var_100
            int64_t var_f8
            int64_t var_f0
            int64_t var_e8
            int64_t var_e0
            (*(*rcx_5 + 0x388))(rcx_5, arg1, rsi_2, &arg_8, &arg_18, &var_e0, &var_e8, &var_f0, 
                &var_f8, &var_100, &var_108, &var_110, &var_118, &arg_20, var_188, var_180, var_178)
            int32_t rax_9 = rsi_2[3].d
            *rsi_2 = rsi_2[2]
            rsi_2[1].d = rax_9
            
            if (((rbx_1 u>> 0x19).b & 1) == 0 || r14_1 == 0)
                arg2 = zmm11
                zmm2 = zmm11
                arg2[0] = arg2[0] f* *(rsi_2 + 0x34)
                rax_9.b = 0
                zmm2[0] = zmm2[0] f* rsi_2[7].d
                zmm0.d = zmm11.d f* rsi_2[6].d
            else
                zmm0 = data_143dbb1f8
                rax_9.b = 1
                arg2 = data_143dbb1fc
                zmm2 = data_143dbb200
            
            zmm0.d = zmm0.d f+ rsi_2[2].d
            arg2[0] = arg2[0] f+ *(rsi_2 + 0x14)
            zmm2[0] = zmm2[0] f+ rsi_2[3].d
            rsi_2[2].d = zmm0.d
            *(rsi_2 + 0x14) = arg2[0]
            rsi_2[3].d = zmm2[0]
            
            if (rax_9.b == 0)
                zmm0.d = zmm11.d f* *(rsi_2 + 0x4c)
            else
                zmm0 = zx.o(0)
            
            zmm9 = var_168_1.d
            zmm6 = var_168_1:4.d
            zmm0.d = zmm0.d f+ *(rsi_2 + 0x2c)
            *(rsi_2 + 0x2c) = zmm0.d
            arg2 = *(rsi_2 + 4)
            zmm0.d = (*(arg1 + 0x1a8)).d f+ *rsi_2
            *rsi_2 = zmm0.d
            arg2[0] = arg2[0] f+ *(arg1 + 0x1ac)
            *(rsi_2 + 4) = arg2[0]
            zmm0.d = (*(arg1 + 0x1b0)).d f+ rsi_2[1].d
            rsi_2[1].d = zmm0.d
            zmm9[0] = zmm9[0] f* rsi_2[0xa].d
            zmm6[0] = zmm6[0] f* *(rsi_2 + 0x54)
            zmm15[0] = zmm15[0] f* rsi_2[0xb].d
            
            if (r13.b != 0)
                uint32_t rax_10 = zx.d(*(arg1 + 0x158))
                
                if (rax_10.b == 0)
                    *(arg1 + 0x14c) = rsi_2[2]
                    rax_10 = rsi_2[3].d
                    *(arg1 + 0x154) = rax_10
                    *(arg1 + 0x140) = *(arg1 + 0x14c)
                    *(arg1 + 0x148) = rax_10
                    rax_10.b = 1
                    *(arg1 + 0x158) = 1
                else
                    *(arg1 + 0x140) = __minss_xmmss_memss((*(arg1 + 0x140)).d, rsi_2[2].d).d
                    *(arg1 + 0x144) = __minss_xmmss_memss((*(rsi_2 + 0x14)).d, *(arg1 + 0x144)).d
                    *(arg1 + 0x148) = __minss_xmmss_memss(rsi_2[3].d.d, *(arg1 + 0x148)).d
                    *(arg1 + 0x14c) = __maxss_xmmss_memss(rsi_2[2].d[0], *(arg1 + 0x14c))[0]
                    *(arg1 + 0x150) = __maxss_xmmss_memss((*(rsi_2 + 0x14)).d, *(arg1 + 0x150)).d
                    *(arg1 + 0x154) = __maxss_xmmss_memss(rsi_2[3].d[0], *(arg1 + 0x154))[0]
                
                zmm7[0] = zmm7[0] f+ rsi_2[2].d
                zmm7[0] = zmm7[0] f+ *(rsi_2 + 0x14)
                zmm7[0] = zmm7[0] f+ rsi_2[3].d
                float var_144_1 = zmm7[0]
                
                if (rax_10.b == 0)
                    rax_10 = zmm7[0]
                    arg2 = zx.o(zmm7[0].q)
                    *(arg1 + 0x14c) = arg2.q
                    *(arg1 + 0x140) = arg2.q
                    *(arg1 + 0x154) = rax_10
                    *(arg1 + 0x148) = rax_10
                    rax_10.b = 1
                    *(arg1 + 0x158) = 1
                else
                    zmm0 = __minss_xmmss_memss(zmm7.d, *(arg1 + 0x140))
                    float temp0_11[0x4] = __minss_xmmss_memss(zmm7[0], *(arg1 + 0x144))
                    float temp0_12[0x4] = __maxss_xmmss_memss(zmm7[0], *(arg1 + 0x14c))
                    float temp0_13[0x4] = __maxss_xmmss_memss(zmm7[0], *(arg1 + 0x150))
                    *(arg1 + 0x140) = zmm0.d
                    zmm0 = _mm_min_ss((*(arg1 + 0x148)).d, zmm7[0])
                    *(arg1 + 0x144) = temp0_11[0]
                    float temp0_15[0x4] = __maxss_xmmss_memss(zmm7[0], *(arg1 + 0x154))
                    *(arg1 + 0x14c) = temp0_12[0]
                    *(arg1 + 0x150) = temp0_13[0]
                    *(arg1 + 0x148) = zmm0.d
                    *(arg1 + 0x154) = temp0_15[0]
                
                zmm8[0] = zmm8[0] f+ rsi_2[2].d
                zmm8[0] = zmm8[0] f+ *(rsi_2 + 0x14)
                zmm8[0] = zmm8[0] f+ rsi_2[3].d
                float var_138_1 = zmm8[0]
                
                if (rax_10.b == 0)
                    rax_10 = zmm8[0]
                    arg2 = zx.o(zmm8[0].q)
                    *(arg1 + 0x14c) = arg2.q
                    *(arg1 + 0x140) = arg2.q
                    *(arg1 + 0x154) = rax_10
                    *(arg1 + 0x148) = rax_10
                    rax_10.b = 1
                    *(arg1 + 0x158) = 1
                else
                    zmm0 = __minss_xmmss_memss(zmm8.d, *(arg1 + 0x140))
                    float temp0_17[0x4] = __minss_xmmss_memss(zmm8[0], *(arg1 + 0x144))
                    float temp0_18[0x4] = __maxss_xmmss_memss(zmm8[0], *(arg1 + 0x14c))
                    float temp0_19[0x4] = __maxss_xmmss_memss(zmm8[0], *(arg1 + 0x150))
                    *(arg1 + 0x140) = zmm0.d
                    zmm0 = __minss_xmmss_memss(zmm8.d, *(arg1 + 0x148))
                    float temp0_21[0x4] = __maxss_xmmss_memss(zmm8[0], *(arg1 + 0x154))
                    *(arg1 + 0x144) = temp0_17[0]
                    *(arg1 + 0x14c) = temp0_18[0]
                    *(arg1 + 0x150) = temp0_19[0]
                    *(arg1 + 0x148) = zmm0.d
                    *(arg1 + 0x154) = temp0_21[0]
                
                int32_t* rcx_6 = arg_18.q
                
                if (rax_10.b == 0)
                    *(arg1 + 0x14c) = *rcx_6
                    rax_10 = rcx_6[2]
                    *(arg1 + 0x154) = rax_10
                    *(arg1 + 0x140) = *(arg1 + 0x14c)
                    *(arg1 + 0x148) = rax_10
                    rax_10.b = 1
                    *(arg1 + 0x158) = 1
                else
                    *(arg1 + 0x140) = __minss_xmmss_memss((*(arg1 + 0x140)).d, *rcx_6).d
                    *(arg1 + 0x144) = __minss_xmmss_memss(rcx_6[1].d, *(arg1 + 0x144)).d
                    *(arg1 + 0x148) = __minss_xmmss_memss((*(arg1 + 0x148)).d, rcx_6[2]).d
                    *(arg1 + 0x14c) = __maxss_xmmss_memss((*rcx_6)[0], *(arg1 + 0x14c))[0]
                    arg2 = *(arg1 + 0x154)
                    *(arg1 + 0x150) = __maxss_xmmss_memss(rcx_6[1].d, *(arg1 + 0x150)).d
                    *(arg1 + 0x154) = __maxss_xmmss_memss(arg2[0], rcx_6[2])[0]
                
                zmm7[0] = zmm7[0] f+ *rcx_6
                zmm7[0] = zmm7[0] f+ rcx_6[1]
                zmm7[0] = zmm7[0] f+ rcx_6[2]
                float var_12c_1 = zmm7[0]
                
                if (rax_10.b == 0)
                    rax_10 = zmm7[0]
                    arg2 = zx.o(zmm7[0].q)
                    *(arg1 + 0x14c) = arg2.q
                    *(arg1 + 0x140) = arg2.q
                    *(arg1 + 0x154) = rax_10
                    *(arg1 + 0x148) = rax_10
                    rax_10.b = 1
                    *(arg1 + 0x158) = 1
                else
                    zmm0 = __minss_xmmss_memss(zmm7.d, *(arg1 + 0x140))
                    float temp0_29[0x4] = __minss_xmmss_memss(zmm7[0], *(arg1 + 0x144))
                    float temp0_30[0x4] = __maxss_xmmss_memss(zmm7[0], *(arg1 + 0x14c))
                    float temp0_31[0x4] = __maxss_xmmss_memss(zmm7[0], *(arg1 + 0x150))
                    *(arg1 + 0x140) = zmm0.d
                    zmm0 = __minss_xmmss_memss(zmm7.d, *(arg1 + 0x148))
                    float temp0_33[0x4] = __maxss_xmmss_memss(zmm7[0], *(arg1 + 0x154))
                    *(arg1 + 0x144) = temp0_29[0]
                    *(arg1 + 0x14c) = temp0_30[0]
                    *(arg1 + 0x150) = temp0_31[0]
                    *(arg1 + 0x148) = zmm0.d
                    *(arg1 + 0x154) = temp0_33[0]
                
                zmm8[0] = zmm8[0] f+ *rcx_6
                zmm8[0] = zmm8[0] f+ rcx_6[1]
                zmm8[0] = zmm8[0] f+ rcx_6[2]
                float var_120_1 = zmm8[0]
                
                if (rax_10.b == 0)
                    rax_10 = zmm8[0]
                    arg2 = zx.o(zmm8[0].q)
                    *(arg1 + 0x14c) = arg2.q
                    *(arg1 + 0x140) = arg2.q
                    *(arg1 + 0x154) = rax_10
                    *(arg1 + 0x148) = rax_10
                    rax_10.b = 1
                    *(arg1 + 0x158) = 1
                else
                    zmm0 = __minss_xmmss_memss(zmm8.d, *(arg1 + 0x140))
                    float temp0_35[0x4] = __minss_xmmss_memss(zmm8[0], *(arg1 + 0x144))
                    float temp0_36[0x4] = __maxss_xmmss_memss(zmm8[0], *(arg1 + 0x14c))
                    float temp0_37[0x4] = __maxss_xmmss_memss(zmm8[0], *(arg1 + 0x150))
                    *(arg1 + 0x140) = zmm0.d
                    zmm0 = __minss_xmmss_memss(zmm8.d, *(arg1 + 0x148))
                    float temp0_39[0x4] = __maxss_xmmss_memss(zmm8[0], *(arg1 + 0x154))
                    *(arg1 + 0x144) = temp0_35[0]
                    *(arg1 + 0x14c) = temp0_36[0]
                    *(arg1 + 0x150) = temp0_37[0]
                    *(arg1 + 0x148) = zmm0.d
                    *(arg1 + 0x154) = temp0_39[0]
                
                if (rax_10.b == 0)
                    *(arg1 + 0x14c) = *(rcx_6 + 0x1c)
                    rax_10 = rcx_6[9]
                    *(arg1 + 0x154) = rax_10
                    *(arg1 + 0x140) = *(arg1 + 0x14c)
                    *(arg1 + 0x148) = rax_10
                    rax_10.b = 1
                    *(arg1 + 0x158) = 1
                else
                    *(arg1 + 0x140) = __minss_xmmss_memss((*(arg1 + 0x140)).d, rcx_6[7]).d
                    *(arg1 + 0x144) = __minss_xmmss_memss(rcx_6[8].d, *(arg1 + 0x144)).d
                    *(arg1 + 0x148) = __minss_xmmss_memss(rcx_6[9].d, *(arg1 + 0x148)).d
                    *(arg1 + 0x14c) = __maxss_xmmss_memss(rcx_6[7][0], *(arg1 + 0x14c))[0]
                    arg2 = *(arg1 + 0x154)
                    *(arg1 + 0x150) = __maxss_xmmss_memss(rcx_6[8].d, *(arg1 + 0x150)).d
                    *(arg1 + 0x154) = __maxss_xmmss_memss(arg2[0], rcx_6[9])[0]
                
                zmm7[0] = zmm7[0] f+ rcx_6[7]
                zmm7[0] = zmm7[0] f+ rcx_6[8]
                zmm7[0] = zmm7[0] f+ rcx_6[9]
                var_178 = zmm7[0]
                
                if (rax_10.b == 0)
                    rax_10 = zmm7[0]
                    arg2 = zx.o(zmm7[0].q)
                    *(arg1 + 0x14c) = arg2.q
                    *(arg1 + 0x140) = arg2.q
                    *(arg1 + 0x154) = rax_10
                    *(arg1 + 0x148) = rax_10
                    rax_10.b = 1
                    *(arg1 + 0x158) = 1
                else
                    arg2 = *(arg1 + 0x144)
                    zmm0 = _mm_min_ss((*(arg1 + 0x140)).d, zmm7[0])
                    float temp0_47[0x4] = _mm_min_ss(arg2[0], zmm7[0])
                    *(arg1 + 0x140) = zmm0.d
                    zmm0 = *(arg1 + 0x148)
                    *(arg1 + 0x144) = temp0_47[0]
                    zmm0 = _mm_min_ss(zmm0.d, zmm7[0])
                    float temp0_49[0x4] = _mm_max_ss((*(arg1 + 0x14c))[0], zmm7[0])
                    *(arg1 + 0x148) = zmm0.d
                    zmm0 = *(arg1 + 0x150)
                    *(arg1 + 0x14c) = temp0_49[0]
                    zmm0 = _mm_max_ss(zmm0.d, zmm7[0])
                    float temp0_51[0x4] = _mm_max_ss((*(arg1 + 0x154))[0], zmm7[0])
                    *(arg1 + 0x150) = zmm0.d
                    *(arg1 + 0x154) = temp0_51[0]
                
                zmm8[0] = zmm8[0] f+ rcx_6[7]
                zmm8[0] = zmm8[0] f+ rcx_6[8]
                zmm8[0] = zmm8[0] f+ rcx_6[9]
                var_188 = zmm8[0]
                float var_184_1 = zmm8[0]
                var_180 = zmm8[0]
                
                if (rax_10.b == 0)
                    arg2 = zx.o(var_188.q)
                    *(arg1 + 0x14c) = arg2.q
                    *(arg1 + 0x140) = arg2.q
                    *(arg1 + 0x154) = var_180
                    *(arg1 + 0x148) = var_180
                    *(arg1 + 0x158) = 1
                else
                    arg2 = *(arg1 + 0x144)
                    zmm0 = _mm_min_ss((*(arg1 + 0x140)).d, zmm8[0])
                    float temp0_53[0x4] = _mm_min_ss(arg2[0], zmm8[0])
                    float temp0_54[0x4] = __maxss_xmmss_memss(zmm8[0], *(arg1 + 0x150))
                    *(arg1 + 0x140) = zmm0.d
                    zmm0 = _mm_min_ss((*(arg1 + 0x148)).d, zmm8[0])
                    *(arg1 + 0x144) = temp0_53[0]
                    float temp0_56[0x4] = _mm_max_ss((*(arg1 + 0x14c))[0], zmm8[0])
                    *(arg1 + 0x150) = temp0_54[0]
                    *(arg1 + 0x148) = zmm0.d
                    zmm0 = _mm_max_ss((*(arg1 + 0x154)).d, zmm8[0])
                    *(arg1 + 0x14c) = temp0_56[0]
                    *(arg1 + 0x154) = zmm0.d
            
            zmm0, result, zmm6, zmm7, zmm8, zmm9 = sub_140a454f0(*(rsi_2 + 0x2c), 0x40c90fdb)
            uint32_t temp0_58[0x4] = _mm_and_ps(zmm6, 0x7fffffff)
            *(rsi_2 + 0x2c) = zmm0.d
            uint32_t temp0_59[0x4] = _mm_and_ps(zmm9, 0x7fffffff)
            uint32_t temp0_60[0x4] = _mm_and_ps(zmm15, 0x7fffffff)
            i += 1
            r12_1 += 2
            zmm6 = _mm_max_ss(_mm_max_ss(_mm_max_ss(temp0_58[0], temp0_59[0])[0], temp0_60[0])[0], 
                zmm13[0])
            zmm13 = zmm6
        while (i s< *(arg1 + 0x118))
    
    if (r13.b != 0)
        arg2 = *(arg1 + 0x140)
        zmm0.d = zmm6.d f+ *(arg1 + 0x154)
        zmm2 = *(arg1 + 0x144)
        arg2[0] = arg2[0] f- zmm6[0]
        zmm6[0] = zmm6[0] f+ *(arg1 + 0x14c)
        int64_t zmm4 = zmm6[0].q
        zmm2[0] = zmm2[0] f- zmm6[0]
        zmm4.d = zmm4.d f+ *(arg1 + 0x150)
        int32_t var_174_2 = zmm0.d
        zmm0.d = (*(arg1 + 0x148)).d f- zmm6[0]
        float temp0_64[0x4] = _mm_unpacklo_ps(arg2, zmm2[0].q)
        var_168_1:0xc.q = (_mm_unpacklo_ps(zmm6, zmm4)).q
        var_168_1:8.d = zmm0.d
        int32_t var_154_1 = var_174_2
        result = zx.q(1.d)
        zmm0.q = temp0_64.q
        *(arg1 + 0x140) = zmm0
        int64_t var_158
        *(arg1 + 0x150) = var_158
        *(arg1 + 0x158) = result.d

return result
