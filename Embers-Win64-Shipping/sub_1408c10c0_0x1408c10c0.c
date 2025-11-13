// 函数: sub_1408c10c0
// 地址: 0x1408c10c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1d8
int64_t result = __security_cookie ^ &var_1d8
int64_t result_2 = result
int32_t* r12 = arg4
int32_t var_190 = 0
uint128_t zmm8 = arg3
void* rsi = arg2

if (arg2 != 0)
    uint128_t zmm1
    zmm1.d = (*arg4).d f* 0.5f
    arg3 = *(arg4 + 0x1c)
    uint128_t zmm0
    zmm0.d = zmm1.d f* *(arg4 + 0x1c)
    zmm1.d = zmm1.d f* arg4[2].d
    float zmm7[0x4] = *(arg4 + 4)
    zmm7[0] = zmm7[0] * 0.5f
    uint128_t var_120_1 = arg3
    zmm7[0] = zmm7[0] f* *(arg4 + 0x24)
    zmm7[0] = zmm7[0] f* *(arg4 + 0x28)
    zmm7[0] = zmm7[0] f+ zmm0.d
    uint64_t var_110_1 = *(arg4 + 0x2c)
    zmm7[0] = zmm7[0] f+ zmm1.d
    zmm1 = arg3
    arg3 = _mm_shuffle_ps(arg3, arg3, 0x55)
    zmm7[0] = zmm7[0] f+ *(arg4 + 0x2c)
    zmm7[0] = zmm7[0] f+ arg4[3].d
    int128_t zmm0_1 = sub_140a3f4a0(arg3, zmm1)
    float zmm0_2
    float zmm8_1[0x4]
    int64_t zmm9_1
    int32_t zmm10_1
    zmm0_2, result, zmm8_1, zmm9_1, zmm10_1 = sub_1408c4a00(rsi, zmm8, r12, 
        _mm_unpacklo_ps(zmm7, zmm7[0].q)[0].q, zmm0_1.d, zmm0_1.d, 0x3f800000, 0f)
    void* rcx_1 = arg1
    int32_t zmm6_1 = *(rsi + 0x58)
    float zmm7_1 = *(rsi + 0x54)
    int32_t i_1 = 0
    
    if (*(rcx_1 + 0x18) s> 0)
        result = 0
        int64_t result_1 = 0
        int32_t i
        
        do
            int64_t* rbx_3 = result * 0x50 + *(rcx_1 + 0x10)
            sub_1408be510(rbx_3, &var_190, rsi)
            int64_t rax_1 = sx.q(var_190)
            
            if (rax_1.d != 0xffffffff)
                void* rcx_3 = *rbx_3 + rax_1 * 0x18
                int64_t* rax_3 = rcx_3 + 8
                
                if (rcx_3 == 0)
                    rax_3 = nullptr
                
                if (rax_3 != 0)
                    int64_t* r14_1 = *rax_3
                    
                    if (r14_1 != 0)
                        int32_t rsi_2 = r14_1[3].d - *(r14_1 + 0x14)
                        
                        if (rsi_2 s> 0xc8)
                            int64_t** var_e8_1 = nullptr
                            int32_t var_dc_1 = 4
                            int64_t** r9_3 = nullptr
                            int32_t j_10 = (rsi_2 - 0xc8) s/ 0x64
                            int32_t j_9 = j_10 + 1
                            
                            if ((j_10 + 2) * 0x64 s>= rsi_2)
                                j_9 = j_10
                            
                            void var_108
                            
                            if (j_9 s> 4)
                                sub_14083a490(&var_108, 0)
                                r9_3 = var_e8_1
                            
                            int64_t** rcx_9 = &var_108
                            
                            if (r9_3 != 0)
                                rcx_9 = r9_3
                            
                            memset(rcx_9, 0, sx.q(j_9) << 3)
                            float var_150_1 = zmm8_1[0]
                            void* var_158 = &var_108
                            int32_t var_138_1 = zmm6_1
                            int64_t (* var_168)(int64_t* arg1, int32_t* arg2) = sub_1408bc4a0
                            float var_134_1 = zmm7_1
                            void** var_160_1 = &var_158
                            int32_t* var_148_1 = r12
                            int64_t* var_140_1 = r14_1
                            float zmm0_3
                            int32_t zmm6_2
                            zmm0_3, zmm6_2 = sub_14077b750(j_9, &var_168, 0)
                            
                            for (int32_t j = 0; j s< 0xc8; j += 1)
                                void* rax_18
                                
                                if (j s>= r14_1[3].d - *(r14_1 + 0x14))
                                label_1408c1402:
                                    rax_18 = nullptr
                                else
                                    int64_t rax_16 = sx.q(r14_1[1].d)
                                    int32_t j_4 = j
                                    int64_t r9_4 = 0
                                    
                                    if (rax_16.d s<= 0)
                                    label_1408c1402_1:
                                        rax_18 = nullptr
                                    else
                                        int64_t* r8_7 = *r14_1
                                        void* rcx_11
                                        
                                        while (true)
                                            rcx_11 = *r8_7
                                            
                                            if (rcx_11 != 0)
                                                int32_t rax_17 = *(rcx_11 + 8)
                                                
                                                if (j_4 s< rax_17)
                                                    break
                                                
                                                j_4 -= rax_17
                                            
                                            r9_4 += 1
                                            r8_7 = &r8_7[1]
                                            
                                            if (r9_4 s>= rax_16)
                                                goto label_1408c1402_2
                                        
                                        if (j_4 s< 0)
                                        label_1408c1402_2:
                                            rax_18 = nullptr
                                        else
                                            rax_18 = sx.q(j_4) * 0x2a8 + *rcx_11
                                
                                zmm0_3, zmm6_2, zmm7_1, zmm8_1, zmm9_1, zmm10_1 = sub_1408c4a00(
                                    rax_18, zmm8_1, r12, zmm9_1, zmm0_3, zmm10_1, zmm6_2, zmm7_1)
                            
                            void** lpTlsValue_1 = TlsGetValue(data_143cf0950)
                            void** lpTlsValue = lpTlsValue_1
                            
                            if (lpTlsValue_1 == 0)
                                void** lpTlsValue_2 = j_sub_140a82f30(zx.q((&lpTlsValue_1[3]).d))
                                lpTlsValue = lpTlsValue_2
                                
                                if (lpTlsValue_2 == 0)
                                    lpTlsValue = nullptr
                                else
                                    __builtin_memset(lpTlsValue, 0, 0x14)
                                
                                TlsSetValue(data_143cf0950, lpTlsValue)
                            
                            void*** rsi_3 = lpTlsValue[1]
                            int32_t rcx_17
                            
                            if (rsi_3 != 0)
                                rcx_17 = lpTlsValue[2].d
                            else
                                void* rax_21 = *lpTlsValue
                                
                                if (rax_21 == 0)
                                    int64_t rax_22 = sub_14059e7c0(&data_143cf0958)
                                    lpTlsValue[1] = rax_22
                                    
                                    if (rax_22 == 0)
                                        int64_t* rax_23 = sub_140a82f70(0x2000, 0)
                                        lpTlsValue[1] = rax_23
                                        int64_t j_5 = 0x1f
                                        int64_t* rcx_16
                                        int64_t j_1
                                        
                                        do
                                            rcx_16 = &rax_23[0x20]
                                            *rax_23 = rcx_16
                                            rax_23 = rcx_16
                                            j_1 = j_5
                                            j_5 -= 1
                                        while (j_1 != 1)
                                        *rcx_16 = j_5
                                else
                                    lpTlsValue[1] = rax_21
                                    *lpTlsValue = rsi_3
                                
                                rsi_3 = lpTlsValue[1]
                                rcx_17 = 0x20
                                lpTlsValue[2].d = 0x20
                            
                            lpTlsValue[1] = *rsi_3
                            lpTlsValue[2].d = rcx_17 - 1
                            int64_t* var_170
                            int64_t** rax_26 = sub_140a228d0(&var_170)
                            int64_t* rcx_19 = *rax_26
                            *rax_26 = nullptr
                            *rsi_3 = &data_142d40498
                            rsi_3[1].d = 0xff
                            rsi_3[3] = rcx_19
                            int64_t* rcx_20 = var_170
                            *(rsi_3 + 0xc) = j_9 + 1
                            *rsi_3 = &data_142e04a50
                            *(rsi_3 + 0x14) = 0
                            
                            if (rcx_20 != 0)
                                rcx_20[9].d -= 1
                                
                                if (rcx_20[9].d == 1)
                                    sub_140a2f6e0(rcx_20)
                            
                            rsi_3[2].d = 0xff
                            int64_t* rbx_5 = rsi_3[3]
                            
                            if (rbx_5 != 0)
                                rbx_5[9].d += 1
                            
                            zmm0_2, zmm6_1 = sub_1408c3b70(rsi_3, &var_108, 2, 1)
                            int64_t* rax_30 = sub_140a242a0()
                            int64_t** var_b8_1 = nullptr
                            int32_t var_ac_1 = 4
                            int32_t j_8 = 1
                            int64_t* var_d8 = rbx_5
                            
                            if (rbx_5 != 0)
                                rbx_5[9].d += 1
                            
                            int64_t r9_7 = *rax_30
                            (*(r9_7 + 0x48))(rax_30, &var_d8, 0x102, r9_7)
                            int64_t** rcx_24 = var_b8_1
                            int64_t** rsi_4 = &var_d8
                            int32_t j_7 = j_8
                            
                            if (rcx_24 != 0)
                                rsi_4 = rcx_24
                            
                            if (j_7 != 0)
                                int32_t j_2
                                
                                do
                                    int64_t* rcx_25 = *rsi_4
                                    
                                    if (rcx_25 != 0)
                                        rcx_25[9].d -= 1
                                        
                                        if (rcx_25[9].d == 1)
                                            zmm0_2, zmm6_1 = sub_140a2f6e0(rcx_25)
                                    
                                    rsi_4 = &rsi_4[1]
                                    j_2 = j_7
                                    j_7 -= 1
                                while (j_2 != 1)
                                rcx_24 = var_b8_1
                            
                            if (rcx_24 != 0)
                                zmm0_2 = sub_140a74f90(rcx_24)
                            
                            if (rbx_5 != 0)
                                rbx_5[9].d -= 1
                                
                                if (rbx_5[9].d == 1)
                                    zmm0_2, zmm6_1 = sub_140a2f6e0(rbx_5)
                            
                            int64_t** rcx_28 = var_e8_1
                            int64_t** rbx_6 = &var_108
                            int32_t j_6 = j_9
                            
                            if (rcx_28 != 0)
                                rbx_6 = rcx_28
                            
                            if (j_6 != 0)
                                int32_t j_3
                                
                                do
                                    int64_t* rcx_27 = *rbx_6
                                    
                                    if (rcx_27 != 0)
                                        rcx_27[9].d -= 1
                                        
                                        if (rcx_27[9].d == 1)
                                            zmm0_2, zmm6_1 = sub_140a2f6e0(rcx_27)
                                    
                                    rbx_6 = &rbx_6[1]
                                    j_3 = j_6
                                    j_6 -= 1
                                while (j_3 != 1)
                                rcx_28 = var_e8_1
                            
                            if (rcx_28 != 0)
                                zmm0_2 = sub_140a74f90(rcx_28)
                        else
                            int32_t rbx_4 = 0
                            
                            if (rsi_2 s> 0)
                                do
                                    void* rax_8
                                    
                                    if (rbx_4 s>= r14_1[3].d - *(r14_1 + 0x14))
                                    label_1408c12d0:
                                        rax_8 = nullptr
                                    else
                                        int64_t rax_6 = sx.q(r14_1[1].d)
                                        int32_t rdx_2 = rbx_4
                                        int64_t r9_1 = 0
                                        
                                        if (rax_6.d s<= 0)
                                        label_1408c12d0_1:
                                            rax_8 = nullptr
                                        else
                                            int64_t* r8_3 = *r14_1
                                            void* rcx_4
                                            
                                            while (true)
                                                rcx_4 = *r8_3
                                                
                                                if (rcx_4 != 0)
                                                    int32_t rax_7 = *(rcx_4 + 8)
                                                    
                                                    if (rdx_2 s< rax_7)
                                                        break
                                                    
                                                    rdx_2 -= rax_7
                                                
                                                r9_1 += 1
                                                r8_3 = &r8_3[1]
                                                
                                                if (r9_1 s>= rax_6)
                                                    goto label_1408c12d0_2
                                            
                                            if (rdx_2 s< 0)
                                            label_1408c12d0_2:
                                                rax_8 = nullptr
                                            else
                                                rax_8 = sx.q(rdx_2) * 0x2a8 + *rcx_4
                                    
                                    zmm0_2, zmm6_1, zmm7_1, zmm8_1, zmm9_1, zmm10_1 = sub_1408c4a00(
                                        rax_8, zmm8_1, r12, zmm9_1, zmm0_2, zmm10_1, zmm6_1, zmm7_1)
                                    rbx_4 += 1
                                while (rbx_4 s< rsi_2)
                        
                        rsi = arg2
            
            i = i_1 + 1
            result = result_1 + 1
            i_1 = i
            result_1 = result
            rcx_1 = arg1
        while (i s< *(arg1 + 0x18))

__security_check_cookie(result_2 ^ &var_1d8)
return result
