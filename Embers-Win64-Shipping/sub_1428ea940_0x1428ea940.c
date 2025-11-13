// 函数: sub_1428ea940
// 地址: 0x1428ea940
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x60)
int32_t* arg_20 = nullptr
int32_t* r15 = arg3
void* result
int64_t* rdx
char* _Str_1
int32_t r9
result, rdx, _Str_1, r9 = sub_1428db530(&data_143514c50)

if (result == 0)
    sub_1428a5670((result + 0x22).d, 0xa3, 0x41, "crypto\x509v3\v3_asid.c", 0x200)
    return 0

int32_t r13 = 0
int32_t* rsi_2

if (sub_142898c70(r15) s<= 0)
label_1428ead93:
    int32_t rax_36
    int64_t* rdx_11
    int32_t* r8_4
    int32_t r9_2
    rax_36, rdx_11, r8_4, r9_2 = sub_1428eafa0(*result, rdx, _Str_1, r9)
    
    if (rax_36 != 0 && sub_1428eafa0(*(result + 8), rdx_11, r8_4, r9_2) != 0)
        return result
else
    while (true)
        int64_t* rax_2 = sub_142898ea0(r15, r13)
        int32_t rax_3
        rax_3, rdx, r9 = sub_1428ea5d0(rax_2[1], "AS")
        int32_t var_58_1
        int32_t r8
        int32_t rdi_1
        
        if (rax_3 != 0)
            int32_t rax_4
            rax_4, rdx, r9 = sub_1428ea5d0(rax_2[1], "RDI")
            
            if (rax_4 == 0)
                rdi_1 = rax_4 + 1
                goto label_1428eaa1f
            
            var_58_1 = 0x211
            r8 = 0x73
        else
            rdi_1 = 0
        label_1428eaa1f:
            _Str_1 = rax_2[2]
            
            for (int64_t i = 0; i != 8; )
                char rcx_5 = _Str_1[i]
                i += 1
                
                if (rcx_5 != *(i + 0x143514d87))
                    int32_t rax_12 = strspn(_Str_1, "0123456789")
                    int64_t r14_1 = sx.q(rax_12)
                    char* _Str = rax_2[2] + r14_1
                    int32_t var_58_3
                    
                    if (*_Str != 0)
                        int32_t rax_13 = strspn(_Str, " \t")
                        void* rcx_12 = rax_2[2]
                        int32_t rbp_1 = rax_13 + rax_12
                        int32_t var_58_4
                        int32_t r8_5
                        
                        if (*(sx.q(rbp_1) + rcx_12) != 0x2d)
                            var_58_4 = 0x22d
                            r8_5 = 0xa2
                        label_1428eae44:
                            sub_1428a5670(0x22, 0xa3, r8_5, "crypto\x509v3\v3_asid.c", var_58_4)
                            *rax_2
                            int64_t var_48_2 = rax_2[2]
                            char const* const var_50_2 = ",value:"
                            var_58_4.q = rax_2[1]
                            sub_1428a4880(6)
                            rsi_2 = nullptr
                            goto label_1428eab04
                        
                        int32_t rbx_2 = strspn(rcx_12 + sx.q(rbp_1) + 1, " \t") + rbp_1
                        int32_t rax_18 = strspn(rax_2[2] + sx.q(rbx_2) + 1, "0123456789")
                        char* rcx_16 = rax_2[2]
                        
                        if (rcx_16[sx.q(rax_18 + rbx_2) + 1] != 0)
                            var_58_4 = 0x236
                            r8_5 = 0xa3
                            goto label_1428eae44
                        
                        char* rax_20 = sub_1428a6ba0(rcx_16)
                        
                        if (rax_20 == 0)
                            var_58_3 = 0x247
                            goto label_1428eaec2
                        
                        rax_20[r14_1] = 0
                        arg_20 = sub_1428ea640(0, rax_20)
                        rsi_2 = sub_1428ea640(0, sx.q(rbx_2) + 1 + rax_20)
                        sub_1428a6780(rax_20)
                        int32_t* rcx_18 = arg_20
                        
                        if (rcx_18 == 0 || rsi_2 == 0)
                            sub_1428a5670(0x22, 0xa3, 0x41, "crypto\x509v3\v3_asid.c", 0x24f)
                            goto label_1428eab04
                        
                        if (sub_1428e47f0(rcx_18, rsi_2) s> 0)
                            sub_1428a5670(0x22, 0xa3, 0x74, "crypto\x509v3\v3_asid.c", 0x254)
                            goto label_1428eab04
                        
                        r15 = arg3
                        goto label_1428eac82
                    
                    if (sub_1428e9050(rax_2, &arg_20) == 0)
                        var_58_3 = 0x241
                    label_1428eaec2:
                        sub_1428a5670(0x22, 0xa3, 0x41, "crypto\x509v3\v3_asid.c", var_58_3)
                        rsi_2 = nullptr
                        goto label_1428eab04
                    
                    rsi_2 = nullptr
                label_1428eac82:
                    int32_t* rbp_2 = arg_20
                    void* result_2
                    
                    if (rdi_1 == 0)
                        result_2 = result
                    label_1428eaca1:
                        int32_t* rax_25 = *result_2
                        
                        if (rax_25 == 0)
                            int64_t rax_26 = sub_1428db530(&data_143514be0)
                            *result_2 = rax_26
                            
                            if (rax_26 != 0)
                                *(*result_2 + 8) = sub_142898b60(sub_1428eaef0)
                                int32_t* rax_28 = *result_2
                                
                                if (*(rax_28 + 8) != 0)
                                    *rax_28 = 1
                                label_1428eacfa:
                                    int32_t* rax_29 = sub_1428db530(&data_143514b70)
                                    
                                    if (rax_29 != 0)
                                        if (rsi_2 != 0)
                                            *rax_29 = 1
                                            int64_t* rax_30 = sub_1428db530(&data_143514b00)
                                            *(rax_29 + 8) = rax_30
                                            
                                            if (rax_30 != 0)
                                                sub_1428c3460(*rax_30)
                                                **(rax_29 + 8) = rbp_2
                                                sub_1428c3460(*(*(rax_29 + 8) + 8))
                                                *(*(rax_29 + 8) + 8) = rsi_2
                                                goto label_1428ead66
                                        else
                                            *rax_29 = 0
                                            *(rax_29 + 8) = rbp_2
                                        label_1428ead66:
                                            int32_t rax_34
                                            rax_34, rdx, _Str_1, r9 =
                                                sub_142898d50(*(*result_2 + 8), rax_29)
                                            
                                            if (rax_34 != 0)
                                                arg_20 = nullptr
                                                goto label_1428ead7e
                                        
                                        sub_1428c3d60(rax_29, &data_143514b70)
                        else if (*rax_25 != 0)
                            goto label_1428eacfa
                    else if (rdi_1 == 1)
                        result_2 = result + 8
                        goto label_1428eaca1
                    sub_1428a5670(0x22, 0xa3, 0x41, "crypto\x509v3\v3_asid.c", 0x259)
                    goto label_1428eab04
            
            int64_t* result_1
            
            if (rdi_1 == 0)
                result_1 = result
            label_1428eaa5b:
                int32_t* rax_5 = *result_1
                
                if (rax_5 != 0)
                    goto label_1428eaa91
                
                int64_t rax_6 = sub_1428db530(&data_143514be0)
                *result_1 = rax_6
                
                if (rax_6 != 0)
                    int64_t rax_7
                    rax_7, rdx, _Str_1, r9 = sub_1428c3580()
                    *(*result_1 + 8) = rax_7
                    
                    if (rax_7 != 0)
                        **result_1 = 0
                        rax_5 = *result_1
                    label_1428eaa91:
                        
                        if (*rax_5 == 0)
                        label_1428ead7e:
                            r13 += 1
                            
                            if (r13 s>= sub_142898c70(r15))
                                goto label_1428ead93
                            
                            continue
            else if (rdi_1 == 1)
                result_1 = result + 8
                goto label_1428eaa5b
            var_58_1 = 0x21d
            r8 = 0xa5
        sub_1428a5670(0x22, 0xa3, r8, "crypto\x509v3\v3_asid.c", var_58_1)
        *rax_2
        int64_t var_48_1 = rax_2[2]
        char const* const var_50_1 = ",value:"
        var_58_1.q = rax_2[1]
        sub_1428a4880(6)
        break

rsi_2 = nullptr
label_1428eab04:
sub_1428c3d60(result, &data_143514c50)
sub_1428c3460(arg_20)
sub_1428c3460(rsi_2)
return nullptr
