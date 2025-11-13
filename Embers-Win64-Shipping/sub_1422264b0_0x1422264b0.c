// 函数: sub_1422264b0
// 地址: 0x1422264b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
void* rcx = *(arg1 + 0x18)
float zmm14[0x4] = arg2

if (rcx != 0)
    void* rax
    
    if ((*(rcx + 0x432) & 2) == 0)
        rax = *(rcx + 0x408)
    
    int64_t r14
    
    if ((*(rcx + 0x432) & 2) != 0 || rax == 0 || (*(rax + 0xb0) & 2) != 0)
        r14.b = 0
    else
        r14.b = 1
    
    void* r9_1 = *(arg1 + 0x10)
    result = *(r9_1 + 0x40)
    void* const r13_1 = *result
    float zmm2[0x4]
    
    if (r14.b != 0)
        if ((*(*(r13_1 + 0x30) + 0x59) & 1) != 0)
            *(arg1 + 0x14c) = data_143dbb1f8.q
            *(arg1 + 0x154) = data_143dbb200
            *(arg1 + 0x140) = data_143dbb1f8.q
            result = zx.q(data_143dbb200)
        else
            zmm2 = *(rcx + 0x1d0)
            float var_f0_1 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)[0]
            *(arg1 + 0x14c) = (_mm_unpacklo_ps(zmm2, _mm_shuffle_ps(zmm2, zmm2, 0x55)[0].q)).q
            *(arg1 + 0x154) = var_f0_1
            zmm2 = *(rcx + 0x1d0)
            result = zx.q(_mm_shuffle_ps(zmm2, zmm2, 0xaa)[0])
            *(arg1 + 0x140) = (_mm_unpacklo_ps(zmm2, _mm_shuffle_ps(zmm2, zmm2, 0x55)[0].q)).q
        
        *(arg1 + 0x148) = result.d
    
    int64_t r8_1 = sx.q(*(arg1 + 0x118))
    float zmm7[0x4]
    float var_48_1[0x4] = zmm7
    float zmm8[0x4]
    float var_58_1[0x4] = zmm8
    float zmm9[0x4]
    float var_68_1[0x4] = zmm9
    float zmm10[0x4]
    float var_78_1[0x4] = zmm10
    float zmm11[0x4]
    float var_88_1[0x4] = zmm11
    float zmm12[0x4]
    float var_98_1[0x4] = zmm12
    *(arg1 + 0x158) = 1
    
    if (r8_1.d s<= 0)
    label_142226b31:
        
        if (r14.b != 0)
            result = *(r13_1 + 0x30)
            
            if ((*(result + 0x59) & 1) != 0)
                uint64_t var_e8[0x4]
                uint64_t* rax_12 = sub_140ae2c60(arg1 + 0x140, &var_e8, *(arg1 + 0x18) + 0x1c0)
                *(arg1 + 0x140) = *rax_12
                *(arg1 + 0x150) = rax_12[2]
                result = zx.q(rax_12[3].d)
                *(arg1 + 0x158) = result.d
    else
        zmm9 = 0x7f7fffff
        zmm7 = 0xff7fffff
        zmm12 = 0x7f7fffff
        zmm8 = 0x7f7fffff
        zmm11 = 0xff7fffff
        zmm10 = 0xff7fffff
        char r15_1 = not.b(*(r9_1 + 0x37)) & 1
        float var_118_1 = 3.40282347e+38f
        int32_t var_114_1 = 0x7f7fffff
        float result_1 = 3.40282347e+38f
        void* rdx_2 = sx.q(zx.d(**(arg1 + 0xf8)) * *(arg1 + 0x114)) + *(arg1 + 0xf0)
        float var_108_1 = -3.40282347e+38f
        int32_t var_104_1 = 0xff7fffff
        float result_2 = -3.40282347e+38f
        int32_t var_f0_3 = *(rdx_2 + 0x18)
        result = sx.q(*(arg1 + 0x30))
        int64_t var_f8_1 = *(rdx_2 + 0x10)
        float zmm13[0x4] = *(result + rdx_2 + 0x40)
        
        if (r8_1.d s> 0)
            int64_t rsi_1 = 0
            float zmm6[0x4]
            float var_38_1[0x4] = zmm6
            
            do
                int64_t r8_2 = sx.q(*(arg1 + 0x30))
                int64_t* rdi_2 =
                    sx.q(zx.d(*(*(arg1 + 0xf8) + (rsi_1 << 1))) * *(arg1 + 0x114)) + *(arg1 + 0xf0)
                int32_t rcx_5 = *(rdi_2 + 0x5c)
                *(rdi_2 + 0x5c) = rcx_5 & 0xfdffffff
                int32_t rax_8
                float zmm0[0x4]
                
                if (((rcx_5 u>> 0x19).b & 1) == 0 || r15_1 == 0)
                    arg2 = zmm14
                    zmm2 = zmm14
                    arg2[0] = arg2[0] f* *(rdi_2 + 0x34)
                    zmm0 = zmm14
                    rax_8.b = 0
                    zmm2[0] = zmm2[0] f* rdi_2[7].d
                    zmm0[0] = zmm0[0] f* rdi_2[6].d
                else
                    zmm0 = data_143dbb1f8
                    rax_8.b = 1
                    arg2 = data_143dbb1fc
                    zmm2 = data_143dbb200
                
                zmm0[0] = zmm0[0] f+ rdi_2[2].d
                arg2[0] = arg2[0] f+ *(rdi_2 + 0x14)
                zmm2[0] = zmm2[0] f+ rdi_2[3].d
                rdi_2[2].d = zmm0[0]
                *(rdi_2 + 0x14) = arg2[0]
                rdi_2[3].d = zmm2[0]
                
                if (rax_8.b == 0)
                    zmm0 = zmm14
                    zmm0[0] = zmm0[0] f* *(rdi_2 + 0x4c)
                else
                    zmm0 = zx.o(0)
                
                zmm0[0] = zmm0[0] f+ *(rdi_2 + 0x2c)
                *(rdi_2 + 0x2c) = zmm0[0]
                zmm0 = rdi_2[2].d
                zmm0[0] = zmm0[0] f+ *(arg1 + 0x1a8)
                rdi_2[2].d = zmm0[0]
                arg2[0] = arg2[0] f+ *(arg1 + 0x1ac)
                *(rdi_2 + 0x14) = arg2[0]
                zmm0 = *(arg1 + 0x1b0)
                zmm0[0] = zmm0[0] + zmm2[0]
                rdi_2[3].d = zmm0[0]
                *(arg1 + 0xf0)
                zx.d(*(*(arg1 + 0xf8) + (rsi_1 << 1) + 2)) * *(arg1 + 0x114)
                int32_t rax_11 = rdi_2[3].d
                *rdi_2 = rdi_2[2]
                rdi_2[1].d = rax_11
                
                if (r14.b != 0)
                    zmm6 = rdi_2[2].d
                    float zmm5[0x4] = *(rdi_2 + 0x14)
                    zmm6[0] = zmm6[0] f- var_f8_1.d
                    float zmm4[0x4] = rdi_2[3].d
                    zmm5[0] = zmm5[0] f- var_f8_1:4.d
                    float zmm3[0x4] = *(r8_2 + rdi_2 + 0x40)
                    zmm4[0] = zmm4[0] f- var_f0_3
                    zmm6[0] = zmm6[0] * zmm6[0]
                    var_f0_3 = rax_11
                    zmm5[0] = zmm5[0] * zmm5[0]
                    zmm4[0] = zmm4[0] * zmm4[0]
                    zmm5[0] = zmm5[0] + zmm6[0]
                    float arg_8 = zmm3[0]
                    zmm5[0] = zmm5[0] + zmm4[0]
                    zmm3[0] = zmm3[0] - zmm13[0]
                    float temp0_7[0x4] = _mm_sqrt_ss(0, zmm5[0])
                    temp0_7[0] = temp0_7[0] + zmm3[0]
                    var_f8_1 = rdi_2[2]
                    temp0_7[0] = temp0_7[0] * 0.25f
                    temp0_7[0] = temp0_7[0] + zmm3[0]
                    zmm6[0] = zmm6[0] - temp0_7[0]
                    temp0_7[0] = temp0_7[0] + zmm6[0]
                    zmm5[0] = zmm5[0] - temp0_7[0]
                    zmm4[0] = zmm4[0] - temp0_7[0]
                    temp0_7[0] = temp0_7[0] + zmm5[0]
                    bool cond:1_1 = zmm6[0] > zmm9[0]
                    temp0_7[0] = temp0_7[0] + zmm4[0]
                    
                    if (not(cond:1_1))
                        var_118_1 = zmm6[0]
                        zmm9 = zmm6
                    
                    if (not(zmm5[0] > zmm12[0]))
                        float var_114_2 = zmm5[0]
                        zmm12 = zmm5
                    
                    if (not(zmm4[0] > zmm8[0]))
                        result_1 = zmm4[0]
                        zmm8 = zmm4
                    
                    if (not(zmm6[0] < zmm7[0]))
                        zmm7 = zmm6
                        var_108_1 = zmm7[0]
                    
                    if (not(zmm5[0] < zmm11[0]))
                        float var_104_2 = zmm5[0]
                        zmm11 = zmm5
                    
                    if (not(zmm4[0] < zmm10[0]))
                        result_2 = zmm4[0]
                        zmm10 = zmm4
                    
                    if (not(temp0_7[0] > zmm9[0]))
                        var_118_1 = temp0_7[0]
                    
                    if (not(temp0_7[0] > zmm12[0]))
                        float var_114_3 = temp0_7[0]
                        zmm12 = temp0_7
                    
                    if (not(temp0_7[0] > zmm8[0]))
                        result_1 = temp0_7[0]
                    
                    if (not(temp0_7[0] < zmm7[0]))
                        var_108_1 = temp0_7[0]
                    
                    if (not(temp0_7[0] < zmm11[0]))
                        float var_104_3 = temp0_7[0]
                        zmm11 = temp0_7
                    
                    zmm13 = arg_8
                    
                    if (not(temp0_7[0] < zmm10[0]))
                        result_2 = temp0_7[0]
                        zmm10 = temp0_7
                
                zmm0, result, zmm7, zmm8, zmm9 = sub_140a454f0(*(rdi_2 + 0x2c), 0x40c90fdb)
                rsi_1 += 1
                *(rdi_2 + 0x2c) = zmm0[0]
            while (rsi_1 s< r8_1)
        
        if (r14.b != 0)
            result = zx.q(*(arg1 + 0x158))
            
            if (result.b == 0)
                result = zx.q(result_1)
                arg2 = zx.o(var_118_1.q)
                *(arg1 + 0x14c) = arg2.q
                *(arg1 + 0x140) = arg2.q
                *(arg1 + 0x154) = result.d
                *(arg1 + 0x148) = result.d
                result.b = 1
                *(arg1 + 0x158) = 1
            else
                float temp0_8[0x4] = __minss_xmmss_memss(zmm9[0], *(arg1 + 0x140))
                float temp0_9[0x4] = __minss_xmmss_memss(zmm12[0], *(arg1 + 0x144))
                float temp0_10[0x4] = __maxss_xmmss_memss(zmm9[0], *(arg1 + 0x14c))
                *(arg1 + 0x140) = temp0_8[0]
                float temp0_11[0x4] = _mm_min_ss((*(arg1 + 0x148))[0], zmm8[0])
                *(arg1 + 0x144) = temp0_9[0]
                float temp0_12[0x4] = __maxss_xmmss_memss(zmm8[0], *(arg1 + 0x154))
                *(arg1 + 0x14c) = temp0_10[0]
                *(arg1 + 0x148) = temp0_11[0]
                float temp0_13[0x4] = _mm_max_ss((*(arg1 + 0x150))[0], zmm12[0])
                *(arg1 + 0x154) = temp0_12[0]
                *(arg1 + 0x150) = temp0_13[0]
            
            if (result.b == 0)
                arg2 = zx.o(var_108_1.q)
                result = zx.q(result_2)
                *(arg1 + 0x14c) = arg2.q
                *(arg1 + 0x140) = arg2.q
                *(arg1 + 0x154) = result.d
                *(arg1 + 0x148) = result.d
                *(arg1 + 0x158) = 1
            else
                arg2 = *(arg1 + 0x144)
                float temp0_14[0x4] = _mm_min_ss((*(arg1 + 0x140))[0], zmm7[0])
                float temp0_15[0x4] = __maxss_xmmss_memss(zmm7[0], *(arg1 + 0x14c))
                float temp0_16[0x4] = _mm_min_ss(arg2[0], zmm11[0])
                *(arg1 + 0x140) = temp0_14[0]
                float temp0_17[0x4] = _mm_min_ss((*(arg1 + 0x148))[0], zmm10[0])
                *(arg1 + 0x144) = temp0_16[0]
                float temp0_18[0x4] = _mm_max_ss((*(arg1 + 0x154))[0], zmm10[0])
                *(arg1 + 0x14c) = temp0_15[0]
                *(arg1 + 0x148) = temp0_17[0]
                float temp0_19[0x4] = _mm_max_ss((*(arg1 + 0x150))[0], zmm11[0])
                *(arg1 + 0x154) = temp0_18[0]
                *(arg1 + 0x150) = temp0_19[0]
            
            goto label_142226b31

return result
