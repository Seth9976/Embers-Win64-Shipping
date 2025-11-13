// 函数: sub_14284bc10
// 地址: 0x14284bc10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_128
int64_t rax_1 = __security_cookie ^ &var_128
int64_t* var_a8 = arg7
uint64_t result

if (arg4 != 0)
    char var_b0 = 0
    int64_t* rax_4
    int64_t rdx
    rax_4, rdx = sub_14284b270(&var_b0)
    
    if (rax_4 != 0)
        int64_t* var_a0 = nullptr
        int32_t result_1
        int64_t rdx_2
        result_1, rdx_2 = (*(*rax_4 + 0x40))(rax_4, arg3, 0, &var_a0)
        
        if (result_1 s>= 0)
            int64_t* rcx_6 = var_a0
            int32_t result_3 = (*(*rcx_6 + 0x18))(rcx_6, arg4, 2)
            int32_t result_2 = result_3
            
            if (result_3 s< 0)
            label_14284c201:
                int64_t* rcx_42 = var_a0
                
                if (rcx_42 != 0)
                    var_a0 = nullptr
                    int64_t rdx_20 = *rcx_42
                    (*(rdx_20 + 0x10))(rcx_42, rdx_20, arg6)
                
                sub_14058f080(arg8)
                result = zx.q(result_2)
            else
                int64_t* var_88 = nullptr
                int64_t* var_90 = nullptr
                int64_t* rcx_7 = var_a0
                int32_t result_4 = (*(*rcx_7 + 0x50))(rcx_7, &var_88, &var_90)
                result_2 = result_4
                int64_t* rcx_8
                
                if (result_4 s>= 0)
                    int16_t var_58
                    int16_t var_50
                    
                    if (*arg3 == 0x4188fcfe0af1d87e && arg3[1] == -0x1c348e9b6f581443
                            && var_b0 != 0)
                        int64_t var_d8 = 0
                        int64_t var_d0_1 = 0
                        int512_t zmm0
                        zmm0.o = zx.o(0)
                        int128_t var_c0_1 = zx.o(0)
                        wchar16 const* const var_c8_1 = u"EnableV5Header32bppBGRA"
                        var_58 = 0xb
                        var_50 = 0xffff
                        (*(*var_90 + 0x20))(zmm0, 1, &var_d8, &var_58)
                    
                    int64_t* rcx_12 = *(arg8 + 0x38)
                    int64_t* var_e0
                    
                    if (rcx_12 != 0)
                        var_e0 = var_90
                        (*(*rcx_12 + 0x10))(rcx_12, &var_e0)
                    
                    int64_t* rdi_1 = var_90
                    int64_t* r14_1 = var_88
                    
                    if (r14_1 == 0)
                    label_14284c1d4:
                        result_2 = -0x7ff8ffa9
                    label_14284c1d9:
                        int64_t* rcx_40 = var_90
                        
                        if (rcx_40 != 0)
                            var_90 = nullptr
                            (*(*rcx_40 + 0x10))(rcx_40, arg5, arg6)
                        
                        int64_t* rcx_41 = var_88
                        
                        if (rcx_41 != 0)
                            var_88 = nullptr
                            (*(*rcx_41 + 0x10))(rcx_41, arg5, arg6)
                        
                        goto label_14284c201
                    
                    if (*(arg1 + 0x28) == 0)
                        result_2 = -0x7fffbffd
                        goto label_14284c1d9
                    
                    int64_t var_68
                    
                    if (sub_14284b870(arg1[4], &var_68, 0) == 0)
                        result_2 = -0x7ff8ffce
                        goto label_14284c1d9
                    
                    int32_t result_5 = (*(*r14_1 + 0x18))(r14_1, rdi_1)
                    result_2 = result_5
                    
                    if (result_5 s< 0)
                        goto label_14284c1d9
                    
                    int64_t rcx_15 = *arg1
                    
                    if (rcx_15 u> 0xffffffff)
                        goto label_14284c1d4
                    
                    int64_t rdx_10 = *(arg1 + 8)
                    
                    if (rdx_10 u> 0xffffffff)
                        goto label_14284c1d4
                    
                    if (*(arg1 + 0x18) u> 0xffffffff || *(arg1 + 0x20) u> 0xffffffff)
                        result_2 = -0x7ff8fdea
                        goto label_14284c1d9
                    
                    int32_t result_6 = (*(*r14_1 + 0x20))(r14_1, zx.q(rcx_15.d), zx.q(rdx_10.d))
                    result_2 = result_6
                    
                    if (result_6 s< 0)
                        goto label_14284c1d9
                    
                    arg5 = 0x4052000000000000
                    arg6.o = arg5
                    int32_t result_7 = (*(*r14_1 + 0x28))(r14_1)
                    result_2 = result_7
                    
                    if (result_7 s< 0)
                        goto label_14284c1d9
                    
                    int64_t* rax_21 = &var_68
                    int64_t* rcx_18 = var_a8
                    
                    if (rcx_18 != 0)
                        rax_21 = rcx_18
                    
                    int128_t var_78 = *rax_21
                    int32_t result_8 = (*(*r14_1 + 0x30))(r14_1, &var_78, arg6)
                    result_2 = result_8
                    
                    if (result_8 s< 0)
                        goto label_14284c1d9
                    
                    int64_t* rcx_20 = var_a8
                    
                    if (rcx_20 != 0 && (*rcx_20 != var_78.q || rcx_20[1] != var_78:8.q))
                        result_2 = -0x7fffbffb
                        goto label_14284c1d9
                    
                    int32_t result_9 = sub_14284b9f0(arg2.b, r14_1, arg3, arg1[4])
                    result_2 = result_9
                    
                    if (result_9 s< 0)
                        goto label_14284c1d9
                    
                    int64_t var_60
                    
                    if (var_78.q != var_68 || var_78:8.q != var_60)
                        char var_98 = 0
                        int64_t* rax_28 = sub_14284b270(&var_98)
                        
                        if (rax_28 == 0)
                            result_2 = -0x7fffbffe
                            goto label_14284c1d9
                        
                        var_a8 = nullptr
                        int32_t result_11 = (*(*rax_28 + 0xa0))(rax_28, zx.q(*arg1), zx.q(arg1[2]), 
                            &var_68, arg1[6], arg1[8], *(arg1 + 0x28), &var_a8, arg8)
                        result_2 = result_11
                        
                        if (result_11 s< 0)
                            int64_t* rcx_25 = var_a8
                            
                            if (rcx_25 != 0)
                                var_a8 = nullptr
                                (*(*rcx_25 + 0x10))(rcx_25)
                            
                            goto label_14284c1d9
                        
                        var_e0 = nullptr
                        int32_t result_12 = (*(*rax_28 + 0x50))(rax_28, &var_e0)
                        result_2 = result_12
                        int64_t* rcx_27
                        
                        if (result_12 s>= 0)
                            int32_t var_80 = 0
                            int64_t* rcx_29 = var_e0
                            
                            if ((*(*rcx_29 + 0x48))(rcx_29, &var_68, &var_78, &var_80) s< 0
                                    || var_80 == 0)
                                int64_t* rcx_38 = var_e0
                                
                                if (rcx_38 != 0)
                                    var_e0 = nullptr
                                    (*(*rcx_38 + 0x10))(rcx_38)
                                
                                int64_t* rcx_39 = var_a8
                                
                                if (rcx_39 != 0)
                                    var_a8 = nullptr
                                    (*(*rcx_39 + 0x10))(rcx_39)
                                
                                result_2 = -0x7fff0001
                                goto label_14284c1d9
                            
                            int32_t r13_1 = arg2 & 0xf0000
                            int64_t r9_6
                            
                            if (r13_1 == 0x10000)
                                r9_6 = 1
                            else
                                r9_6 = 8
                                
                                if (r13_1 != 0x20000)
                                    r9_6 = 0
                            
                            int64_t* rcx_30 = var_e0
                            int64_t var_f8_1
                            var_f8_1.d = 1
                            int32_t var_100_1
                            var_100_1.q = (zx.o(0)).q
                            int32_t var_108_1
                            var_108_1.q = 0
                            int32_t result_13 = (*(*rcx_30 + 0x40))(rcx_30, var_a8, &var_78, r9_6, 
                                var_108_1, var_100_1, var_f8_1)
                            result_2 = result_13
                            
                            if (result_13 s< 0)
                                goto label_14284c01b
                            
                            var_58.q = 0
                            var_50.d = *arg1
                            int32_t var_4c_1 = arg1[2]
                            int32_t result_14 = (*(*r14_1 + 0x58))(r14_1, var_e0, &var_58)
                            result_2 = result_14
                            rcx_27 = var_e0
                            
                            if (result_14 s>= 0)
                                if (rcx_27 != 0)
                                    var_e0 = nullptr
                                    (*(*rcx_27 + 0x10))(rcx_27)
                                
                                int64_t* rcx_32 = var_a8
                                
                                if (rcx_32 != 0)
                                    var_a8 = nullptr
                                    (*(*rcx_32 + 0x10))(rcx_32)
                                
                                goto label_14284c131
                        else
                        label_14284c01b:
                            rcx_27 = var_e0
                        
                        if (rcx_27 != 0)
                            var_e0 = nullptr
                            (*(*rcx_27 + 0x10))(rcx_27)
                        
                        int64_t* rcx_28 = var_a8
                        
                        if (rcx_28 != 0)
                            var_a8 = nullptr
                            (*(*rcx_28 + 0x10))(rcx_28)
                        
                        goto label_14284c1d9
                    
                    int32_t var_108
                    var_108.q = *(arg1 + 0x28)
                    int32_t result_10 = (*(*r14_1 + 0x50))(r14_1, zx.q(arg1[2]), zx.q(arg1[6]), 
                        zx.q(arg1[8]), var_108)
                    result_2 = result_10
                    
                    if (result_10 s< 0)
                        goto label_14284c1d9
                    
                label_14284c131:
                    int32_t result_15 = (*(*r14_1 + 0x60))(r14_1)
                    result_2 = result_15
                    
                    if (result_15 s< 0)
                        goto label_14284c1d9
                    
                    int64_t* rcx_34 = var_a0
                    int32_t result_16 = (*(*rcx_34 + 0x58))(rcx_34)
                    result_2 = result_16
                    rcx_8 = var_90
                    
                    if (result_16 s< 0)
                        goto label_14284bd51
                    
                    if (rcx_8 != 0)
                        var_90 = nullptr
                        (*(*rcx_8 + 0x10))(rcx_8)
                    
                    int64_t* rcx_35 = var_88
                    
                    if (rcx_35 != 0)
                        var_88 = nullptr
                        (*(*rcx_35 + 0x10))(rcx_35)
                    
                    int64_t* rcx_36 = var_a0
                    
                    if (rcx_36 != 0)
                        var_a0 = nullptr
                        (*(*rcx_36 + 0x10))(rcx_36)
                    
                    sub_14058f080(arg8)
                    result = 0
                else
                    rcx_8 = var_90
                label_14284bd51:
                    
                    if (rcx_8 != 0)
                        var_90 = nullptr
                        int64_t rdx_6 = *rcx_8
                        (*(rdx_6 + 0x10))(rcx_8, rdx_6, arg6)
                    
                    int64_t* rcx_9 = var_88
                    
                    if (rcx_9 != 0)
                        var_88 = nullptr
                        (*(*rcx_9 + 0x10))(rcx_9, arg5, arg6)
                    
                    int64_t* rcx_10 = var_a0
                    
                    if (rcx_10 != 0)
                        var_a0 = nullptr
                        (*(*rcx_10 + 0x10))(rcx_10)
                    
                    sub_14058f080(arg8)
                    result = zx.q(result_2)
        else
            int64_t* rcx_4 = var_a0
            
            if (rcx_4 != 0)
                var_a0 = nullptr
                int64_t rdx_3 = *rcx_4
                (*(rdx_3 + 0x10))(rcx_4, rdx_3)
            
            int64_t* rcx_5 = *(arg8 + 0x38)
            
            if (rcx_5 != 0)
                rdx_2.b = rcx_5 != arg8
                (*(*rcx_5 + 0x20))(rcx_5, rdx_2)
                *(arg8 + 0x38) = 0
            
            result = zx.q(result_1)
    else
        int64_t* rcx_3 = *(arg8 + 0x38)
        
        if (rcx_3 != 0)
            rdx.b = rcx_3 != arg8
            (*(*rcx_3 + 0x20))(rcx_3, rdx)
            *(arg8 + 0x38) = 0
        
        result = 0x80004002
else
    int64_t* rcx = *(arg8 + 0x38)
    
    if (rcx != 0)
        arg2.b = rcx != arg8
        (*(*rcx + 0x20))(rcx, arg2)
        *(arg8 + 0x38) = 0
    
    result = 0x80070057

__security_check_cookie(rax_1 ^ &var_128)
return result
