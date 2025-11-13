// 函数: sub_142226be0
// 地址: 0x142226be0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
void* rcx = *(arg1 + 0x18)
float zmm15[0x4] = arg2

if (rcx != 0)
    void* rax
    
    if ((*(rcx + 0x432) & 2) == 0)
        rax = *(rcx + 0x408)
    
    int64_t r15
    
    if ((*(rcx + 0x432) & 2) != 0 || rax == 0 || (*(rax + 0xb0) & 2) != 0)
        r15.b = 0
    else
        r15.b = 1
    
    void* rdx_1 = *(arg1 + 0x10)
    void* r13_1 = **(rdx_1 + 0x40)
    float zmm2[0x4]
    
    if (r15.b != 0)
        float rax_4
        
        if ((*(*(r13_1 + 0x30) + 0x59) & 1) != 0)
            *(arg1 + 0x14c) = data_143dbb1f8.q
            *(arg1 + 0x154) = data_143dbb200
            *(arg1 + 0x140) = data_143dbb1f8.q
            rax_4 = data_143dbb200
        else
            zmm2 = *(rcx + 0x1d0)
            float var_f0_1 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)[0]
            *(arg1 + 0x14c) = (_mm_unpacklo_ps(zmm2, _mm_shuffle_ps(zmm2, zmm2, 0x55)[0].q)).q
            *(arg1 + 0x154) = var_f0_1
            zmm2 = *(rcx + 0x1d0)
            rax_4 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)[0]
            *(arg1 + 0x140) = (_mm_unpacklo_ps(zmm2, _mm_shuffle_ps(zmm2, zmm2, 0x55)[0].q)).q
        
        *(arg1 + 0x148) = rax_4
    
    result = sx.q(*(arg1 + 0x118))
    float zmm6[0x4]
    float var_38_1[0x4] = zmm6
    float zmm7[0x4]
    float var_48_1[0x4] = zmm7
    float zmm8[0x4]
    float var_58_1[0x4] = zmm8
    float zmm11[0x4]
    float var_88_1[0x4] = zmm11
    *(arg1 + 0x158) = 1
    float zmm13[0x4]
    float var_a8_1[0x4] = zmm13
    float zmm14[0x4]
    float var_b8_1[0x4] = zmm14
    float var_e8[0x4] = *(rcx + 0x1e0)
    
    if (result.d s<= 0)
    label_1422271db:
        
        if (r15.b != 0)
            result = *(r13_1 + 0x30)
            
            if ((*(result + 0x59) & 1) != 0)
                uint64_t* rax_12 = sub_140ae2c60(arg1 + 0x140, &var_e8, *(arg1 + 0x18) + 0x1c0)
                *(arg1 + 0x140) = *rax_12
                *(arg1 + 0x150) = rax_12[2]
                result = zx.q(rax_12[3].d)
                *(arg1 + 0x158) = result.d
    else
        zmm7 = 0x7f7fffff
        zmm8 = 0xff7fffff
        zmm13 = 0x7f7fffff
        zmm6 = 0xff7fffff
        zmm14 = 0x7f7fffff
        zmm11 = 0xff7fffff
        float var_108_1 = 3.40282347e+38f
        char r14_1 = not.b(*(rdx_1 + 0x37)) & 1
        int32_t var_104_1 = 0x7f7fffff
        float result_1 = 3.40282347e+38f
        void* const* result_3 = result
        float var_f8_1 = -3.40282347e+38f
        int32_t var_f4_1 = 0xff7fffff
        float result_2 = -3.40282347e+38f
        
        if (result.d s> 0)
            int64_t rsi_1 = 0
            float zmm9[0x4]
            float var_68_1[0x4] = zmm9
            float zmm10[0x4]
            float var_78_1[0x4] = zmm10
            float zmm12[0x4]
            float var_98_1[0x4] = zmm12
            
            do
                zmm9 = var_e8[0]
                zmm10 = var_e8[1]
                zmm12 = var_e8[2]
                int64_t* rdi_2 =
                    sx.q(zx.d(*(*(arg1 + 0xf8) + (rsi_1 << 1))) * *(arg1 + 0x114)) + *(arg1 + 0xf0)
                int32_t rcx_3 = *(rdi_2 + 0x5c)
                zmm9[0] = zmm9[0] f* rdi_2[0xa].d
                zmm10[0] = zmm10[0] f* *(rdi_2 + 0x54)
                zmm12[0] = zmm12[0] f* rdi_2[0xb].d
                *(rdi_2 + 0x5c) = rcx_3 & 0xfdffffff
                int32_t rax_8
                float zmm0[0x4]
                
                if (((rcx_3 u>> 0x19).b & 1) == 0 || r14_1 == 0)
                    arg2 = zmm15
                    zmm2 = zmm15
                    arg2[0] = arg2[0] f* *(rdi_2 + 0x34)
                    zmm0 = zmm15
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
                    zmm0 = zmm15
                    zmm0[0] = zmm0[0] f* *(rdi_2 + 0x4c)
                else
                    zmm0 = zx.o(0)
                
                zmm0[0] = zmm0[0] f+ *(rdi_2 + 0x2c)
                *(rdi_2 + 0x2c) = zmm0[0]
                zmm0 = *(arg1 + 0x1a8)
                zmm0[0] = zmm0[0] f+ rdi_2[2].d
                rdi_2[2].d = zmm0[0]
                arg2 = *(arg1 + 0x1ac)
                arg2[0] = arg2[0] f+ *(rdi_2 + 0x14)
                *(rdi_2 + 0x14) = arg2[0]
                zmm0 = *(arg1 + 0x1b0)
                zmm0[0] = zmm0[0] + zmm2[0]
                rdi_2[3].d = zmm0[0]
                *(arg1 + 0xf0)
                zx.d(*(*(arg1 + 0xf8) + (rsi_1 << 1) + 2)) * *(arg1 + 0x114)
                int32_t rax_11 = rdi_2[3].d
                *rdi_2 = rdi_2[2]
                rdi_2[1].d = rax_11
                
                if (r15.b != 0)
                    zmm2 = rdi_2[2].d
                    zmm0 = rdi_2[3].d
                    arg2[0] = arg2[0] - zmm10[0]
                    zmm10[0] = zmm10[0] + arg2[0]
                    zmm2[0] = zmm2[0] - zmm9[0]
                    zmm0[0] = zmm0[0] - zmm12[0]
                    zmm9[0] = zmm9[0] + zmm2[0]
                    zmm12[0] = zmm12[0] + zmm0[0]
                    
                    if (not(zmm2[0] > zmm7[0]))
                        var_108_1 = zmm2[0]
                        zmm7 = zmm2
                    
                    if (not(arg2[0] > zmm13[0]))
                        float var_104_2 = arg2[0]
                        zmm13 = arg2
                    
                    if (not(zmm0[0] > zmm14[0]))
                        result_1 = zmm0[0]
                        zmm14 = zmm0
                    
                    if (not(zmm2[0] < zmm8[0]))
                        var_f8_1 = zmm2[0]
                        zmm8 = zmm2
                    
                    if (not(arg2[0] < zmm11[0]))
                        float var_f4_2 = arg2[0]
                        zmm11 = arg2
                    
                    if (not(zmm0[0] < zmm6[0]))
                        result_2 = zmm0[0]
                        zmm6 = zmm0
                    
                    if (not(zmm9[0] > zmm7[0]))
                        var_108_1 = zmm9[0]
                    
                    if (not(zmm10[0] > zmm13[0]))
                        float var_104_3 = zmm10[0]
                        zmm13 = zmm10
                    
                    if (not(zmm12[0] > zmm14[0]))
                        result_1 = zmm12[0]
                        zmm14 = zmm12
                    
                    if (not(zmm9[0] < zmm8[0]))
                        var_f8_1 = zmm9[0]
                    
                    if (not(zmm10[0] < zmm11[0]))
                        float var_f4_3 = zmm10[0]
                        zmm11 = zmm10
                    
                    if (not(zmm12[0] < zmm6[0]))
                        result_2 = zmm12[0]
                
                zmm0, result, zmm6, zmm7, zmm8 = sub_140a454f0(*(rdi_2 + 0x2c), 0x40c90fdb)
                rsi_1 += 1
                *(rdi_2 + 0x2c) = zmm0[0]
            while (rsi_1 s< result_3)
        
        if (r15.b != 0)
            result = zx.q(*(arg1 + 0x158))
            
            if (result.b == 0)
                result = zx.q(result_1)
                arg2 = zx.o(var_108_1.q)
                *(arg1 + 0x14c) = arg2.q
                *(arg1 + 0x140) = arg2.q
                *(arg1 + 0x154) = result.d
                *(arg1 + 0x148) = result.d
                result.b = 1
                *(arg1 + 0x158) = 1
            else
                arg2 = *(arg1 + 0x144)
                float temp0_7[0x4] = __minss_xmmss_memss(zmm7[0], *(arg1 + 0x140))
                float temp0_8[0x4] = __maxss_xmmss_memss(zmm7[0], *(arg1 + 0x14c))
                float temp0_9[0x4] = _mm_min_ss(arg2[0], zmm13[0])
                *(arg1 + 0x140) = temp0_7[0]
                float temp0_10[0x4] = _mm_min_ss((*(arg1 + 0x148))[0], zmm14[0])
                *(arg1 + 0x144) = temp0_9[0]
                float temp0_11[0x4] = _mm_max_ss((*(arg1 + 0x154))[0], zmm14[0])
                *(arg1 + 0x14c) = temp0_8[0]
                *(arg1 + 0x148) = temp0_10[0]
                float temp0_12[0x4] = _mm_max_ss((*(arg1 + 0x150))[0], zmm13[0])
                *(arg1 + 0x154) = temp0_11[0]
                *(arg1 + 0x150) = temp0_12[0]
            
            if (result.b == 0)
                arg2 = zx.o(var_f8_1.q)
                result = zx.q(result_2)
                *(arg1 + 0x14c) = arg2.q
                *(arg1 + 0x140) = arg2.q
                *(arg1 + 0x154) = result.d
                *(arg1 + 0x148) = result.d
                *(arg1 + 0x158) = 1
            else
                float temp0_13[0x4] = __minss_xmmss_memss(zmm8[0], *(arg1 + 0x140))
                float temp0_14[0x4] = __minss_xmmss_memss(zmm11[0], *(arg1 + 0x144))
                *(arg1 + 0x140) = temp0_13[0]
                float temp0_15[0x4] = _mm_min_ss((*(arg1 + 0x148))[0], zmm6[0])
                *(arg1 + 0x144) = temp0_14[0]
                arg2 = *(arg1 + 0x14c)
                float temp0_16[0x4] = __maxss_xmmss_memss(zmm6[0], *(arg1 + 0x154))
                float temp0_17[0x4] = _mm_max_ss(arg2[0], zmm8[0])
                *(arg1 + 0x148) = temp0_15[0]
                float temp0_18[0x4] = _mm_max_ss((*(arg1 + 0x150))[0], zmm11[0])
                *(arg1 + 0x154) = temp0_16[0]
                *(arg1 + 0x14c) = temp0_17[0]
                *(arg1 + 0x150) = temp0_18[0]
            
            goto label_1422271db

return result
