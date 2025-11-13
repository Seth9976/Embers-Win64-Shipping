// 函数: sub_1429c6480
// 地址: 0x1429c6480
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_288
int64_t rax_1 = __security_cookie ^ &var_288
int32_t* r13 = arg3
int64_t rdi = sx.q(arg4)
__CheckForDebuggerJustMyCode(&data_14427d007)
int32_t rdx = 0
int32_t r9 = 0
uint128_t zmm0
uint128_t zmm1
int512_t zmm2
uint128_t zmm3

if (rdi.d s> 0)
    if (rdi.d u>= 8 && data_143ccb970 s>= 2)
        int32_t zmm4_1[0x4] = zx.o(0)
        int32_t zmm5_1[0x4] = zx.o(0)
        int32_t rcx_1 = rdi.d & 0x80000007
        
        if (rcx_1 s< 0)
            rcx_1 = ((rcx_1 - 1) | 0xfffffff8) + 1
        
        int64_t i = 0
        int32_t* rax_6 = &r13[0xc]
        
        do
            zmm1 = zx.o(rax_6[6])
            r9 += 8
            zmm0 = zx.o(*rax_6)
            i += 8
            zmm2.o = zx.o(rax_6[-6])
            zmm3 = zx.o(rax_6[-0xc])
            rax_6 = &rax_6[0x30]
            zmm3 = _mm_unpacklo_epi32(zmm3, zmm0.q)
            zmm0 = zx.o(rax_6[-0x18])
            zmm2.o = _mm_unpacklo_epi32(zmm2.o, zmm1.q)
            zmm1 = zx.o(rax_6[-0x12])
            zmm3 = _mm_unpacklo_epi32(zmm3, zmm2.q)
            zmm2.o = zx.o(rax_6[-0x1e])
            zmm4_1 = _mm_max_epi32(zmm4_1, zmm3)
            zmm3 = _mm_unpacklo_epi32(zx.o(rax_6[-0x24]), zmm0.q)
            zmm2.o = _mm_unpacklo_epi32(zmm2.o, zmm1.q)
            zmm5_1 = _mm_max_epi32(zmm5_1, _mm_unpacklo_epi32(zmm3, zmm2.q))
        while (i s< sx.q(rdi.d - rcx_1))
        
        zmm4_1 = _mm_max_epi32(zmm4_1, zmm5_1)
        zmm4_1 = _mm_max_epi32(zmm4_1, _mm_bsrli_si128(zmm4_1, 8))
        rdx = _mm_max_epi32(zmm4_1, _mm_bsrli_si128(zmm4_1, 4))[0]
    
    if (r9 s< rdi.d)
        int32_t* r8_1 = &r13[sx.q(r9) * 6]
        uint64_t i_6 = zx.q(rdi.d - r9)
        uint64_t i_1
        
        do
            int32_t rax_8 = *r8_1
            r8_1 = &r8_1[6]
            
            if (rdx s>= rax_8)
                rax_8 = rdx
            
            rdx = rax_8
            i_1 = i_6
            i_6 -= 1
        while (i_1 != 1)

int64_t result

if (rdi.d s<= 0 || rdx == 0)
    result = 1
