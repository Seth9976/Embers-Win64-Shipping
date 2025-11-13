// 函数: sub_1429294f0
// 地址: 0x1429294f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x1b0)
void var_1e8
int64_t rax_1 = __security_cookie ^ &var_1e8
char* result_1 = nullptr
arg1[1] = 0
sub_1428a49e0()
char* result

if (*arg1 != 2)
label_1429298b0:
    int64_t rax_22 = *(arg1 + 0x18)
    result_1 = nullptr
    int32_t var_188 = 0
    
    if (rax_22 != 0)
        char* result_3 = (*(rax_22 + 8))(0, 0, 0, 0, &arg1[8], &var_188, arg2, arg3)
        result_1 = result_3
        
        if (result_3 == 0)
            (*(*(arg1 + 0x18) + 0x18))(&arg1[8])
            *(arg1 + 0x20) = 0
            *(arg1 + 0x18) = 0
    
    if (result_1 != 0)
    label_1429297ab:
        result = result_1
    else
        int32_t rax_24
        
        if (*arg1 != 2)
            int64_t rax_25 = *(arg1 + 0x18)
            int32_t rax_26
            
            if (rax_25 != 0)
                rax_26 = (*(rax_25 + 0x10))(*(arg1 + 0x20))
            
            if (rax_25 == 0 || rax_26 != 0)
                rax_24 = sub_142899cf0(*(arg1 + 0x10), 2, 0, 0)
                goto label_14292993e
            
        label_142929950:
            
            while (true)
                bool cond:1_1 = *arg1 != 1
                int32_t rdi_4 = -1
                int64_t* rcx_24 = *(arg1 + 0x10)
                int32_t var_1a4 = 0xffffffff
                int64_t var_1a0
                __builtin_memset(&var_1a0, 0, 0x18)
                int32_t var_1a8 = 0
                char* var_198
                void* var_190
                char* r8_8
                
                if (cond:1_1)
                    int64_t* var_180 = nullptr
                    
                    if (sub_1428ee610(rcx_24, &var_180) s< 0)
                        arg1[1] += 1
                    else
                        int32_t* rcx_27 = var_180
                        var_190 = *(rcx_27 + 8)
                        var_1a8 = *rcx_27
                        sub_1428a6780(rcx_27)
                    label_142929a7a:
                        r8_8 = var_198
                    label_142929aaa:
                        char* result_4 = sub_142929ee0(arg1, var_1a0, r8_8, var_190, sx.q(var_1a8), 
                            arg2, arg3, &var_1a4)
                        rdi_4 = var_1a4
                        result_1 = result_4
                        
                        if (result_4 == 0)
                            bool cond:7_1
                            
                            if (var_1a0 == 0)
                                cond:7_1 = rdi_4 != 1
                                int64_t var_1c8_5
                                
                                if (rdi_4 s<= 1)
                                label_142929acb:
                                    
                                    if (cond:7_1)
                                        goto label_142929b3d
                                    
                                    int32_t rax_35 = sub_1428a54c0()
                                    
                                    if (rax_35 == 0)
                                        var_1c8_5.d = 0x549
                                        sub_1428a5670(rax_35 + 0x2c, rax_35 + 0x77, rax_35 + 0x6e, 
                                            "crypto\store\loader_file.c", var_1c8_5.d)
                                        
                                        if (var_1a0 != 0)
                                            sub_1428a4880(3)
                                    
                                    arg1[1] += 1
                                else
                                    var_1c8_5.d = 0x541
                                    sub_1428a5670(0x2c, 0x77, 0x6b, "crypto\store\loader_file.c", 
                                        var_1c8_5.d)
                                label_142929b3d:
                                    
                                    if (rdi_4 s> 0)
                                        arg1[1] += 1
                            else
                                cond:7_1 = rdi_4 != 1
                                
                                if (rdi_4 s<= 1)
                                    goto label_142929acb
                                
                                arg1[1] += 1
                else
                    int64_t* r9_2 = &var_190
                    int64_t* r8_7 = &var_198
                    int64_t* rdx_12 = &var_1a0
                    int32_t rax_27
                    
                    if ((arg1[2].b & 1) == 0)
                        rax_27 = sub_1428ba240(rcx_24, rdx_12, r8_7, r9_2, &var_1a8)
                    else
                        int32_t* var_1c0
                        var_1c0.d = 3
                        rax_27 = sub_1428ba270(rcx_24, rdx_12, r8_7, r9_2, &var_1a8, var_1c0.d)
                    
                    if (rax_27 s<= 0)
                        arg1[1] += 1
                    else
                        r8_8 = var_198
                        int32_t i = 0
                        char* rdx_13 = r8_8
                        
                        if (*r8_8 != 0)
                            while (i u< 0x80000000)
                                rdx_13 = &rdx_13[1]
                                i += 1
                                
                                if (*rdx_13 == 0)
                                    break
                        
                        if ((i & 0x7fffffff) u<= 0xa)
                            goto label_142929aaa
                        
                        void var_160
                        
                        if (sub_1428b9f10(r8_8, &var_160) == 0)
                            arg1[1] += 1
                        else
                            void* rdx_15 = var_190
                            int32_t* var_178
                            int32_t** var_1c8_4 = &var_178
                            var_178 = arg2
                            int64_t var_170_1 = arg3
                            void* const var_168_1 = &data_142fe1718
                            int32_t rax_30
                            rax_30, arg4 = sub_1428b9c50(&var_160, rdx_15, &var_1a8, sub_142929e80, 
                                arg4, var_1c8_4)
                            
                            if (rax_30 != 0)
                                goto label_142929a7a
                            
                            arg1[1] += 1
                int64_t rcx_30 = var_1a0
                
                if ((arg1[2].b & 1) == 0)
                    sub_1428a6780(rcx_30)
                else
                    sub_1428a7140(rcx_30, 0, "crypto\store\loader_file.c", 0x447)
                
                char* rcx_31 = var_198
                
                if ((arg1[2].b & 1) == 0)
                    sub_1428a6780(rcx_31)
                else
                    sub_1428a7140(rcx_31, 0, "crypto\store\loader_file.c", 0x447)
                
                void* rcx_32 = var_190
                
                if ((arg1[2].b & 1) == 0)
                    sub_1428a6780(rcx_32)
                else
                    sub_1428a7140(rcx_32, sx.q(var_1a8), "crypto\store\loader_file.c", 0x447)
                
                if (rdi_4 != 0)
                    if (rdi_4 s> 1)
                        goto label_142929842
                    
                    goto label_142929c2e
                
                int32_t rax_36
                
                if (*arg1 != 2)
                    int64_t rax_37 = *(arg1 + 0x18)
                    int32_t rax_38
                    
                    if (rax_37 != 0)
                        rax_38 = (*(rax_37 + 0x10))(*(arg1 + 0x20))
                    
                    if (rax_37 == 0 || rax_38 != 0)
                        rax_36 = sub_142899cf0(*(arg1 + 0x10), 2, 0, 0)
                        goto label_142929c15
                    
                label_142929c19:
                    
                    if (arg1[1] s<= 0)
                        continue
                else
                    rax_36 = arg1[6]
                label_142929c15:
                    
                    if (rax_36 == 0)
                        goto label_142929c19
            label_142929c2e:
                
                if (result_1 == 0)
                    goto label_1429297ab_1
                
                if (arg1[0x12] == 0)
                    goto label_1429297ab_1
                
                int32_t rax_39 = sub_1406938b0(result_1)
                
                if (arg1[0x12] == rax_39)
                    break
                
                sub_1429691b0(result_1)
                goto label_1429298b0
            
            goto label_1429297ab_1
        
        rax_24 = arg1[6]
    label_14292993e:
        
        if (rax_24 == 0)
            goto label_142929950
        
    label_142929842:
        result = nullptr
