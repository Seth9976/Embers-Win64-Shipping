// 函数: sub_14292d850
// 地址: 0x14292d850
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0xc0)
void var_d8
int64_t rax_1 = __security_cookie ^ &var_d8
int32_t result_1 = 0
int64_t* var_a0 = arg2
int64_t* rdi = arg2
uint64_t result

if (arg1 == 0)
    sub_1428a5670((arg1 + 0x21).d, 0x80, 0x8f, "crypto\pkcs7\pk7_doit.c", 0x28d)
    result = 0
else if (*(arg1 + 0x20) != 0)
    int64_t* rax_2 = sub_142891ee0()
    
    if (rax_2 != 0)
        int32_t rax_3 = sub_1428a96d0(*(arg1 + 0x18))
        *(arg1 + 0xc) = 0
        int32_t* rbp_1
        
        if (rax_3 == 0x15)
            rbp_1 = *(arg1 + 0x20)
        label_14292dc35:
            int32_t rax_36 = sub_1428a96d0(*(arg1 + 0x18))
            int32_t rax_37
            
            if (rax_36 == 0x16)
                rax_37 = sub_14292e670(arg1, rax_36 - 0x14, 0)
            
            if (rax_36 == 0x16 && rax_37 != 0)
                result_1 = 1
            else if (rbp_1 != 0)
                if ((rbp_1[4].b & 0x10) != 0)
                    result_1 = 1
                else
                    int64_t* rax_38 = sub_142899e40(rdi, 0x401)
                    
                    if (rax_38 != 0)
                        int32_t rax_44 = sub_142899cf0(rax_38, 3, 0, &var_a0)
                        sub_14289a9a0(rax_38, 0x200)
                        sub_142899cf0(rax_38, 0x82, 0, 0)
                        sub_1428f2e40(rbp_1, var_a0, rax_44)
                        result_1 = 1
                    else
                    label_14292da18:
                        sub_1428a5670(0x21, 0x80, (rax_38 + 0x6b).d, "crypto\pkcs7\pk7_doit.c", 
                            0x31c)
        else
            int32_t* r15_1
            
            if (rax_3 == 0x16)
                void* rcx_17 = *(arg1 + 0x20)
                r15_1 = *(rcx_17 + 0x20)
                rbp_1 = sub_14292e4c0(*(rcx_17 + 0x28))
                
                if (sub_1428a96d0(*(*(*(arg1 + 0x20) + 0x28) + 0x18)) == 0x15
                        && *(arg1 + 0x10) != 0)
                    sub_1428c3460(rbp_1)
                    rbp_1 = nullptr
                    *(*(*(arg1 + 0x20) + 0x28) + 0x20) = 0
                
                goto label_14292dab7
            
            int32_t var_b8_4
            int32_t rdx
            
            if (rax_3 == 0x17)
                rbp_1 = *(*(*(arg1 + 0x20) + 0x10) + 0x10)
                
                if (rbp_1 != 0)
                    goto label_14292dc35
                
                int32_t* rax_13 = sub_1428c35d0()
                rbp_1 = rax_13
                
                if (rax_13 != 0)
                    *(*(*(arg1 + 0x20) + 0x10) + 0x10) = rbp_1
                    goto label_14292dc35
                
                var_b8_4 = 0x2b6
            label_14292da01:
                rdx = 0x80
            label_14292da06:
            label_14292da18_1:
                sub_1428a5670(0x21, rdx, 0x41, "crypto\pkcs7\pk7_doit.c", var_b8_4)
            else
                int32_t r8_2
                
                if (rax_3 == 0x18)
                    void* rax_8 = *(arg1 + 0x20)
                    r15_1 = *(rax_8 + 0x20)
                    rbp_1 = *(*(rax_8 + 0x28) + 0x10)
                    
                    if (rbp_1 != 0)
                        goto label_14292dab7
                    
                    int32_t* rax_10 = sub_1428c35d0()
                    rbp_1 = rax_10
                    
                    if (rax_10 == 0)
                        var_b8_4 = 0x2aa
                        goto label_14292da01
                    
                    *(*(*(arg1 + 0x20) + 0x28) + 0x10) = rbp_1
                label_14292dab7:
                    int32_t var_a8
                    int64_t* var_98
                    void var_88
                    
                    if (r15_1 != 0)
                        int32_t r14_1 = 0
                        
                        if (sub_142898c70(r15_1) s<= 0)
                            goto label_14292dc35
                        
                        while (true)
                            void* rax_20 = sub_142898ea0(r15_1, r14_1)
                            
                            if (*(rax_20 + 0x38) != 0)
                                int32_t rax_21 = sub_1428a96d0(**(rax_20 + 0x10))
                                
                                if (sub_14292e3e0(&var_98, var_a0, rax_21) == 0)
                                    goto label_14292ddc3
                                
                                if (sub_142891c70(rax_2, var_98) == 0)
                                    goto label_14292ddc3
                                
                                if (sub_142898c70(*(rax_20 + 0x18)) s<= 0)
                                    int32_t rax_32 = sub_142896de0(*(rax_20 + 0x38))
                                    int32_t var_a4 = rax_32
                                    int64_t rax_33 = sub_1428a6730(zx.q(rax_32))
                                    
                                    if (rax_33 == 0)
                                        goto label_14292ddc3
                                    
                                    if (sub_14292e860(rax_2, rax_33, &var_a4, *(rax_20 + 0x38))
                                            == 0)
                                        sub_1428a6780(rax_33)
                                        rdx = 0x80
                                        var_b8_4 = 0x2fe
                                        r8_2 = 6
                                        goto label_14292da18_2
                                    
                                    sub_1428f2e40(*(rax_20 + 0x28), rax_33, var_a4)
                                else
                                    int32_t* rbx_2 = *(rax_20 + 0x18)
                                    
                                    if (sub_14292ec10(
                                            sub_1428e7580(rbx_2, 
                                                sub_14292edd0(rbx_2, 0x34, 0xffffffff)), 
                                            0) == 0 && sub_14296aa10(rax_20, nullptr) == 0)
                                        var_b8_4 = 0x26b
                                        rdx = 0x88
                                        break
                                    
                                    if (sub_1428918e0(rax_2, &var_88, &var_a8) == 0)
                                        var_b8_4 = 0x272
                                        rdx = 0x88
                                        r8_2 = 6
                                        goto label_14292da18_2
                                    
                                    if (sub_14296aa80(rax_20, &var_88, var_a8) == 0)
                                        var_b8_4 = 0x276
                                        rdx = 0x88
                                        break
                                    
                                    if (sub_14292d520(rax_20) == 0)
                                        goto label_14292ddc3
                            
                            r14_1 += 1
                            
                            if (r14_1 s>= sub_142898c70(r15_1))
                                rdi = var_a0
                                goto label_14292dc35
                        
                        goto label_14292da06
                    
                    if (rax_3 != 0x19)
                        goto label_14292dc35
                    
                label_14292dd25:
                    
                    if (sub_14292e3e0(&var_98, rdi, sub_1428a96d0(**(*(arg1 + 0x20) + 8))) != 0
                            && sub_1428918e0(var_98, &var_88, &var_a8) != 0
                            && sub_1428e61a0(*(*(arg1 + 0x20) + 0x18), &var_88, var_a8) != 0)
                        goto label_14292dc35
                else
                    if (rax_3 == 0x19)
                        rbp_1 = sub_14292e4c0(*(*(arg1 + 0x20) + 0x10))
                        
                        if (sub_1428a96d0(*(*(*(arg1 + 0x20) + 0x10) + 0x18)) == 0x15
                                && *(arg1 + 0x10) != 0)
                            sub_1428c3460(rbp_1)
                            rbp_1 = nullptr
                            *(*(*(arg1 + 0x20) + 0x10) + 0x20) = 0
                        
                        goto label_14292dd25
                    
                    rdx = 0x80
                    var_b8_4 = 0x2d2
                    r8_2 = 0x70
                label_14292da18_2:
                    sub_1428a5670(0x21, rdx, r8_2, "crypto\pkcs7\pk7_doit.c", var_b8_4)
    label_14292ddc3:
        sub_142891ea0(rax_2)
        result = zx.q(result_1)
    else
        sub_1428a5670((rax_2 + 0x21).d, 0x80, (rax_2 + 0x41).d, "crypto\pkcs7\pk7_doit.c", 0x298)
        result = 0
else
    sub_1428a5670(0x21, 0x80, 0x7a, "crypto\pkcs7\pk7_doit.c", 0x292)
    result = 0

__security_check_cookie(rax_1 ^ &var_d8)
return result