else
    int64_t rbx_1 = sx.q(rdx)
    void* rax_9 = malloc(rbx_1 * 0x28)
    int32_t* rax_10 = malloc(rbx_1 << 4)
    int32_t* rsi_1 = rax_10
    int32_t* rax_11 = malloc(rbx_1 << 2)
    void* rcx_11 = rax_9
    int32_t* r14_1 = rax_11
    
    if (rcx_11 == 0)
        goto label_1429c7069
    
    if (rsi_1 == 0 || rax_11 == 0)
        free(rcx_11)
    label_1429c7069:
        
        if (rsi_1 != 0)
            free(rsi_1)
        
        if (r14_1 != 0)
            free(r14_1)
        
        result = 0
    else
        int32_t r8_2 = 0
        uint128_t zmm6
        uint128_t var_48_1 = zmm6
        uint128_t zmm7
        uint128_t var_58_1 = zmm7
        uint128_t zmm8
        uint128_t var_68_1 = zmm8
        uint128_t zmm9
        uint128_t var_78_1 = zmm9
        int128_t zmm10
        int128_t var_88_1 = zmm10
        uint128_t zmm11
        uint128_t var_98_1 = zmm11
        uint128_t zmm12
        uint128_t var_a8_1 = zmm12
        int128_t zmm13
        int128_t var_b8_1 = zmm13
        uint128_t zmm14
        uint128_t var_c8_1 = zmm14
        uint128_t zmm15
        uint128_t var_d8_1 = zmm15
        int32_t var_244_1 = 0
        
        if (rdi.d s<= 0)
        label_1429c703c:
            free(rsi_1)
            free(r14_1)
            free(rax_9)
            result = 1
        else
            zmm12 = 0x7fffffffffffffff
            int64_t rdx_2 = 0
            zmm13 = 0x800000
            int64_t var_1f8_1 = 0
            
            while (true)
                int32_t i_10 = 0
                int64_t i_12 = 0
                int32_t i_11 = 0
                int64_t i_9 = 0
                int32_t var_22c_1 = 0
                
                if (*r13 s> 0)
                    void* rdx_3 = nullptr
                    void* var_1d8_1 = rcx_11
                    void* var_1c8_1 = nullptr
                    int32_t* var_200_1 = rsi_1
                    
                    while (true)
                        int64_t rcx_12 = 0xffffffff
                        int64_t var_220_1 = -1
                        int64_t rdx_4 = sx.q(*(rdx_3 + *(r13 + 8)))
                        int64_t rbx_2 = rdx_4 * 0x58
                        
                        if (*(rbx_2 + arg2 + 0x10) == r13)
                            rcx_12 = 0
                            var_220_1 = rcx_12
                        else if (*(rbx_2 + arg2 + 0x18) == r13)
                            rcx_12 = 1
                            var_220_1 = rcx_12
                        else if (*(rbx_2 + arg2 + 0x20) == r13)
                            rcx_12 = 2
                            var_220_1 = rcx_12
                        
                        int32_t r8_3 = *(arg5 + (sx.q((rcx_12 + (rdx_4 << 1)).d + rdx_4.d) << 2))
                        int64_t var_268
                        int64_t* var_260
                        int32_t var_258
                        int32_t var_f0
                        (*(*arg7 + 0x18))(arg7, &var_f0, zx.q(r8_3 s>> 2), zx.q(r8_3) & 3, var_268, 
                            var_260, var_258)
                        zmm2.o = zx.o(*(rbx_2 + arg2 + 0x28))
                        int32_t var_ec
                        zmm10 = var_ec
                        zmm0 = zmm2.o
                        zmm11 = var_f0
                        int32_t var_e8
                        uint128_t zmm5_2 = var_e8
                        int32_t rax_17 = *(rbx_2 + arg2 + 0x30)
                        zmm1.d = zmm11.d f* zmm2.d
                        float zmm4_2 = zmm10.d f* _mm_shuffle_ps(zmm0, zmm0, 0x55).d
                        zmm0.d = zmm5_2.d f* rax_17
                        int32_t rax_18 = *(rbx_2 + arg2 + 0x3c)
                        int64_t var_198_1 = (zmm2.o).q
                        zmm2.o = zmm10
                        zmm4_2 = zmm4_2 f+ zmm1.d f+ zmm0.d
                        zmm0 = zx.o(*(rbx_2 + arg2 + 0x28))
                        uint64_t var_188_1 = zmm0.q
                        zmm1.d = zmm11.d f* zmm4_2
                        zmm2.d = zmm2.d f* zmm4_2
                        zmm3.d = zmm5_2.d f* zmm4_2
                        zmm9.d = zmm0.d f- zmm1.d
                        zmm7.d = _mm_shuffle_ps(zmm0, zmm0, 0x55).d f- zmm2.d
                        zmm2.o = zx.o(*(rbx_2 + arg2 + 0x34))
                        zmm1.d = zmm11.d f* zmm2.d
                        zmm8.d = rax_17.d f- zmm3.d
                        zmm0 = zmm2.o
                        int64_t var_178_1 = (zmm2.o).q
                        zmm4_2 = zmm10.d f* _mm_shuffle_ps(zmm0, zmm0, 0x55).d
                        zmm2.o = zmm10
                        int32_t var_238_1 = zmm9.d
                        zmm0.d = zmm5_2.d f* rax_18
                        int32_t var_234_1 = zmm8.d
                        uint32_t var_1f0_1 = zmm7.d
                        zmm4_2 = zmm4_2 f+ zmm1.d f+ zmm0.d
                        zmm0 = zx.o(*(rbx_2 + arg2 + 0x34))
                        uint64_t var_168_1 = zmm0.q
                        zmm15 = zmm0
                        zmm14 = _mm_shuffle_ps(zmm0, zmm0, 0x55)
                        zmm0.q = fconvert.d(zmm9.d)
                        zmm3.d = zmm5_2.d f* zmm4_2
                        zmm1.d = zmm11.d f* zmm4_2
                        zmm6.d = rax_18.d f- zmm3.d
                        zmm2.d = zmm2.d f* zmm4_2
                        zmm15.d = zmm15.d f- zmm1.d
                        zmm14.d = zmm14.d f- zmm2.d
                        int32_t var_230_1 = zmm6.d
                        int32_t rax_19
                        rax_19.b = _mm_cvtpd_ps(_mm_and_ps(zmm0, zmm12)).d f> zmm13.d
                        
                        if (rax_19 != 0)
                        label_1429c690c:
                            zmm0.d = zmm7.d f* zmm7.d
                            zmm2.o = zmm8
                            zmm1.d = zmm9.d f* zmm9.d
                            zmm2.d = zmm2.d f* zmm8.d
                            zmm0.d = zmm0.d f+ zmm1.d
                            zmm0.d = zmm0.d f+ zmm2.d
                            zmm1.d = 1f f/ sqrtf(zmm0.d).d
                            zmm9.d = zmm9.d f* zmm1.d
                            zmm7.d = zmm7.d f* zmm1.d
                            zmm8.d = zmm8.d f* zmm1.d
                            var_238_1 = zmm9.d
                            var_1f0_1 = zmm7.d
                            var_234_1 = zmm8.d
                        else
                            zmm0.q = fconvert.d(zmm7.d)
                            rax_19.b = _mm_cvtpd_ps(_mm_and_ps(zmm0, zmm12)).d f> zmm13.d
                            
                            if (rax_19 != 0)
                                goto label_1429c690c
                            
                            rax_19.b =
                                _mm_cvtpd_ps(_mm_and_ps(_mm_cvtps_pd(zmm8.q), zmm12)).d f> zmm13.d
                            
                            if (rax_19 != 0)
                                goto label_1429c690c
                        
                        zmm0.q = fconvert.d(zmm15.d)
                        int32_t rax_20
                        rax_20.b = _mm_cvtpd_ps(_mm_and_ps(zmm0, zmm12)).d f> zmm13.d
                        
                        if (rax_20 != 0)
                        label_1429c69ae:
                            zmm0.d = zmm14.d f* zmm14.d
                            zmm2.o = zmm6
                            zmm1.d = zmm15.d f* zmm15.d
                            zmm2.d = zmm2.d f* zmm6.d
                            zmm0.d = zmm0.d f+ zmm1.d
                            zmm0.d = zmm0.d f+ zmm2.d
                            zmm1.d = 1f f/ sqrtf(zmm0.d).d
                            zmm6.d = zmm6.d f* zmm1.d
                            zmm15.d = zmm15.d f* zmm1.d
                            var_230_1 = zmm6.d
                            zmm14.d = zmm14.d f* zmm1.d
                        else
                            zmm0.q = fconvert.d(zmm14.d)
                            rax_20.b = _mm_cvtpd_ps(_mm_and_ps(zmm0, zmm12)).d f> zmm13.d
                            
                            if (rax_20 != 0)
                                goto label_1429c69ae
                            
                            rax_20.b =
                                _mm_cvtpd_ps(_mm_and_ps(_mm_cvtps_pd(zmm6.q), zmm12)).d f> zmm13.d
                            
                            if (rax_20 != 0)
                                goto label_1429c69ae
                        
                        int32_t rax_21 = *(rbx_2 + arg2 + 0x48)
                        int32_t i_2 = 0
                        int32_t rbx_3 = 0
                        
                        if (*r13 s> 0)
                            int32_t* rsi_2 = r14_1
                            void* r12_1 = nullptr
                            
                            do
                                zmm6 = var_e8
                                zmm5_2 = var_f0
                                int64_t rax_23 = sx.q(*(r12_1 + *(r13 + 8)))
                                int64_t rcx_15 = rax_23 * 0x58
                                int32_t var_208_1 = rax_23.d
                                zmm2.o = zx.o(*(rcx_15 + arg2 + 0x28))
                                int32_t rax_24 = *(rcx_15 + arg2 + 0x48)
                                zmm0 = zmm2.o
                                zmm1.d = zmm11.d f* zmm2.d
                                int32_t rax_25 = *(rcx_15 + arg2 + 0x30)
                                zmm4_2 = zmm10.d f* _mm_shuffle_ps(zmm0, zmm0, 0x55).d
                                int64_t var_158_1 = (zmm2.o).q
                                zmm2.o = zmm10
                                zmm0.d = zmm6.d f* rax_25
                                int32_t rax_26 = *(rcx_15 + arg2 + 0x3c)
                                zmm4_2 = zmm4_2 f+ zmm1.d f+ zmm0.d
                                zmm0 = zx.o(*(rcx_15 + arg2 + 0x28))
                                uint64_t var_148_1 = zmm0.q
                                zmm1.d = zmm11.d f* zmm4_2
                                zmm2.d = zmm2.d f* zmm4_2
                                zmm3.d = zmm6.d f* zmm4_2
                                zmm11.d = zmm0.d f- zmm1.d
                                zmm7.d = _mm_shuffle_ps(zmm0, zmm0, 0x55).d f- zmm2.d
                                zmm2.o = zx.o(*(rcx_15 + arg2 + 0x34))
                                zmm1.d = zmm5_2.d f* zmm2.d
                                zmm10.d = rax_25.d f- zmm3.d
                                zmm3 = var_ec
                                zmm0 = zmm2.o
                                zmm4_2 = zmm3.d f* _mm_shuffle_ps(zmm0, zmm0, 0x55).d
                                zmm0.d = zmm6.d f* rax_26
                                int64_t var_138_1 = (zmm2.o).q
                                zmm2.o = zmm3
                                zmm3 = zmm6
                                zmm4_2 = zmm4_2 f+ zmm1.d f+ zmm0.d
                                zmm0 = zx.o(*(rcx_15 + arg2 + 0x34))
                                zmm8 = zmm0
                                uint64_t var_128_1 = zmm0.q
                                zmm6 = zmm0
                                zmm0.q = fconvert.d(zmm11.d)
                                zmm1.d = zmm5_2.d f* zmm4_2
                                zmm2.d = zmm2.d f* zmm4_2
                                zmm8.d = zmm8.d f- zmm1.d
                                zmm3.d = zmm3.d f* zmm4_2
                                zmm1 = _mm_cvtpd_ps(_mm_and_ps(zmm0, zmm12))
                                zmm9.d = rax_26.d f- zmm3.d
                                zmm6.d = _mm_shuffle_ps(zmm6, zmm6, 0x55).d f- zmm2.d
                                int32_t rax_27
                                rax_27.b = zmm1.d f> zmm13.d
                                
                                if (rax_27 != 0)
                                label_1429c6b95:
                                    zmm0.d = zmm7.d f* zmm7.d
                                    zmm2.o = zmm10
                                    zmm1.d = zmm11.d f* zmm11.d
                                    zmm2.d = zmm2.d f* zmm10.d
                                    zmm0.d = zmm0.d f+ zmm1.d
                                    zmm0.d = zmm0.d f+ zmm2.d
                                    zmm1.d = 1f f/ sqrtf(zmm0.d).d
                                    zmm11.d = zmm11.d f* zmm1.d
                                    zmm7.d = zmm7.d f* zmm1.d
                                    zmm10.d = zmm10.d f* zmm1.d
                                else
                                    zmm0.q = fconvert.d(zmm7.d)
                                    rax_27.b = _mm_cvtpd_ps(_mm_and_ps(zmm0, zmm12)).d f> zmm13.d
                                    
                                    if (rax_27 != 0)
                                        goto label_1429c6b95
                                    
                                    rax_27.b =
                                        _mm_cvtpd_ps(_mm_and_ps(_mm_cvtps_pd(zmm10.q), zmm12)).d
                                        f> zmm13.d
                                    
                                    if (rax_27 != 0)
                                        goto label_1429c6b95
                                
                                zmm0.q = fconvert.d(zmm8.d)
                                int32_t rax_28
                                rax_28.b = _mm_cvtpd_ps(_mm_and_ps(zmm0, zmm12)).d f> zmm13.d
                                
                                if (rax_28 != 0)
                                label_1429c6c23:
                                    zmm0.d = zmm6.d f* zmm6.d
                                    zmm2.o = zmm9
                                    zmm1.d = zmm8.d f* zmm8.d
                                    zmm2.d = zmm2.d f* zmm9.d
                                    zmm0.d = zmm0.d f+ zmm1.d
                                    zmm0.d = zmm0.d f+ zmm2.d
                                    zmm1.d = 1f f/ sqrtf(zmm0.d).d
                                    zmm8.d = zmm8.d f* zmm1.d
                                    zmm6.d = zmm6.d f* zmm1.d
                                    zmm9.d = zmm9.d f* zmm1.d
                                else
                                    zmm0.q = fconvert.d(zmm6.d)
                                    rax_28.b = _mm_cvtpd_ps(_mm_and_ps(zmm0, zmm12)).d f> zmm13.d
                                    
                                    if (rax_28 != 0)
                                        goto label_1429c6c23
                                    
                                    rax_28.b =
                                        _mm_cvtpd_ps(_mm_and_ps(_mm_cvtps_pd(zmm9.q), zmm12)).d
                                        f> zmm13.d
                                    
                                    if (rax_28 != 0)
                                        goto label_1429c6c23
                                
                                if ((((*(rcx_15 + arg2 + 0x4c)).b | (*(rbx_2 + arg2 + 0x4c)).b) & 4)
                                    != 0 || rax_21 == rax_24)
                                label_1429c6cc5:
                                    rbx_3 += 1
                                    *rsi_2 = var_208_1
                                    rsi_2 = &rsi_2[1]
                                else
                                    zmm7.d = zmm7.d f* var_1f0_1
                                    zmm11.d = zmm11.d f* var_238_1
                                    zmm10.d = zmm10.d f* var_234_1
                                    zmm0 = arg6
                                    zmm7.d = zmm7.d f+ zmm11.d
                                    zmm7.d = zmm7.d f+ zmm10.d
                                    
                                    if (not(zmm7.d f<= zmm0.d))
                                        zmm9.d = zmm9.d f* var_230_1
                                        zmm6.d = zmm6.d f* zmm14.d
                                        zmm8.d = zmm8.d f* zmm15.d
                                        zmm6.d = zmm6.d f+ zmm8.d
                                        zmm6.d = zmm6.d f+ zmm9.d
                                        
                                        if (not(zmm6.d f<= zmm0.d))
                                            goto label_1429c6cc5
                                
                                zmm10 = var_ec
                                i_2 += 1
                                zmm11 = var_f0
                                r12_1 += 4
                            while (i_2 s< *r13)
                            
                            r14_1 = rax_11
                            
                            if (rbx_3 s> 1)
                                sub_1429c8040(r14_1, 0, rbx_3 - 1, 0x26065ca, zmm2)
                            
                            i_12 = i_9
                        
                        int32_t i_3 = 0
                        int32_t rsi_3 = 0
                        int64_t rdi_1 = 0
                        
                        if (i_12 s> 0)
                            do
                                if (i_3 != 0)
                                    goto label_1429c6e52
                                
                                int32_t r10_1 = 0
                                int64_t r8_6 = 0
                                int32_t* r11_3 = &rax_10[rdi_1 * 4]
                                i_3 = 1
                                
                                if (rbx_3 != *r11_3)
                                    i_3 = 0
                                else if (rbx_3 s> 0)
                                    while (i_3 != 0)
                                        int32_t rdx_6 = *(*(r11_3 + 8) + (r8_6 << 2))
                                        int32_t rax_35 = r10_1 + 1
                                        int32_t temp4_1 = r14_1[r8_6]
                                        
                                        if (temp4_1 != rdx_6)
                                            rax_35 = r10_1
                                        
                                        i_3.b = temp4_1 == rdx_6
                                        r10_1 = rax_35
                                        int64_t rax_36 = r8_6 + 1
                                        
                                        if (temp4_1 != rdx_6)
                                            rax_36 = r8_6
                                        
                                        r8_6 = rax_36
                                        
                                        if (r10_1 s>= rbx_3)
                                            break
                                
                                int64_t rax_37 = rdi_1 + 1
                                
                                if (i_3 != 0)
                                    rax_37 = rdi_1
                                
                                rdi_1 = rax_37
                                int32_t rax_38 = rsi_3 + 1
                                
                                if (i_3 != 0)
                                    rax_38 = rsi_3
                                
                                rsi_3 = rax_38
                            while (rdi_1 s< i_12)
                        
                        void var_118
                        
                        if (i_12 s<= 0 || i_3 == 0)
                            int64_t _Size = sx.q(rbx_3) << 2
                            int64_t rax_39 = malloc(_Size)
                            
                            if (rax_39 == 0)
                                int64_t i_8 = i_9
                                
                                if (i_8 s> 0)
                                    void* rbx_7 = &rax_10[2]
                                    int64_t i_4
                                    
                                    do
                                        free(*rbx_7)
                                        rbx_7 += 0x10
                                        i_4 = i_8
                                        i_8 -= 1
                                    while (i_4 != 1)
                                
                                free(rax_10)
                                free(r14_1)
                                free(rax_9)
                                result = 0
                                break
                            
                            *var_200_1 = rbx_3
                            *(var_200_1 + 8) = rax_39
                            memcpy(rax_39, r14_1, _Size.d)
                            var_258 = r13[4]
                            var_260 = arg7
                            var_268 = arg2
                            int64_t* rax_42
                            rax_42, zmm2, zmm12, zmm13 = sub_1429c4c40(&var_118, r14_1, rbx_3, 
                                arg5, var_268, var_260, var_258)
                            uint128_t* rcx_21 = var_1d8_1
                            i_11 += 1
                            i_12 = i_9 + 1
                            var_200_1 = &var_200_1[4]
                            i_9 = i_12
                            *rcx_21 = *rax_42
                            rcx_21[1] = *(rax_42 + 0x10)
                            rcx_21[2].q = rax_42[4]
                            var_1d8_1 = rcx_21 + 0x28
                        
                    label_1429c6e52:
                        int64_t rcx_23 =
                            sx.q(zx.d(*(var_220_1 + rbx_2 + arg2 + 0x54)) + *(rbx_2 + arg2 + 0x50))
                            * 5
                        int64_t* rbx_4 = arg1 + (rcx_23 << 3)
                        int32_t rax_52
                        
                        if (*(arg1 + (rcx_23 << 3) + 0x20) != 1)
                            int64_t rax_53 = rdi_1 * 5
                            *rbx_4 = *(rax_9 + (rax_53 << 3))
                            *(rbx_4 + 0x10) = *(rax_9 + (rax_53 << 3) + 0x10)
                            zmm0 = zx.o(*(rax_9 + (rax_53 << 3) + 0x20))
                            rax_52 = 1
                        else
                            uint64_t* rax_51
                            rax_51, zmm2, zmm12, zmm13 =
                                sub_1429c3b00(&var_118, rbx_4, rax_9 + sx.q(rsi_3) * 0x28)
                            *rbx_4 = *rax_51
                            *(rbx_4 + 0x10) = *(rax_51 + 0x10)
                            zmm0 = zx.o(rax_51[4])
                            rax_52 = 2
                        
                        int32_t r8_11 = var_22c_1 + 1
                        rbx_4[4] = zmm0.q
                        rdx_3 = var_1c8_1 + 4
                        rbx_4[4].d = rax_52
                        *(rbx_4 + 0x24) = r13[5]
                        var_22c_1 = r8_11
                        var_1c8_1 = rdx_3
                        
                        if (r8_11 s>= *r13)
                            rsi_1 = rax_10
                            i_10 = i_11
                            rdx_2 = var_1f8_1
                            r8_2 = var_244_1
                            goto label_1429c6f05
                    
                    break
                
            label_1429c6f05:
                int64_t i_7 = sx.q(i_10)
                
                if (i_10 s> 0)
                    void* rbx_5 = &rsi_1[2]
                    int64_t i_5
                    
                    do
                        free(*rbx_5)
                        rbx_5 += 0x10
                        i_5 = i_7
                        i_7 -= 1
                    while (i_5 != 1)
                    i_10 = i_11
                    rdx_2 = var_1f8_1
                    r8_2 = var_244_1
                
                r8_2 += i_10
                rdx_2 += 1
                r13 = &r13[6]
                var_244_1 = r8_2
                var_1f8_1 = rdx_2
                
                if (rdx_2 s>= rdi)
                    goto label_1429c703c
                
                rcx_11 = rax_9

__security_check_cookie(rax_1 ^ &var_288)
return result
