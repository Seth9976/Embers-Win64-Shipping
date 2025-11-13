// 函数: sub_141b196f0
// 地址: 0x141b196f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_238
int64_t rax_1 = __security_cookie ^ &var_238
uint64_t result = arg5
int64_t* result_1 = result

if (*(arg3 + 0x48) != 0 && (*(arg3 + 0x54) & 2) == 0)
    result = zx.q(*(arg1 + 0x30))
    int32_t r15_1 = *(arg3 + 0x20)
    bool cond:1_1
    
    if (r15_1 == 1)
        cond:1_1 = (result.b & 2) == 0
    else
        cond:1_1 = (result.b & 1) == 0
    
    if (not(cond:1_1))
        uint64_t r14_1 = 0
        int32_t i_1 = 0
        uint64_t var_208_1 = 0
        uint64_t var_1f8 = 0
        int32_t var_1ec_1 = 0
        char var_1e0
        sub_141a56f70(arg3 + 0x28, &var_1e0)
        int32_t rax_2 = *(arg3 + 0x24)
        int64_t rdx_1
        
        if (rax_2 == 0x80000000)
            int64_t* rdx_2 = 0x10
            
            if (*(arg3 + 0x20) != 0)
                rdx_2 = 4
            
            rdx_1 = *(rdx_2 + arg3)
        else
            int32_t var_1fc_1 = 0
            rdx_1 = rax_2.q
        
        uint64_t var_1d0
        sub_141a352a0(&var_1d0, rdx_1, &var_1e0)
        result = zx.q(*(arg1 + 0x40))
        char var_1e8
        
        if (r15_1 != 1)
            if (result.d s> 0)
                int64_t r15_3 = 0
                void* r12_2 = nullptr
                
                do
                    uint64_t rcx_9 = *(arg1 + 0x48)
                    int64_t rax_7 = *(arg1 + 0x38)
                    var_1d0 = rcx_9
                    result = zx.q(*(r12_2 + rax_7))
                    
                    if (*(rcx_9 + r15_3) != 0)
                        char rcx_10 = *arg4
                        var_1e0 = 1
                        int32_t var_1dc_2 = result.d
                        
                        if (rcx_10 == 2)
                        label_141b19982:
                            char rdx_9 = arg4[8]
                            void* rcx_12 = &arg4[8]
                            var_1e8 = 1
                            int32_t var_1e4_2 = result.d
                            
                            if (rdx_9 == 2)
                            label_141b199b6:
                                int64_t i_4 = sx.q(i_1)
                                i_1 = (i_4 + 1).d
                                
                                if (i_1 s> var_1ec_1)
                                    sub_1405c4ec0(&var_1f8)
                                    var_208_1 = var_1f8
                                
                                result = sub_141af73b0(var_208_1 + i_4 * 0x28, 
                                    var_1d0 + sx.q(r14_1.d) * 0x28)
                            else
                                int32_t temp2_1 = *(rcx_12 + 4)
                                
                                if (temp2_1 s> result.d || (temp2_1 s>= result.d && rdx_9 == 1))
                                    goto label_141b199ae
                                
                                if (rdx_9 == 1)
                                    rcx_12 = &var_1e8
                                label_141b199ae:
                                    result = zx.q(*(arg4 + 0xc))
                                    
                                    if (*(rcx_12 + 4) == result.d)
                                        goto label_141b199b6
                        else
                            int32_t rdx_8 = *(arg4 + 4)
                            char* rcx_11
                            
                            if (rdx_8 s< result.d)
                                rcx_11 = arg4
                            label_141b19979:
                                
                                if (*(rcx_11 + 4) == rdx_8)
                                    goto label_141b19982
                            else if (rdx_8 s> result.d)
                                if (rcx_10 == 1)
                                    rcx_11 = &var_1e0
                                    goto label_141b19979
                            else if (rcx_10 == 1)
                                rcx_11 = arg4
                                goto label_141b19979
                    
                    r14_1 = zx.q(r14_1.d + 1)
                    r12_2 += 4
                    r15_3 += 0x28
                while (r14_1.d s< *(arg1 + 0x40))
                
                goto label_141b19a17
            
            r14_1 = var_208_1
        else
            int32_t r15_2 = (result - 1).d
            
            if (r15_2 s>= 0)
                int64_t rax_3 = sx.q(r15_2)
                int64_t r14_3 = rax_3 * 0x28
                int64_t r12_1 = rax_3 << 2
                int64_t r9 = r14_3
                int32_t var_200
                var_200.q = r14_3
                int32_t temp0_1
                
                do
                    uint64_t rcx_2 = *(arg1 + 0x48)
                    int64_t rax_4 = *(arg1 + 0x38)
                    var_1d0 = rcx_2
                    result = zx.q(*(r12_1 + rax_4))
                    
                    if (*(rcx_2 + r14_3) != 0)
                        char rcx_3 = *arg4
                        var_1e8 = 1
                        int32_t var_1e4_1 = result.d
                        
                        if (rcx_3 == 2)
                        label_141b19872:
                            char rdx_4 = arg4[8]
                            void* rcx_5 = &arg4[8]
                            var_1e0 = 1
                            int32_t var_1dc_1 = result.d
                            
                            if (rdx_4 == 2)
                            label_141b198a6:
                                int64_t i_3 = sx.q(i_1)
                                i_1 = (i_3 + 1).d
                                
                                if (i_1 s> var_1ec_1)
                                    sub_1405c4ec0(&var_1f8)
                                    r9 = var_200.q
                                    var_208_1 = var_1f8
                                
                                result = sub_141af73b0(var_208_1 + i_3 * 0x28, var_1d0 + r9)
                                r9 = var_200.q
                            else
                                int32_t temp3_1 = *(rcx_5 + 4)
                                
                                if (temp3_1 s> result.d || (temp3_1 s>= result.d && rdx_4 == 1))
                                    goto label_141b1989e
                                
                                if (rdx_4 == 1)
                                    rcx_5 = &var_1e0
                                label_141b1989e:
                                    result = zx.q(*(arg4 + 0xc))
                                    
                                    if (*(rcx_5 + 4) == result.d)
                                        goto label_141b198a6
                        else
                            int32_t rdx_3 = *(arg4 + 4)
                            char* rcx_4
                            
                            if (rdx_3 s< result.d)
                                rcx_4 = arg4
                            label_141b19869:
                                
                                if (*(rcx_4 + 4) == rdx_3)
                                    goto label_141b19872
                            else if (rdx_3 s> result.d)
                                if (rcx_3 == 1)
                                    rcx_4 = &var_1e8
                                    goto label_141b19869
                            else if (rcx_3 == 1)
                                rcx_4 = arg4
                                goto label_141b19869
                    
                    r9 -= 0x28
                    r12_1 -= 4
                    r14_3 -= 0x28
                    var_200.q = r9
                    temp0_1 = r15_2
                    r15_2 -= 1
                while (temp0_1 - 1 s>= 0)
            label_141b19a17:
                
                if (i_1 == 0)
                    r14_1 = var_208_1
                else
                    var_1d0 = var_208_1
                    int32_t i_2 = i_1
                    int32_t var_1c4_1 = var_1ec_1
                    r14_1 = 0
                    i_1 = 0
                    void** var_a8
                    void*** rax_14 = sub_141af61d0(&var_a8, &var_1d0, arg1 + 0x20)
                    char var_178
                    char var_178_1 = var_178 & 0xfc
                    int64_t* rax_15 = sub_140a82f30(0x58, 8)
                    int64_t* var_1b8 = rax_15
                    char rcx_18 = var_178_1 | 1
                    int64_t* rcx_19 = &var_1b8
                    
                    if ((rcx_18 & 2) == 0)
                        rcx_19 = rax_15
                    
                    *rcx_19 = &data_143054f88
                    rcx_19[1] = 0
                    rcx_19[1] = rax_14[1]
                    rax_14[1] = 0
                    rcx_19[2].d = rax_14[2].d
                    *(rcx_19 + 0x14) = *(rax_14 + 0x14)
                    rax_14[2] = 0
                    rcx_19[9] = 0
                    
                    if (rax_14[9] == 0)
                        memmove(&rcx_19[3], &rax_14[3], 0x30)
                    
                    int64_t rcx_21 = rcx_19[9]
                    
                    if (rcx_21 != 0)
                        sub_140a74f90(rcx_21)
                    
                    rcx_19[9] = rax_14[9]
                    rax_14[9] = 0
                    rcx_19[0xa].d = rax_14[0xa].d
                    *(rcx_19 + 0x54) = *(rax_14 + 0x54)
                    rax_14[0xa].d = 0
                    *(rax_14 + 0x54) = 2
                    void var_170
                    int128_t* rax_22 = sub_1405ab790(&var_170, &result_1[0x22], result_1 + 0x124, 
                        &result_1[0x27], &var_1b8)
                    int64_t rbx_2 = sx.q(result_1[1].d)
                    int32_t rcx_23 = (rbx_2 + 1).d
                    result_1[1].d = rcx_23
                    
                    if (rcx_23 s> *(result_1 + 0xc))
                        sub_1405c5190(result_1)
                    
                    sub_1405ab620(rbx_2 * 0xc8 + *result_1, rax_22)
                    char var_b0
                    
                    if ((var_b0 & 1) != 0)
                        int64_t* var_f0
                        int64_t* rcx_27 = &var_f0
                        
                        if ((var_b0 & 2) == 0)
                            rcx_27 = var_f0
                        
                        (**rcx_27)(rcx_27, 0)
                        
                        if ((var_b0 & 2) == 0)
                            sub_140a74f90(var_f0)
                    
                    int64_t var_110
                    
                    if (var_110 != 0)
                        sub_140a74f90(var_110)
                    
                    if ((rcx_18 & 1) != 0)
                        int64_t* rcx_30 = &var_1b8
                        
                        if ((rcx_18 & 2) == 0)
                            rcx_30 = var_1b8
                        
                        (**rcx_30)(rcx_30, 0)
                        
                        if ((rcx_18 & 2) == 0)
                            sub_140a74f90(var_1b8)
                    
                    int64_t var_60
                    
                    if (var_60 != 0)
                        sub_140a74f90(var_60)
                    
                    void var_a0
                    result = sub_140745ac0(&var_a0)
        
        if (i_1 != 0)
            int64_t* rbx_3 = r14_1 + 0x18
            int32_t i
            
            do
                int64_t rcx_34 = *rbx_3
                
                if (rcx_34 != 0)
                    result = sub_140a74f90(rcx_34)
                
                rbx_3 = &rbx_3[5]
                i = i_1
                i_1 -= 1
            while (i != 1)
        
        if (r14_1 != 0)
            result = sub_140a74f90(r14_1)

__security_check_cookie(rax_1 ^ &var_238)
return result
