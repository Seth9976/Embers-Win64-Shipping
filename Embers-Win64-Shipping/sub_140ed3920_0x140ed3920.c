// 函数: sub_140ed3920
// 地址: 0x140ed3920
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140f6be50(arg1)
sub_140e997c0(&arg1[0xb6], &arg1[0xb3])
sub_14095cd40(&arg1[0xb3], 0)
void* rax = arg1[0xdc]

if (rax != 0)
    int32_t rax_1 = *(rax + 8)
    
    if (rax_1 s> 0)
        int32_t i_3 = rax_1 - 1
        uint128_t zmm7 = zx.o(0)
        int128_t zmm9 = zx.o(0)
        float zmm10[0x4] = zx.o(0)
        uint128_t zmm1_1 = _mm_cvtpd_ps(zx.o(arg1[0x7d]))
        zmm1_1.d = zmm1_1.d f+ zmm1_1.d
        zmm1_1.d = zmm1_1.d f- 0.5f
        int32_t i_4 = int.d(zmm1_1.d) s>> 1
        int32_t i_2
        
        if (i_4 s>= 0)
            if (i_4 s< i_3)
                i_3 = i_4
            
            i_2 = i_3
        else
            i_2 = 0
        
        int128_t zmm13 = arg3[2]
        uint128_t zmm15 = zx.o(0)
        int64_t rsi
        rsi.b = 0
        int64_t r13
        r13.b = 0
        void var_d8
        sub_140f66410(&var_d8, arg1[0x9b].d, arg3)
        void** rcx_4 = arg1[0xdc]
        int32_t i = i_2
        int32_t var_d4
        uint128_t zmm3 = var_d4
        uint128_t zmm6
        uint128_t var_38_1 = zmm6
        int64_t r12_2 = sx.q(i_2) << 4
        uint128_t zmm8
        uint128_t var_58_1 = zmm8
        uint128_t zmm0_1
        
        while (i s< rcx_4[1].d)
            int64_t* rdx_3 = *rcx_4 + r12_2
            
            if (*rdx_3 != 0)
                zmm0_1, zmm7 = sub_140ebd2a0(arg1, rdx_3, i, i_2, zmm13.d)
                zmm8 = zmm0_1
                float zmm2_1[0x4]
                
                if (i != i_2)
                    zmm3 = var_d4
                    zmm0_1.d = zmm0_1.d f+ zmm9.d
                    
                    if (zmm0_1.d f<= zmm3.d)
                        zmm2_1 = 0x3f800000
                    else
                        zmm2_1 = zmm3
                        zmm2_1[0] = zmm2_1[0] f- zmm9.d
                        zmm2_1[0] = zmm2_1[0] f/ zmm8.d
                else
                    zmm15 = zmm0_1
                    zmm6 = _mm_cvtpd_ps(zx.o(arg1[0x7d]))
                    truncf(zmm6.d)
                    zmm3 = var_d4
                    zmm6.d = zmm6.d f- zmm6.d
                    zmm2_1 = zmm3
                    zmm1_1.d = 1f f- _mm_max_ss(zmm6.d, 0).d
                    zmm0_1.d = zmm1_1.d f* zmm8.d
                    zmm2_1[0] = zmm2_1[0] f/ zmm0_1.d
                    zmm2_1 = _mm_min_ss(zmm2_1[0], zmm1_1.d)
                
                zmm2_1[0] = zmm2_1[0] + zmm10[0]
                zmm7.d = zmm7.d f+ zmm8.d
                zmm10 = zmm2_1
                
                if (i != i_2)
                    zmm0_1 = zmm8
                else
                    zmm0_1.d = zmm2_1.d f* zmm8.d
                
                rcx_4 = arg1[0xdc]
                zmm9.d = zmm9.d f+ zmm0_1.d
                zmm0_1.d = zmm3.d f+ 0.00100000005f
                r13.b = i s>= rcx_4[1].d - 1
                rsi.b = zmm9.d f>= zmm0_1.d
            
            i += 1
            r12_2 += 0x10
            
            if (rsi.b != 0)
                break
        
        if (r13.b == 0 || rsi.b != 0)
            *arg2 = arg1[0x7d]
            zmm1_1.q = fconvert.d(zmm10[0])
            arg2[3].b = 0
        else
            int32_t i_1 = i_2 - 1
            zmm0_1.d = zmm7.d f- zmm3.d
            zmm0_1.d = zmm0_1.d f/ zmm15.d
            zmm6.q = fconvert.d(zmm0_1.d)
            zmm6.q = zmm6.q f+ _mm_cvtepi32_pd(zx.q(i_2)).q
            
            if (not(zmm7.d f>= zmm3.d))
                int64_t rsi_2 = sx.q(i_1) << 4
                
                while (i_1 s>= 0)
                    int64_t* rdx_5 = *arg1[0xdc] + rsi_2
                    
                    if (*rdx_5 != 0)
                        zmm0_1, zmm6, zmm7 = sub_140ebd2a0(arg1, rdx_5, i_1, i_2, zmm13.d)
                        zmm3 = var_d4
                        zmm1_1.d = zmm0_1.d f+ zmm7.d
                        zmm7 = zmm1_1
                        
                        if (not(zmm1_1.d f<= zmm3.d) && not(zmm0_1.d f<= 0f))
                            zmm1_1.d = zmm1_1.d f- zmm3.d
                            zmm1_1.d = zmm1_1.d f/ zmm0_1.d
                            zmm6.q = fconvert.d(zmm1_1.d)
                            zmm6.q = zmm6.q f+ _mm_cvtepi32_pd(zx.q(i_1)).q
                    
                    i_1 -= 1
                    rsi_2 -= 0x10
                    
                    if (not(zmm7.d f< zmm3.d))
                        break
            
            void* rax_5 = arg1[0xdc]
            *arg2 = zmm6.q
            arg2[3].b = 1
            zmm1_1.q = _mm_cvtepi32_pd(zx.q(*(rax_5 + 8))).q f- zmm6.q
        
        arg2[2] = zmm1_1.q
        zmm0_1.q = fconvert.d(zmm7.d)
        arg2[1] = zmm0_1.q
        sub_140ed3350(&arg1[0x9e])
        sub_140edf010(&arg1[0x9e])
        return arg2

__builtin_memset(arg2, 0, 0x19)
sub_140ed3350(&arg1[0x9e])
sub_140edf010(&arg1[0x9e])
return arg2
