// 函数: sub_1419e7180
// 地址: 0x1419e7180
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_2b8
int64_t rax_1 = __security_cookie ^ &var_2b8
void* r15 = arg1[0x44]
double zmm15[0x2] = arg2
int32_t var_264 = arg2.d

if ((*(r15 + 0x88) & 1) != 0 && *(r15 + 0x498) != 0)
    double zmm6[0x2]
    double var_38_1[0x2] = zmm6
    uint128_t zmm7
    uint128_t var_48_1 = zmm7
    double zmm8[0x2]
    double var_58_1[0x2] = zmm8
    double zmm9[0x2]
    double var_68_1[0x2] = zmm9
    uint128_t zmm11
    uint128_t var_88_1 = zmm11
    uint128_t zmm14
    uint128_t var_b8_1 = zmm14
    uint64_t var_128 = 0
    int64_t var_120
    __builtin_memset(&var_120, 0, 0x24)
    int32_t var_fc_1 = 0x80
    int32_t var_f8_1 = 0xffffffff
    int32_t var_f4_1 = 0
    int64_t var_e8_1 = 0
    int32_t var_e0_1 = 0
    int64_t var_1b0_1 = 0
    sub_141dca570(arg1, &var_128, nullptr)
    int64_t var_118
    int64_t* var_238_1 = &var_118
    int32_t var_230_1 = 0xffffffff
    int32_t rcx = 0
    int32_t var_240_1 = 0
    int32_t r8_1 = 0
    int32_t var_23c_1 = 1
    int64_t var_22c_1 = 0
    int64_t* var_108
    int32_t var_100
    
    if (var_100 != 0)
        int64_t* r10_1 = &var_118
        
        if (var_108 != 0)
            r10_1 = var_108
        
        int32_t temp1_1
        int32_t temp2_1
        temp1_1:temp2_1 = sx.q(var_100 - 1)
        int32_t rdx_4 = *r10_1
        
        if (rdx_4 != 0)
        label_1419e7307:
            int32_t rax_9 = ((rdx_4 - 1) & rdx_4) ^ rdx_4
            uint64_t rflags_1
            int32_t temp0_1
            temp0_1, rflags_1 = _bit_scan_reverse(rax_9)
            int32_t var_23c_2 = rax_9
            int32_t var_208_1 = temp0_1
            int32_t rax_10
            
            if (rax_9 == 0)
                rax_10 = 0x20
            else
                rax_10 = 0x1f - temp0_1
            
            int32_t rax_11 = r8_1 - rax_10 + 0x1f
            
            if (rax_11 s> var_100)
                rax_11 = var_100
            
            var_22c_1.d = rax_11
        else
            while (true)
                int64_t rdx_5 = sx.q(rcx)
                r8_1 += 0x20
                rcx += 1
                var_22c_1:4.d = r8_1
                var_240_1 = rcx
                
                if (rdx_5.d s>= (temp2_1 + (temp1_1 & 0x1f)) s>> 5)
                    var_22c_1.d = var_100
                    break
                
                rdx_4 = *(r10_1 + (rdx_5 << 2) + 4)
                int32_t var_230_2 = 0xffffffff
                
                if (rdx_4 != 0)
                    goto label_1419e7307
    
    double zmm12[0x2] = 0x80000000
    double var_1d0_1[0x2] = var_240_1.o
    int128_t var_1c0_1 = 0xffffffff
    var_1d0_1[1].d = 0xffffffff << (var_100.b & 0x1f)
    var_1d0_1[1]:4.d = var_100
    double r14_1 = var_1d0_1[1]
    double temp0_2[0x2] = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
    double zmm10[0x2]
    double var_78_1[0x2] = zmm10
    double var_200[0x2] = (&var_128).o
    uint128_t var_1f0_1 = var_1d0_1
    int64_t var_1e0_1 = temp0_2.q
    double zmm13[0x2]
    double var_a8_1[0x2] = zmm13
    int32_t var_278
    double var_218[0x2]
    double zmm0_1[0x2]
    double zmm2_1[0x2]
    double zmm3[0x2]
    float zmm4_1[0x4]
    
    while (true)
        int64_t rdx_6 = sx.q(var_1f0_1:0xc.d)
        char rax_13
        
        if (rdx_6.d != (r14_1 u>> 0x20).d || var_1f0_1.q != &var_118)
            rax_13 = 0
        else
            rax_13 = 1
        
        int64_t* rcx_3 = var_200[0]
        
        if (rax_13 == 0 || rcx_3 != &var_128)
            rax_13 = 1
        else
            rax_13 = 0
        
        if (rax_13 == 0)
            break
        
        void* rdi_1 = *(*rcx_3 + rdx_6 * 0x10)
        
        if (rdi_1 != 0)
            void* rdi_2 = *(rdi_1 + 0x130)
            
            if (rdi_2 != 0)
                zmm7 = *(rdi_2 + 0x104)
                zmm8 = *(rdi_2 + 0x100)
                zmm9 = *(arg1[0x26] + 0x108)
                void* rax_17 = sub_142488170()
                void* rdx_7 = *(rdi_2 + 0x10)
                int64_t rax_18 = sx.q(*(rax_17 + 0x38))
                
                if (rax_18.d s<= *(rdx_7 + 0x38)
                        && *(*(rdx_7 + 0x30) + (rax_18 << 3)) == rax_17 + 0x30)
                    void* rcx_6 = arg1[0x46]
                    
                    if (rcx_6 != 0)
                        void* rax_20 = arg1[0x26]
                        zmm6 = arg1[0x47].d
                        zmm10 = *(arg1 + 0x23c)
                        zmm11 = arg1[0x48].d
                        zmm12 = *(rax_20 + 0x100)
                        zmm13 = *(rax_20 + 0x104)
                        zmm12[0].d = zmm12[0].d f+ zmm12[0].d
                        zmm14 = *(rax_20 + 0x108)
                        zmm13[0].d = zmm13[0].d f+ zmm13[0].d
                        zmm3 = 0x322bcc77
                        zmm14.d = zmm14.d f+ zmm14.d
                        zmm12[0].d = zmm12[0].d f- zmm6[0].d
                        zmm13[0].d = zmm13[0].d f- zmm10[0].d
                        zmm14.d = zmm14.d f- zmm11.d
                        zmm6[0].d = zmm6[0].d f- zmm12[0].d
                        zmm7.d = zmm7.d f- zmm13[0].d
                        zmm10[0].d = zmm10[0].d f- zmm13[0].d
                        zmm11.d = zmm11.d f- zmm14.d
                        zmm8[0].d = zmm8[0].d f- zmm12[0].d
                        zmm9[0].d = zmm9[0].d f- zmm14.d
                        zmm6[0].d = zmm6[0].d f* zmm6[0].d
                        zmm7.d = zmm7.d f* zmm10[0].d
                        zmm10[0].d = zmm10[0].d f* zmm10[0].d
                        arg2.d = zmm11.d f* zmm11.d
                        zmm10[0].d = zmm10[0].d f+ zmm6[0].d
                        zmm8[0].d = zmm8[0].d f* zmm6[0].d
                        zmm9[0].d = zmm9[0].d f* zmm11.d
                        zmm7.d = zmm7.d f+ zmm8[0].d
                        zmm8 = data_143dbb1f8
                        zmm10[0].d = zmm10[0].d f+ arg2.d
                        zmm7.d = zmm7.d f+ zmm9[0].d
                        zmm9 = data_143dbb1fc
                        bool cond:3_1 = zmm10[0].d f!= 1f
                        zmm7.d = zmm7.d f/ zmm10[0].d
                        zmm0_1 = zmm7
                        arg2 = zmm7
                        zmm0_1[0].d = zmm0_1[0].d f* zmm6[0].d
                        zmm7.d = zmm7.d f* zmm11.d
                        zmm0_1[0].d = zmm0_1[0].d f+ zmm12[0].d
                        arg2.d = arg2.d f* zmm10[0].d
                        zmm7.d = zmm7.d f+ zmm14.d
                        arg2.d = arg2.d f+ zmm13[0].d
                        int32_t var_248_1 = zmm0_1[0].d
                        zmm0_1 = *(rdi_2 + 0x1e0)
                        int32_t var_268_1 = zmm7.d
                        zmm7 = data_143dbb200
                        zmm15 = _mm_min_ss(_mm_shuffle_ps(zmm0_1, zmm0_1, 0x55)[0].d, zmm0_1[0].d)
                        var_278 = arg2.d
                        var_218 = zmm0_1
                        double var_178_1[0x2] = zmm0_1
                        zmm15[0].d = zmm15[0].d f* *(rdi_2 + 0x424)
                        
                        if (not(cond:3_1))
                            int32_t var_260_1 = zmm6[0].d
                            int32_t var_25c_1 = zmm10[0].d
                            int32_t var_258_1 = zmm11.d
                        else if (zmm10[0].d f>= 9.99999994e-09f)
                            zmm4_1 = 0x3f000000
                            float temp0_5[0x4] = _mm_rsqrt_ss(zmm10[0], zmm10[0].d)
                            zmm2_1 = 0x3f000000
                            zmm10[0].d = zmm10[0].d f* 0.5f
                            zmm0_1 = temp0_5
                            zmm0_1[0].d = zmm0_1[0].d f* temp0_5[0]
                            arg2.d = zmm10.d f* zmm0_1[0].d
                            zmm0_1 = temp0_5
                            zmm2_1[0].d = 0.5f f- arg2.d
                            zmm0_1[0].d = zmm0_1[0].d f* zmm2_1[0].d
                            temp0_5[0] = temp0_5[0] f+ zmm0_1[0].d
                            zmm0_1 = temp0_5
                            arg2.d = temp0_5.d f* temp0_5[0]
                            zmm10[0].d = zmm10[0].d f* arg2.d
                            zmm4_1[0] = 0.5f f- zmm10[0].d
                            zmm3 = 0x322bcc77
                            zmm0_1[0].d = zmm0_1[0].d f* zmm4_1[0]
                            temp0_5[0] = temp0_5[0] f+ zmm0_1[0].d
                            zmm0_1 = temp0_5
                            float var_204_1 = temp0_5[0]
                            zmm0_1[0].d = zmm0_1[0].d f* zmm6[0].d
                            arg2.d = temp0_5.d f* zmm10[0].d
                            temp0_5[0] = temp0_5[0] f* zmm11.d
                            zmm6 = zmm0_1
                            int32_t var_260_3 = zmm0_1[0].d
                            zmm10 = arg2
                            zmm0_1 = var_218
                            int32_t var_25c_3 = arg2.d
                            zmm11 = temp0_5
                            float var_258_3 = temp0_5[0]
                        else
                            zmm6 = zmm8
                            int32_t var_25c_2 = zmm9[0].d
                            int32_t var_260_2 = zmm6[0].d
                            zmm10 = zmm9
                            int32_t var_258_2 = zmm7.d
                            zmm11 = zmm7
                        
                        double var_168_1[0x2] = zmm0_1
                        arg2.d = zmm15.d f* zmm6[0].d
                        zmm15[0].d = zmm15[0].d f* zmm10[0].d
                        arg2.d = arg2.d f+ var_248_1
                        zmm10 = _mm_shuffle_ps(zmm0_1, zmm0_1, 0x55)
                        zmm15[0].d = zmm15[0].d f+ var_278
                        zmm10 = _mm_min_ss(zmm10[0].d, zmm0_1[0].d)
                        zmm15[0].d = zmm15[0].d f* zmm11.d
                        zmm0_1 = *(rcx_6 + 0x1e0)
                        zmm12[0].d = zmm12[0].d f- arg2.d
                        double var_158_1[0x2] = zmm0_1
                        zmm15[0].d = zmm15[0].d f+ var_268_1
                        zmm10[0].d = zmm10[0].d f* *(rdi_2 + 0x424)
                        zmm13[0].d = zmm13[0].d f- zmm15[0].d
                        zmm6 = _mm_min_ss(_mm_shuffle_ps(zmm0_1, zmm0_1, 0x55)[0].d, zmm0_1[0].d)
                        zmm14.d = zmm14.d f- zmm15[0].d
                        zmm12[0].d = zmm12[0].d f* zmm12[0].d
                        zmm13[0].d = zmm13[0].d f* zmm13[0].d
                        zmm6[0].d = zmm6[0].d f* *(rcx_6 + 0x424)
                        zmm13[0].d = zmm13[0].d f+ zmm12[0].d
                        arg2.d = zmm14.d f* zmm14.d
                        zmm13[0].d = zmm13[0].d f+ arg2.d
                        
                        if (zmm13[0].d f!= 1f)
                            if (not(zmm13[0].d f< zmm3[0].d))
                                float zmm5_1[0x4] = 0x3f000000
                                float temp0_10[0x4] = _mm_rsqrt_ss(zmm13[0], zmm13[0].d)
                                zmm2_1 = 0x3f000000
                                zmm13[0].d = zmm13[0].d f* 0.5f
                                zmm0_1 = temp0_10
                                zmm0_1[0].d = zmm0_1[0].d f* temp0_10[0]
                                arg2.d = zmm13.d f* zmm0_1[0].d
                                zmm0_1 = temp0_10
                                zmm2_1[0].d = 0.5f f- arg2.d
                                zmm0_1[0].d = zmm0_1[0].d f* zmm2_1[0].d
                                temp0_10[0] = temp0_10[0] f+ zmm0_1[0].d
                                zmm0_1 = temp0_10
                                arg2.d = temp0_10.d f* temp0_10[0]
                                zmm13[0].d = zmm13[0].d f* arg2.d
                                zmm5_1[0] = 0.5f f- zmm13[0].d
                                zmm0_1[0].d = zmm0_1[0].d f* zmm5_1[0]
                                temp0_10[0] = temp0_10[0] f+ zmm0_1[0].d
                                zmm7 = temp0_10
                                float var_244_1 = temp0_10[0]
                                zmm8 = zmm7
                                zmm9 = zmm7
                                zmm8[0].d = zmm8[0].d f* zmm12[0].d
                                zmm9[0].d = zmm9[0].d f* zmm13[0].d
                                zmm7.d = zmm7.d f* zmm14.d
                            
                            int32_t var_250_2 = zmm9[0].d
                            int32_t var_254_2 = zmm8[0].d
                        else
                            int32_t var_254_1 = zmm12[0].d
                            zmm8 = zmm12
                            int32_t var_250_1 = zmm13[0].d
                            zmm9 = zmm13
                            zmm7 = zmm14
                        
                        zmm0_1 = *(arg1 + 0x26c)
                        zmm6[0].d = zmm6[0].d f+ zmm10[0].d
                        zmm3 = arg1[0x50].d
                        zmm8[0].d = zmm8[0].d f+ zmm8[0].d
                        int32_t var_24c_1 = zmm7.d
                        zmm9[0].d = zmm9[0].d f+ zmm9[0].d
                        zmm7.d = zmm7.d f+ zmm7.d
                        zmm2_1 = zmm6
                        zmm2_1[0].d = zmm2_1[0].d f* zmm8[0].d
                        arg2.d = zmm6.d f* zmm9[0].d
                        zmm6[0].d = zmm6[0].d f* zmm7.d
                        zmm2_1[0].d = zmm2_1[0].d f- zmm12[0].d
                        zmm12 = 0x80000000
                        arg2.d = arg2.d f- zmm13[0].d
                        zmm6[0].d = zmm6[0].d f- zmm14.d
                        zmm2_1[0].d = zmm2_1[0].d f* zmm0_1[0].d
                        arg2.d = arg2.d f* zmm0_1[0].d
                        zmm6[0].d = zmm6[0].d f* zmm0_1[0].d
                        zmm0_1 = zmm3 ^ 0x80000000
                        
                        if (not(zmm2_1[0].d f>= zmm0_1[0].d))
                            zmm2_1 = zmm0_1
                        else if (not(zmm2_1[0].d f< zmm3[0].d))
                            zmm2_1 = zmm3
                        
                        if (not(arg2.d f>= zmm0_1[0].d))
                            arg2 = zmm0_1
                        else if (not(arg2.d f< zmm3[0].d))
                            arg2 = zmm3
                        
                        if (not(zmm6[0].d f>= zmm0_1[0].d))
                            zmm6 = zmm0_1
                        else if (not(zmm6[0].d f< zmm3[0].d))
                            zmm6 = zmm3
                        
                        zmm2_1[0].d = zmm2_1[0].d f+ arg1[0x4a].d
                        arg2.d = arg2.d f+ *(arg1 + 0x254)
                        zmm6[0].d = zmm6[0].d f+ arg1[0x4b].d
                        arg1[0x4a].d = zmm2_1[0].d
                        *(arg1 + 0x254) = arg2.d
                        arg1[0x4b].d = zmm6[0].d
        
        var_1f0_1:8.d &= not.d(var_200[1]:4.d)
        sub_14059bdd0(&var_200[1])
    
    arg2 = arg1[0x4e].d ^ zmm12
    zmm0_1 = arg2
    zmm0_1[0].d = zmm0_1[0].d f* arg1[0x4c].d
    zmm9 = arg2
    arg2.d = arg2.d f* *(arg1 + 0x264)
    zmm9[0].d = zmm9[0].d f* *(arg1 + 0x25c)
    zmm0_1[0].d = zmm0_1[0].d f+ *(arg1 + 0x254)
    arg2.d = arg2.d f+ arg1[0x4b].d
    zmm9[0].d = zmm9[0].d f+ arg1[0x4a].d
    *(arg1 + 0x254) = zmm0_1[0].d
    arg1[0x4b].d = arg2.d
    arg1[0x4a].d = zmm9[0].d
    zmm11 = arg1[0x4c].d
    zmm8 = *(arg1 + 0x25c)
    zmm0_1 = zmm11
    zmm7 = *(arg1 + 0x264)
    zmm6 = zmm8
    zmm6[0].d = zmm6[0].d f* zmm8[0].d
    zmm0_1[0].d = zmm0_1[0].d f* zmm11.d
    arg2.d = zmm7.d f* zmm7.d
    zmm6[0].d = zmm6[0].d f+ zmm0_1[0].d
    zmm6[0].d = zmm6[0].d f+ arg2.d
    
    if (zmm6[0].d f!= 1f)
        if (zmm6[0].d f>= 9.99999994e-09f)
            zmm4_1 = 0x3f000000
            float temp0_12[0x4] = _mm_rsqrt_ss(zmm6[0], zmm6[0].d)
            zmm2_1 = 0x3f000000
            zmm6[0].d = zmm6[0].d f* 0.5f
            zmm0_1 = temp0_12
            zmm0_1[0].d = zmm0_1[0].d f* temp0_12[0]
            arg2.d = zmm6.d f* zmm0_1[0].d
            zmm0_1 = temp0_12
            zmm2_1[0].d = 0.5f f- arg2.d
            zmm0_1[0].d = zmm0_1[0].d f* zmm2_1[0].d
            temp0_12[0] = temp0_12[0] f+ zmm0_1[0].d
            zmm0_1 = temp0_12
            arg2.d = temp0_12.d f* temp0_12[0]
            zmm6[0].d = zmm6[0].d f* arg2.d
            zmm4_1[0] = 0.5f f- zmm6[0].d
            zmm0_1[0].d = zmm0_1[0].d f* zmm4_1[0]
            temp0_12[0] = temp0_12[0] f+ zmm0_1[0].d
            zmm11.d = zmm11.d f* temp0_12[0]
            float var_268_2 = temp0_12[0]
            zmm8[0].d = zmm8[0].d f* temp0_12[0]
            arg2 = zmm11
            zmm7.d = zmm7.d f* temp0_12[0]
        else
            zmm8 = data_143dbb1f8
            arg2 = data_143dbb1fc
            zmm7 = data_143dbb200
        
        int32_t var_290_2 = zmm7.d
        int64_t var_298
        var_298:4.d = arg2.d
        var_298.d = zmm8[0].d
    else
        zmm0_1 = zx.o(*(arg1 + 0x25c))
        arg2 = zmm0_1
        zmm7 = *(arg1 + 0x264)
        zmm8 = zmm0_1.d
        arg2 = _mm_shuffle_ps(arg2, arg2, 0x55)
    
    zmm6[0].d = zmm6[0].d f* *(arg1 + 0x274)
    zmm6 ^= zmm12
    zmm6[0].d = zmm6[0].d f* arg2.d
    zmm6[0].d = zmm6[0].d f* zmm8[0].d
    zmm6[0].d = zmm6[0].d f+ *(arg1 + 0x254)
    zmm6[0].d = zmm6[0].d f* zmm7.d
    zmm6[0].d = zmm6[0].d f+ zmm9[0].d
    zmm6[0].d = zmm6[0].d f+ arg1[0x4b].d
    *(arg1 + 0x254) = zmm6[0].d
    arg1[0x4a].d = zmm6[0].d
    arg1[0x4b].d = zmm6[0].d
    arg2 = arg1[0x4f].d ^ zmm12
    zmm0_1 = arg2
    zmm3 = arg2
    zmm0_1[0].d = zmm0_1[0].d f* arg1[0x49].d
    zmm3[0].d = zmm3[0].d f* *(arg1 + 0x244)
    arg2.d = arg2.d f* *(arg1 + 0x24c)
    zmm0_1[0].d = zmm0_1[0].d f+ *(arg1 + 0x254)
    zmm3[0].d = zmm3[0].d f+ zmm6[0].d
    arg2.d = arg2.d f+ arg1[0x4b].d
    *(arg1 + 0x254) = zmm0_1[0].d
    arg1[0x4a].d = zmm3[0].d
    arg1[0x4b].d = arg2.d
    zmm2_1 = *(arg1 + 0x284)
    zmm0_1 = zmm2_1 ^ zmm12
    
    if (zmm3[0].d f>= zmm0_1[0].d)
        zmm3 = _mm_min_ss(zmm3[0].d, zmm2_1[0].d)
    else
        zmm3 = zmm0_1
    
    arg2 = *(arg1 + 0x254)
    arg1[0x4a].d = zmm3[0].d
    
    if (arg2.d f>= zmm0_1[0].d)
        arg2 = _mm_min_ss(arg2.d, zmm2_1[0].d)
    else
        arg2 = zmm0_1
    
    *(arg1 + 0x254) = arg2.d
    arg2 = arg1[0x4b].d
    
    if (not(arg2.d f< zmm0_1[0].d))
        zmm0_1 = _mm_min_ss(arg2.d, zmm2_1[0].d)
    
    zmm15 = var_264
    arg1[0x4b].d = zmm0_1[0].d
    arg2.d = zmm15.d f* *(arg1 + 0x254)
    zmm15[0].d = zmm15[0].d f* zmm3[0].d
    zmm15[0].d = zmm15[0].d f* arg1[0x4b].d
    zmm15[0].d = zmm15[0].d f+ *(arg1 + 0x244)
    arg2.d = arg2.d f+ arg1[0x49].d
    zmm15[0].d = zmm15[0].d f+ *(arg1 + 0x24c)
    *(arg1 + 0x244) = zmm15[0].d
    arg1[0x49].d = arg2.d
    *(arg1 + 0x24c) = zmm15[0].d
    arg2 = *(arg1 + 0x244)
    arg1[0x4a] = data_143dbb1f8.q
    zmm0_1 = 0xc47a0000
    arg1[0x4b].d = data_143dbb200
    
    if (arg2.d f>= -1000f)
        arg2 = _mm_min_ss(arg2.d, 0x447a0000)
    else
        arg2 = 0xc47a0000
    
    *(arg1 + 0x244) = arg2.d
    arg2 = arg1[0x49].d
    
    if (arg2.d f>= -1000f)
        arg2 = _mm_min_ss(arg2.d, 0x447a0000)
    else
        arg2 = 0xc47a0000
    
    arg1[0x49].d = arg2.d
    
    if (not(zmm15[0].d f< -1000f))
        zmm0_1 = _mm_min_ss(zmm15[0].d, 0x447a0000)
    
    *(arg1 + 0x24c) = zmm0_1[0].d
    arg2.d = zmm15.d f* *(arg1 + 0x244)
    zmm15[0].d = zmm15[0].d f* *(arg1 + 0x24c)
    zmm15[0].d = zmm15[0].d f* arg1[0x49].d
    zmm15[0].d = zmm15[0].d f+ *(arg1 + 0x264)
    arg2.d = arg2.d f+ *(arg1 + 0x25c)
    zmm15[0].d = zmm15[0].d f+ arg1[0x4c].d
    *(arg1 + 0x264) = zmm15[0].d
    zmm15[0].d = zmm15[0].d f* zmm15[0].d
    arg1[0x4c].d = zmm15[0].d
    *(arg1 + 0x25c) = arg2.d
    zmm15[0].d = zmm15[0].d f* zmm15[0].d
    arg2.d = arg2.d f* arg2.d
    zmm15[0].d = zmm15[0].d f+ arg2.d
    arg2 = 0xbf800000
    zmm15[0].d = zmm15[0].d f+ zmm15[0].d
    zmm0_1 = _mm_sqrt_ss(zx.o(0)[0].d, zmm15[0].d)
    zmm0_1[0].d = zmm0_1[0].d f* 0.00999999978f
    
    if (not(zmm0_1[0].d f< -1f))
        arg2 = _mm_min_ss(zmm0_1[0].d, 0x3f800000)
    
    uint128_t zmm0_2 = asinf(arg2[0].d)
    zmm8 = arg1[0x4c].d
    zmm9 = zmm0_2 ^ zmm12
    double (* rax_25)[0x2]
    
    if (zmm15[0].d f<= 9.99999975e-05f)
        var_218[0] = 0
        rax_25 = &var_218
        var_218[1].d = 0x3f800000
    else
        zmm7 = *(arg1 + 0x25c) ^ zmm12
        arg2.d = zmm8.d f* zmm8[0].d
        zmm0_2.d = zmm7.d f* zmm7.d
        arg2.d = arg2.d f+ zmm0_2.d
        int32_t var_28c
        
        if (not(arg2.d f!= 1f))
            var_28c = zmm8[0].d
            rax_25 = &var_28c
            int32_t var_288_1 = zmm7.d
            int32_t var_284_1 = zx.o(0)[0].d
        else if (arg2.d f>= 9.99999994e-09f)
            int32_t var_284_3 = 0
            rax_25 = &var_28c
            zmm2_1 = 0x3f000000
            zmm3 = arg2
            uint128_t zmm5_2 = _mm_rsqrt_ss(arg2.d, zmm3[0].d)
            zmm3[0].d = zmm3[0].d f* 0.5f
            zmm0_2.d = zmm5_2.d f* zmm5_2.d
            arg2.d = zmm3.d f* zmm0_2.d
            zmm2_1[0].d = 0.5f f- arg2.d
            zmm0_2.d = zmm5_2.d f* zmm2_1[0].d
            zmm5_2.d = zmm5_2.d f+ zmm0_2.d
            arg2.d = zmm5_2.d f* zmm5_2.d
            zmm3[0].d = zmm3[0].d f* arg2.d
            zmm0_2.d = zmm5_2.d f* (0.5f f- zmm3[0].d)
            zmm5_2.d = zmm5_2.d f+ zmm0_2.d
            int32_t var_264_1 = zmm5_2.d
            zmm0_2.d = zmm5_2.d f* zmm8[0].d
            zmm5_2.d = zmm5_2.d f* zmm7.d
            var_28c = zmm0_2.d
            int32_t var_288_3 = zmm5_2.d
        else
            rax_25 = &var_28c
            arg2 = data_143dbb1fc
            var_28c = data_143dbb1f8.d
            int32_t var_284_2 = data_143dbb200.d
            int32_t var_288_2 = arg2.d
    
    zmm6 = zx.o(*rax_25)
    int32_t rax_26 = (*rax_25)[1].d
    zmm0_2 = zmm6
    void* rdi_3 = *(r15 + 0x498)
    zmm7 = zx.o(*(arg1 + 0x25c))
    int32_t r14_3 = *(arg1 + 0x264)
    var_278.q = zmm6.q
    zmm6 = _mm_shuffle_ps(zmm6, zmm6, 0xe1)
    zmm6[0].d = _mm_shuffle_ps(zmm0_2, zmm0_2, 0x55).d
    zmm6 = _mm_shuffle_ps(zmm6, zmm6, 0xc6)
    zmm6[0].d = rax_26.d
    uint64_t var_1a0_1 = zmm7.q
    zmm6 = _mm_shuffle_ps(zmm6, zmm6, 0x27)
    zmm6[0].d = zmm9[0].d
    zmm6 = _mm_shuffle_ps(zmm6, zmm6, 0x39)
    var_278.o = zmm6
    
    if (sub_140a80f40() == 0)
        uint32_t rax_28
        
        if (data_143f138f4 == 0 && data_143de5480 != 0)
            rax_28.b = GetCurrentThreadId() == data_143de5470
        
        if (data_143f138f4 != 0 || (data_143de5480 != 0 && rax_28.b == 0))
            void var_148
            void** rax_29
            int128_t zmm6_1
            rax_29, zmm6_1 = sub_1419e1260(&var_148, nullptr, 0xff)
            void* rcx_9 = *rax_29
            *(rcx_9 + 0x10) = rdi_3.o
            *(rcx_9 + 0x20) = r14_3.o
            *(rcx_9 + 0x30) = zmm6_1
            void* rcx_10 = *rax_29
            int32_t r8_4 = rax_29[2].d
            int64_t* rdx_8 = rax_29[1]
            void* rdi_4 = *(rcx_10 + 0x48)
            var_278.q = rdi_4
            int32_t* r14_4 = rdi_4 + 0x48
            
            if (rdi_4 != 0)
                *r14_4 += 1
                rdi_4 = var_278.q
            
            sub_1419e5bd0(rcx_10, rdx_8, r8_4, 1)
            
            if (rdi_4 != 0)
                int32_t rax_30 = *r14_4
                *r14_4 -= 1
                
                if (rax_30 == 1)
                    sub_140a2f6e0(var_278.q)
        else
            *(rdi_3 + 0x640) = zmm7.q
            *(rdi_3 + 0x648) = r14_3
            *(rdi_3 + 0x650) = zmm6
    else
        *(rdi_3 + 0x640) = zmm7.q
        *(rdi_3 + 0x648) = r14_3
        *(rdi_3 + 0x650) = zmm6
    
    zmm0_2 = arg1[0x4c].d
    zmm2_1 = *(arg1 + 0x25c)
    arg2 = *(arg1 + 0x264)
    zmm2_1[0].d = zmm2_1[0].d f* zmm2_1[0].d
    zmm0_2.d = zmm0_2.d f* zmm0_2.d
    arg2.d = arg2.d f* arg2.d
    zmm2_1[0].d = zmm2_1[0].d f+ zmm0_2.d
    zmm2_1[0].d = zmm2_1[0].d f+ arg2.d
    
    if (not(zmm2_1[0].d f>= 9.99999884e-07f))
        zmm0_2 = arg1[0x49].d
        zmm2_1 = *(arg1 + 0x244)
        arg2 = *(arg1 + 0x24c)
        zmm2_1[0].d = zmm2_1[0].d f* zmm2_1[0].d
        zmm0_2.d = zmm0_2.d f* zmm0_2.d
        arg2.d = arg2.d f* arg2.d
        zmm2_1[0].d = zmm2_1[0].d f+ zmm0_2.d
        zmm2_1[0].d = zmm2_1[0].d f+ arg2.d
        
        if (not(zmm2_1[0].d f>= 9.99999884e-07f))
            sub_141dd7200(arg1, 0)
    
    int32_t var_e0_2 = 0
    
    if (var_e8_1 != 0)
        sub_140a74f90(var_e8_1)
    
    var_120.d = 0
    int32_t var_f8_2 = 0xffffffff
    int32_t var_f4_2 = 0
    sub_14059a8e0(&var_118, 0)
    
    if (var_108 != 0)
        sub_140a74f90(var_108)
    
    uint64_t rcx_17 = var_128
    
    if (rcx_17 != 0)
        sub_140a74f90(rcx_17)

int64_t* result = sub_141ddacb0(arg1, zmm15)
__security_check_cookie(rax_1 ^ &var_2b8)
return result
