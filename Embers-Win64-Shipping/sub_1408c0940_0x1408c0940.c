// 函数: sub_1408c0940
// 地址: 0x1408c0940
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_158
int64_t result = __security_cookie ^ &var_158
int64_t result_2 = result
int32_t* r15 = arg5
int32_t* var_110 = r15
void* rsi = arg2
int32_t var_134 = 0

if (arg2 != 0)
    result = sub_1408bbc30(rsi, arg3, arg4, r15)
    void* rcx_1 = arg1
    int32_t i_1 = 0
    
    if (*(rcx_1 + 0x18) s> 0)
        result = 0
        int64_t* var_100
        int64_t* rdi_1 = var_100
        int64_t result_1 = 0
        int32_t i
        
        do
            int64_t* rbx_3 = result * 0x50 + *(rcx_1 + 0x10)
            int32_t var_120
            sub_1408be510(rbx_3, &var_120, rsi)
            int64_t rax_1 = sx.q(var_120)
            
            if (rax_1.d != 0xffffffff)
                void* rcx_3 = *rbx_3 + rax_1 * 0x18
                int64_t* rax_3 = rcx_3 + 8
                
                if (rcx_3 == 0)
                    rax_3 = nullptr
                
                if (rax_3 != 0)
                    int64_t* r14_1 = *rax_3
                    
                    if (r14_1 != 0)
                        int32_t rsi_2 = r14_1[3].d - *(r14_1 + 0x14)
                        
                        if (rsi_2 s> 0x3e8)
                            void* r9_3 = nullptr
                            void* var_90_1 = nullptr
                            int32_t var_84_1 = 4
                            int32_t j_10 = (rsi_2 - 0x3e8) s/ 0x1f4
                            int32_t j_9 = j_10 + 1
                            
                            if ((j_10 + 2) * 0x1f4 s>= rsi_2)
                                j_9 = j_10
                            
                            void var_b0
                            
                            if (j_9 s> 4)
                                sub_14083a490(&var_b0, 0)
                                r9_3 = var_90_1
                            
                            void* rcx_9 = &var_b0
                            
                            if (r9_3 != 0)
                                rcx_9 = r9_3
                            
                            memset(rcx_9, 0, sx.q(j_9) << 3)
                            void* var_d8_1 = arg3
                            void* var_e0 = &var_b0
                            void* var_d0_1 = arg4
                            int64_t (* var_f0)(int64_t* arg1, int32_t* arg2) = sub_1408bc490
                            int32_t* var_c8_1 = r15
                            void** var_e8_1 = &var_e0
                            int64_t* var_c0_1 = r14_1
                            sub_14077b750(j_9, &var_f0, 0)
                            
                            for (int32_t j = 0; j s< 0x3e8; j += 1)
                                void* const rcx_12
                                
                                if (j s>= r14_1[3].d - *(r14_1 + 0x14))
                                label_1408c0bbd:
                                    rcx_12 = nullptr
                                else
                                    int64_t rax_16 = sx.q(r14_1[1].d)
                                    int32_t j_4 = j
                                    int64_t r9_4 = 0
                                    
                                    if (rax_16.d s<= 0)
                                    label_1408c0bbd_1:
                                        rcx_12 = nullptr
                                    else
                                        int64_t* r8_6 = *r14_1
                                        void* rax_17
                                        
                                        while (true)
                                            rax_17 = *r8_6
                                            
                                            if (rax_17 != 0)
                                                int32_t rcx_11 = *(rax_17 + 8)
                                                
                                                if (j_4 s< rcx_11)
                                                    break
                                                
                                                j_4 -= rcx_11
                                            
                                            r9_4 += 1
                                            r8_6 = &r8_6[1]
                                            
                                            if (r9_4 s>= rax_16)
                                                goto label_1408c0bbd_2
                                        
                                        if (j_4 s< 0)
                                        label_1408c0bbd_2:
                                            rcx_12 = nullptr
                                        else
                                            rcx_12 = sx.q(j_4) * 0x2a8 + *rax_17
                                
                                sub_1408bbc30(rcx_12, arg3, arg4, r15)
                            
                            int64_t* lpTlsValue_1 = TlsGetValue(data_143cf0950)
                            int64_t* lpTlsValue = lpTlsValue_1
                            
                            if (lpTlsValue_1 == 0)
                                int64_t* lpTlsValue_2 = j_sub_140a82f30(zx.q((&lpTlsValue_1[3]).d))
                                lpTlsValue = lpTlsValue_2
                                
                                if (lpTlsValue_2 == 0)
                                    lpTlsValue = nullptr
                                else
                                    __builtin_memset(lpTlsValue_2, 0, 0x14)
                                
                                TlsSetValue(data_143cf0950, lpTlsValue)
                            
                            int64_t* rsi_3 = lpTlsValue[1]
                            int32_t rcx_19
                            
                            if (rsi_3 != 0)
                                rcx_19 = lpTlsValue[2].d
                            else
                                int64_t rax_18 = *lpTlsValue
                                
                                if (rax_18 == 0)
                                    int64_t rax_19 = sub_14059e7c0(&data_143cf0958)
                                    lpTlsValue[1] = rax_19
                                    
                                    if (rax_19 == 0)
                                        int64_t* rax_20 = sub_140a82f70(0x2000, 0)
                                        lpTlsValue[1] = rax_20
                                        int64_t j_5 = 0x1f
                                        int64_t* rcx_18
                                        int64_t j_1
                                        
                                        do
                                            rcx_18 = &rax_20[0x20]
                                            *rax_20 = rcx_18
                                            rax_20 = rcx_18
                                            j_1 = j_5
                                            j_5 -= 1
                                        while (j_1 != 1)
                                        *rcx_18 = 0
                                else
                                    lpTlsValue[1] = rax_18
                                    *lpTlsValue = 0
                                
                                rsi_3 = lpTlsValue[1]
                                rcx_19 = 0x20
                                lpTlsValue[2].d = 0x20
                            
                            lpTlsValue[1] = *rsi_3
                            lpTlsValue[2].d = rcx_19 - 1
                            int64_t* var_f8
                            int64_t** rax_23 = sub_140a228d0(&var_f8)
                            int32_t rbx_7 = (var_134 | 2) & 0xfffffffd
                            var_134 = rbx_7
                            int64_t* rcx_21 = *rax_23
                            *rax_23 = nullptr
                            *rsi_3 = &data_142d40498
                            rsi_3[1].d = 0xff
                            rsi_3[3] = rcx_21
                            int64_t* rcx_22 = var_f8
                            *(rsi_3 + 0xc) = j_9 + 1
                            *rsi_3 = &data_142e04a50
                            *(rsi_3 + 0x14) = 0
                            
                            if (rcx_22 != 0)
                                rcx_22[9].d -= 1
                                
                                if (rcx_22[9].d == 1)
                                    sub_140a2f6e0(rcx_22)
                            
                            if ((rbx_7.b & 1) != 0)
                                var_134 = rbx_7 & 0xfffffffe
                                
                                if (rdi_1 != 0)
                                    rdi_1[9].d -= 1
                                    
                                    if (rdi_1[9].d == 1)
                                        sub_140a2f6e0(rdi_1)
                            
                            rsi_3[2].d = 0xff
                            int64_t* rbx_9 = rsi_3[3]
                            
                            if (rbx_9 != 0)
                                rbx_9[9].d += 1
                            
                            sub_1408c3b70(rsi_3, &var_b0, 2, 1)
                            int64_t* rax_27 = sub_140a242a0()
                            void** var_60_1 = nullptr
                            int32_t var_54_1 = 4
                            int32_t j_8 = 1
                            int64_t* var_80 = rbx_9
                            
                            if (rbx_9 != 0)
                                rbx_9[9].d += 1
                            
                            int64_t r9_7 = *rax_27
                            (*(r9_7 + 0x48))(rax_27, &var_80, 0x102, r9_7)
                            void** rcx_26 = var_60_1
                            void** rsi_4 = &var_80
                            int32_t j_7 = j_8
                            
                            if (rcx_26 != 0)
                                rsi_4 = rcx_26
                            
                            if (j_7 != 0)
                                int32_t j_2
                                
                                do
                                    int64_t* rcx_27 = *rsi_4
                                    
                                    if (rcx_27 != 0)
                                        rcx_27[9].d -= 1
                                        
                                        if (rcx_27[9].d == 1)
                                            sub_140a2f6e0(rcx_27)
                                    
                                    rsi_4 = &rsi_4[1]
                                    j_2 = j_7
                                    j_7 -= 1
                                while (j_2 != 1)
                                rcx_26 = var_60_1
                            
                            if (rcx_26 != 0)
                                sub_140a74f90(rcx_26)
                            
                            if (rbx_9 != 0)
                                rbx_9[9].d -= 1
                                
                                if (rbx_9[9].d == 1)
                                    sub_140a2f6e0(rbx_9)
                            
                            void* rcx_30 = var_90_1
                            void* rbx_10 = &var_b0
                            int32_t j_6 = j_9
                            
                            if (rcx_30 != 0)
                                rbx_10 = rcx_30
                            
                            if (j_6 != 0)
                                int32_t j_3
                                
                                do
                                    int64_t* rcx_29 = *rbx_10
                                    
                                    if (rcx_29 != 0)
                                        rcx_29[9].d -= 1
                                        
                                        if (rcx_29[9].d == 1)
                                            sub_140a2f6e0(rcx_29)
                                    
                                    rbx_10 += 8
                                    j_3 = j_6
                                    j_6 -= 1
                                while (j_3 != 1)
                                rcx_30 = var_90_1
                            
                            if (rcx_30 != 0)
                                sub_140a74f90(rcx_30)
                            
                            r15 = var_110
                        else
                            int32_t rbx_4 = 0
                            
                            if (rsi_2 s> 0)
                                do
                                    void* const rax_8
                                    
                                    if (rbx_4 s>= r14_1[3].d - *(r14_1 + 0x14))
                                    label_1408c0a9d:
                                        rax_8 = nullptr
                                    else
                                        int64_t rax_6 = sx.q(r14_1[1].d)
                                        int32_t rdx_3 = rbx_4
                                        int64_t r9_1 = 0
                                        
                                        if (rax_6.d s<= 0)
                                        label_1408c0a9d_1:
                                            rax_8 = nullptr
                                        else
                                            int64_t* r8_2 = *r14_1
                                            void* rcx_4
                                            
                                            while (true)
                                                rcx_4 = *r8_2
                                                
                                                if (rcx_4 != 0)
                                                    int32_t rax_7 = *(rcx_4 + 8)
                                                    
                                                    if (rdx_3 s< rax_7)
                                                        break
                                                    
                                                    rdx_3 -= rax_7
                                                
                                                r9_1 += 1
                                                r8_2 = &r8_2[1]
                                                
                                                if (r9_1 s>= rax_6)
                                                    goto label_1408c0a9d_2
                                            
                                            if (rdx_3 s< 0)
                                            label_1408c0a9d_2:
                                                rax_8 = nullptr
                                            else
                                                rax_8 = sx.q(rdx_3) * 0x2a8 + *rcx_4
                                    
                                    sub_1408bbc30(rax_8, arg3, arg4, r15)
                                    rbx_4 += 1
                                while (rbx_4 s< rsi_2)
                                
                                rdi_1 = var_100
                        
                        rsi = arg2
            
            i = i_1 + 1
            result = result_1 + 1
            i_1 = i
            result_1 = result
            rcx_1 = arg1
        while (i s< *(arg1 + 0x18))

__security_check_cookie(result_2 ^ &var_158)
return result
