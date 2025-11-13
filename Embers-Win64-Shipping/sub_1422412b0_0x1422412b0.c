// 函数: sub_1422412b0
// 地址: 0x1422412b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t zmm6[0x4]
uint32_t var_58[0x4] = zmm6
void var_1a8
int64_t rax_1 = __security_cookie ^ &var_1a8
uint32_t zmm9[0x4] = data_143dbb1f8
uint64_t r12
r12.b = 0
float zmm8[0x4] = data_143dbb1fc
float (* rsi)[0x4] = arg4
float zmm7[0x4] = data_143dbb200
uint32_t var_174 = zmm9[0]
uint32_t (* result)[0x4] = arg2
float var_170 = zmm8[0]
float var_16c = zmm7[0]
uint32_t zmm12[0x4] = zmm9
uint32_t var_180 = zmm9[0]
float zmm11[0x4] = zmm8
float var_17c = zmm8[0]
float zmm10[0x4] = zmm7
float var_178 = zmm7[0]
char var_168 = 0
uint32_t r15_1

if (arg3 == 0)
    r15_1 = var_168.d
else
    float zmm1[0x4] = arg4[2]
    uint32_t zmm0[0x4] = zmm1
    float temp0_1[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0x55)
    zmm0[0] = zmm0[0] f- temp0_1[0]
    float var_138[0x4] = zmm1
    uint32_t var_160[0x4]
    float zmm2[0x4]
    uint32_t zmm3[0x4]
    float zmm4[0x4]
    
    if (_mm_and_ps(zmm0, 0x7fffffff)[0] f> 9.99999975e-05f)
    label_142241665:
        zmm4 = rsi[1]
        r15_1 = 1.d
        uint32_t var_120_1 = _mm_shuffle_ps(zmm4, zmm4, 0xaa)[0]
        zmm3 = _mm_shuffle_ps(zmm4, zmm4, 0x55)
        uint32_t var_110_1 = _mm_shuffle_ps(zmm4, zmm4, 0xaa)[0]
        int64_t var_154_1 = (_mm_unpacklo_ps(zmm4, zmm3[0].q)).q
        uint32_t var_158_1 = var_110_1
        zmm3 = var_160
        zmm3[0].q = (_mm_unpacklo_ps(zmm4, _mm_shuffle_ps(zmm4, zmm4, 0x55)[0].q)).q
        uint32_t var_14c_1 = var_120_1
        zmm1 = zx.o(var_154_1)
        var_180.o = zmm3
        zmm10 = var_178
        zmm0 = zmm1
        zmm11 = var_17c
        zmm12 = var_180
        zmm7 = _mm_shuffle_ps(zmm0, zmm0, 0x55)
        var_170.q = zmm1.q
        zmm8 = var_170
        zmm9 = _mm_shuffle_ps(zmm3, zmm3, 0xff)
        var_160 = zmm3
    else
        zmm0 = var_138[2]
        zmm1[0] = zmm1[0] f- zmm0[0]
        
        if (_mm_and_ps(zmm1, 0x7fffffff)[0] > 9.99999975e-05f)
            goto label_142241665
        
        temp0_1[0] = temp0_1[0] f- zmm0[0]
        
        if (_mm_and_ps(temp0_1, 0x7fffffff)[0] > 9.99999975e-05f)
            goto label_142241665
        
        int64_t i_1 = 0
        int32_t* rdx = nullptr
        var_138[0].q = 0
        var_138[2].q = 0
        float (* rax_2)[0x4]
        
        if ((*(arg3 + 0x5a7) & 4) == 0)
            rax_2 = arg1 + 0x30
        else
            int32_t rcx = *(arg1 + 0x48)
            var_138[2] = rcx
            
            if (rcx s> 0)
                sub_1405a4cf0(&var_138)
                rcx = *(arg1 + 0x48)
                rdx = var_138[0].q
            
            int32_t i = 0
            
            if (rcx s> 0)
                int32_t* rcx_2 = rdx
                
                do
                    *rcx_2 = i
                    rcx_2 = &rcx_2[1]
                    i += 1
                while (i s< *(arg1 + 0x48))
            
            rax_2 = &var_138
        
        int64_t rcx_3 = sx.q((*rax_2)[2])
        r15_1 = var_168.d
        float (* var_108_1)[0x4] = rax_2
        int32_t var_188_1 = rcx_3.d
        
        if (rcx_3 s> 0)
            int32_t rsi_1 = 1
            int32_t r8 = rcx_3.d
            
            do
                int64_t rcx_4 = *rax_2
                int64_t rdx_1 = *(arg1 + 0x40)
                void* rdi = *(rdx_1 + (sx.q(*(rcx_4 + (i_1 << 2))) << 3))
                
                if ((*(rdi + 0x89) & 2) != 0 || (*(arg3 + 0x5a7) & 4) != 0)
                    if (rsi_1 s< var_188_1)
                        *(rdx_1 + (sx.q(*(rcx_4 + (i_1 << 2) + 4)) << 3))
                    
                    int32_t rax_5 = sub_141f5e0e0(arg3, *(rdi + 0x80))
                    
                    if (rax_5 == 0xffffffff)
                        r8 = var_188_1
                    else
                        void var_f8
                        sub_141f5e7d0(arg3, &var_f8, rax_5, arg4)
                        zmm7, zmm8, zmm9, zmm10, zmm11, zmm12 =
                            sub_141ebb170(rdi + 0x28, &var_160, &var_f8)
                        zmm3 = var_160[0]
                        int64_t var_154
                        zmm6 = var_154.d
                        
                        if (not(zmm3[0] f<= zmm6[0]))
                            zmm0 = zmm3
                            var_160[0] = zmm6[0]
                            zmm3 = zmm6
                            var_154.d = zmm0[0]
                            zmm6 = zmm0
                        
                        zmm1 = var_160[1]
                        zmm4 = var_154:4.d
                        
                        if (not(zmm1[0] <= zmm4[0]))
                            zmm0 = zmm1
                            var_160[1] = zmm4[0]
                            zmm1 = zmm4
                            var_154:4.d = zmm0[0]
                            zmm4 = zmm0
                        
                        float var_158
                        zmm2 = var_158
                        uint32_t var_14c
                        float zmm5[0x4] = var_14c
                        
                        if (not(zmm2[0] <= zmm5[0]))
                            zmm0 = zmm2
                            var_158 = zmm5[0]
                            zmm2 = zmm5
                            var_14c = zmm0[0]
                            zmm5 = zmm0
                        
                        char var_148
                        
                        if (r12.b == 0)
                            r8 = var_188_1
                            
                            if (var_148 != 0)
                                zmm1 = zx.o(var_154)
                                zmm2 = var_160
                                r15_1 = var_148.d
                                r12 = zx.q(r15_1.b)
                                zmm0 = zmm1
                                var_170.q = zmm1.q
                                zmm8 = var_170
                                var_180.o = zmm2
                                var_168.d = r15_1
                                zmm10 = var_178
                                zmm7 = _mm_shuffle_ps(zmm0, zmm0, 0x55)
                                zmm11 = var_17c
                                zmm0 = zmm2
                                zmm12 = var_180
                                zmm9 = _mm_shuffle_ps(zmm0, zmm0, 0xff)
                        else if (var_148 == 0)
                            r8 = var_188_1
                        else
                            if (not(zmm12[0] f<= zmm3[0]))
                                var_180 = zmm3[0]
                                zmm12 = zmm3
                            
                            if (not(zmm11[0] <= zmm1[0]))
                                var_17c = zmm1[0]
                                zmm11 = zmm1
                            
                            if (not(zmm10[0] <= zmm2[0]))
                                var_178 = zmm2[0]
                                zmm10 = zmm2
                            
                            if (not(zmm9[0] f>= zmm6[0]))
                                uint32_t var_174_1 = zmm6[0]
                                zmm9 = zmm6
                            
                            if (not(zmm8[0] >= zmm4[0]))
                                var_170 = zmm4[0]
                                zmm8 = zmm4
                            
                            r8 = var_188_1
                            
                            if (not(zmm7[0] >= zmm5[0]))
                                float var_16c_1 = zmm5[0]
                                zmm7 = zmm5
                
                rsi_1 += 1
                i_1 += 1
                rax_2 = var_108_1
            while (i_1 s< sx.q(r8))
            
            result = arg2
            rsi = arg4
        
        int64_t rcx_9 = var_138[0].q
        
        if (rcx_9 != 0)
            sub_140a74f90(rcx_9)
        
        if (r12.b == 0)
            goto label_142241665
    zmm6 = 0x3f800000
    zmm8[0] = zmm8[0] - zmm11[0]
    zmm1 = zmm9
    zmm1[0] = zmm1[0] f- zmm12[0]
    zmm7[0] = zmm7[0] - zmm10[0]
    
    if (not(_mm_min_ss(_mm_min_ss(zmm8[0], zmm1[0])[0], zmm7[0])[0] f>= 1f))
        zmm3 = 0x3f800000
        zmm3[0] = 1f - zmm1[0]
        r15_1 = 1.d
        zmm2 = 0x3f800000
        zmm6[0] = 1f - zmm7[0]
        zmm2[0] = 1f - zmm8[0]
        zmm3 = _mm_max_ss(zmm3[0], 0)
        zmm6 = _mm_max_ss(zmm6[0], 0)
        float temp0_19[0x4] = _mm_max_ss(zmm2[0], 0)
        zmm3[0] = zmm3[0] f* 0.5f
        zmm6[0] = zmm6[0] f* 0.5f
        temp0_19[0] = temp0_19[0] * 0.5f
        zmm9[0] = zmm9[0] f+ zmm3[0]
        zmm10[0] = zmm10[0] f- zmm6[0]
        zmm12[0] = zmm12[0] f- zmm3[0]
        zmm8[0] = zmm8[0] + temp0_19[0]
        zmm11[0] = zmm11[0] - temp0_19[0]
        zmm7[0] = zmm7[0] f+ zmm6[0]
        float var_110_2 = zmm10[0]
        int64_t var_154_2 = (_mm_unpacklo_ps(zmm9, zmm8[0].q)).q
        float var_158_2 = var_110_2
        zmm0 = var_160
        zmm0[0].q = (_mm_unpacklo_ps(zmm12, zmm11[0].q)).q
        var_180.o = zmm0
        float var_14c_2 = zmm7[0]
        var_170.q = var_154_2

*result = var_180.o
result[1][0].q = var_170.q
(*result)[6] = r15_1
__security_check_cookie(rax_1 ^ &var_1a8)
return result