else
    while (true)
        char* _Str1 = *(arg1 + 0x38)
        char* rsi_1 = nullptr
        
        if (_Str1 == 0)
            if (arg1[6] != 0)
                goto label_142929842
            
            int32_t* rax_20 = _errno()
            *rax_20 = arg1[0x10]
            arg1[1] += 1
            char var_148[0x60]
            sub_1428a7110(*_errno(), &var_148, 0x100)
            sub_1428a5670(0x2c, 0x77, 2, "crypto\store\loader_file.c", 0x4f2)
            sub_1428a4880(1)
            result = nullptr
            goto label_1429297b8
        
        if (*_Str1 != 0x2e)
            if (arg1[0xa].b == 0)
            label_142929621:
                char* rcx_5 = *(arg1 + 0x20)
                char* r15_1 = *(arg1 + 0x38)
                char r9_1 = *rcx_5
                char rax_7 = r9_1
                
                if (r9_1 != 0)
                    char* rdx_1 = rcx_5
                    int32_t i_1 = 0
                    
                    while (i_1 u< 0x80000000)
                        rdx_1 = &rdx_1[1]
                        i_1 += 1
                        
                        if (*rdx_1 == 0)
                            break
                    
                    rax_7 = *(zx.q((i_1 & 0x7fffffff) - 1) + rcx_5)
                
                int32_t rdx_2
                
                if (rax_7 != 0x5c)
                    rdx_2.b = rax_7 == 0x2f
                else
                    rdx_2 = 1
                
                int16_t* const r14_1 = &data_142d63b88
                
                if (rdx_2 != 0)
                    r14_1 = &data_1437020ab
                
                int32_t i_2 = 0
                
                if (r9_1 != 0)
                    while (i_2 u< 0x80000000)
                        rcx_5 = &rcx_5[1]
                        i_2 += 1
                        
                        if (*rcx_5 == 0)
                            break
                
                int32_t i_3 = 0
                int16_t* const rax_10 = r14_1
                
                if (*r14_1 != 0)
                    while (i_3 u< 0x80000000)
                        rax_10 += 1
                        i_3 += 1
                        
                        if (*rax_10 == 0)
                            break
                
                int32_t i_4 = 0
                char* rdx_3 = r15_1
                
                if (*r15_1 != 0)
                    while (i_4 u< 0x80000000)
                        rdx_3 = &rdx_3[1]
                        i_4 += 1
                        
                        if (*rdx_3 == 0)
                            break
                
                int64_t rdi_2 =
                    sx.q((i_4 & 0x7fffffff) + (i_3 & 0x7fffffff) + (i_2 & 0x7fffffff) + 1)
                char* rax_14 = sub_1428a6a70(rdi_2)
                rsi_1 = rax_14
                
                if (rax_14 == 0)
                    sub_1428a5670(0x2c, 0x7e, 0x41, "crypto\store\loader_file.c", 0x494)
                    result = nullptr
                    goto label_1429297b8
                
                sub_1428a7010(rax_14, *(arg1 + 0x20), rdi_2)
                sub_1428a7010(rsi_1, r14_1, rdi_2)
                sub_1428a7010(rsi_1, r15_1, rdi_2)
            else
                int32_t rax_2 = arg1[0x12]
                
                if ((rax_2 & 0xfffffffa) == 0 && rax_2 != 1 && _strnicmp(_Str1, &arg1[0xa], 8) == 0
                        && _Str1[8] == 0x2e)
                    char rcx_1 = _Str1[9]
                    void* rdi_1 = &_Str1[9]
                    int32_t rax_4 = arg1[0x12]
                    
                    if (rcx_1 == 0x72)
                        rdi_1 += 1
                        
                        if (rax_4 == 0 || rax_4 == 5)
                            rcx_1 = *rdi_1
                        label_1429295e5:
                            
                            if (sub_1428e4710(sx.d(rcx_1), 4) != 0)
                                if (sub_1428e4710(sx.d(*rdi_1), 4) != 0)
                                    int32_t i_5
                                    
                                    do
                                        int32_t rcx_4 = sx.d(*(rdi_1 + 1))
                                        rdi_1 += 1
                                        i_5 = sub_1428e4710(rcx_4, 4)
                                    while (i_5 != 0)
                                
                                if (*rdi_1 == 0)
                                    goto label_142929621
                    else if (rax_4 != 5)
                        goto label_1429295e5
        
        *(arg1 + 0x38) = sub_1428b6440(&arg1[4], *(arg1 + 0x20))
        int32_t rcx_12 = *_errno()
        arg1[0x10] = rcx_12
        
        if (*(arg1 + 0x38) == 0 && rcx_12 == 0)
            arg1[6] = 1
        
        if (rsi_1 != 0)
            int32_t* result_2 = sub_142969360(rsi_1)
            result_1 = result_2
            
            if (result_2 != 0)
                break
            
            sub_1428a6780(rsi_1)
            sub_1428a5670(0x2c, (&result_1[0x77]).d, 0x2c, "crypto\store\loader_file.c", 0x50c)
            goto label_142929842
        
        int32_t rax_17
        
        if (*arg1 != 2)
            int64_t rax_18 = *(arg1 + 0x18)
            
            if (rax_18 != 0 && (*(rax_18 + 0x10))(*(arg1 + 0x20)) == 0)
                continue
            
            rax_17 = sub_142899cf0(*(arg1 + 0x10), 2, 0, 0)
        else
            rax_17 = arg1[6]
        
        if (rax_17 != 0)
            break
    
label_1429297ab_1:
    result = result_1

label_1429297b8:
__security_check_cookie(rax_1 ^ &var_1e8)
return result
