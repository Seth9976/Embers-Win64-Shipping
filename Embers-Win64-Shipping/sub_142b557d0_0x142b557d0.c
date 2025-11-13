// 函数: sub_142b557d0
// 地址: 0x142b557d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_100 = -2
uint128_t zmm6
uint128_t var_48 = zmm6
uint128_t zmm7
uint128_t var_58 = zmm7
uint128_t zmm8
uint128_t var_68 = zmm8
void var_178
void* result = __security_cookie ^ &var_178
void* result_1 = result

if (*arg2 s<= 0 && *(arg1 + 0x68) == 0)
    result = *(arg1 + 0x58)
    
    if (result == 0 || *(result + 8) == 2)
        char* r12_1 = nullptr
        char* var_148_1 = nullptr
        void* rcx = *(arg1 + 0x50)
        
        if (rcx != 0 || result != 0)
            int64_t* r15_1 = *(arg1 + 0x48)
            zmm7 = -0x3c7b89c49df8cd80
            int64_t* var_140
            int32_t var_118
            
            if (rcx == 0)
            label_142b55bb9:
                
                if (*(arg1 + 0x58) == 0)
                    goto label_142b55e2c
                
                if (*(arg1 + 0x60) == 0)
                    struct icu_64::UObject::icu_64::UVector::VTable** rax_25 = j_sub_142a7dd00(0x28)
                    struct icu_64::UObject::icu_64::UVector::VTable** var_108_2 = rax_25
                    
                    if (rax_25 != 0)
                        rax_25 = sub_142ae6d20(rax_25, arg2)
                    
                    *(arg1 + 0x60) = rax_25
                
                if (*(arg1 + 0x60) == 0 && *arg2 s> 0)
                    goto label_142b55dd0
                
                int64_t* rax_26 = sub_142ae72d0(*(arg1 + 0x58), 0)
                int64_t* rax_27 = sub_142ae72d0(*(arg1 + 0x58), 1)
                int64_t rbx_2 = *rax_26
                int32_t rax_28 = sub_141b60020(r15_1)
                char rax_30 = (*(rbx_2 + 0x40))(rax_26, zmm7.q, zx.q(sub_1405f8de0(r15_1)), 
                    zx.q(rax_28), 0, &var_140, var_148_1)
                int64_t rbx_3 = *rax_27
                int32_t rax_31 = sub_141b60020(r15_1)
                
                if (rax_30 == 0 || (*(rbx_3 + 0x40))(rax_27, zmm7.q, zx.q(sub_1405f8de0(r15_1)), 
                        zx.q(rax_31), 0, &var_118) == 0)
                    *arg2 = 0x1b
                label_142b55dcb:
                    r12_1 = var_148_1
                    goto label_142b55dd0
                
                int64_t** rax_34 = sub_142a7dd00(0x18)
                
                if (rax_34 == 0)
                    *arg2 = 7
                    goto label_142b55dcb
                
                void* rax_36 = sub_142a7dd00(0x18)
                
                if (rax_36 == 0)
                    sub_142a7dcd0(rax_34)
                    *arg2 = 7
                    goto label_142b55dcb
                
                int64_t* zmm0_2 = var_118.q
                int64_t* zmm1 = var_140
                rax_34[1] = r15_1
                
                if (zmm0_2 f<= zmm1)
                    *rax_34 = zmm0_2
                    rax_34[2] = rax_27
                    int64_t rbx_5 = *rax_26
                    int32_t rax_40 = sub_141b60020(rax_27)
                    uint64_t r8_9 = zx.q(sub_1405f8de0(rax_27))
                    (*(rbx_5 + 0x40))(rax_26, var_118.q, r8_9, zx.q(rax_40), 0, rax_36)
                    *(rax_36 + 8) = rax_27
                    *(rax_36 + 0x10) = rax_26
                else
                    *rax_34 = zmm1
                    rax_34[2] = rax_26
                    int64_t rbx_4 = *rax_27
                    int32_t rax_38 = sub_141b60020(rax_26)
                    uint64_t r8_8 = zx.q(sub_1405f8de0(rax_26))
                    (*(rbx_4 + 0x40))(rax_27, var_140, r8_8, zx.q(rax_38), 0, rax_36)
                    *(rax_36 + 8) = rax_26
                    *(rax_36 + 0x10) = rax_27
                
                int32_t* rdi_13 = arg2
                sub_142ae7110(*(arg1 + 0x60), rax_34, rdi_13)
                
                if (*rdi_13 s> 0)
                    goto label_142b55dcb
                
                result = sub_142ae7110(*(arg1 + 0x60), rax_36, rdi_13)
                
                if (*rdi_13 s<= 0)
                    goto label_142b55e2c
                
                goto label_142b55dcb
            
            int64_t count_1 = sx.q(*(rcx + 8))
            
            if (count_1.d s<= 0)
                goto label_142b55bb9
            
            int64_t count = count_1
            char* rax_1 = sub_142a7dd00(count_1)
            r12_1 = rax_1
            var_148_1 = rax_1
            
            if (rax_1 != 0)
                if (count_1.d s> 0)
                    __builtin_memset(rax_1, 0, count)
                
                while (true)
                    int32_t rax_2 = sub_1405f8de0(r15_1)
                    int32_t rdi_2 = rax_2
                    var_118 = sub_141b60020(r15_1)
                    zmm6 = 0x43846a3eddf8cd80
                    int64_t* rbx_1 = nullptr
                    var_140 = nullptr
                    struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_f8 =
                        &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
                    int16_t var_f0_1 = 2
                    struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_b8 =
                        &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
                    int16_t var_b0_1 = 2
                    Concurrency::details::SchedulerBase::GetPolicy(r15_1, &var_f8)
                    int32_t r12_2 = 0
                    
                    if (count s<= 0)
                    label_142b55a43:
                        char* rax_18 = nullptr
                        r12_1 = var_148_1
                        
                        if (count s> 0)
                            while (*(rax_18 + r12_1) != 0)
                                rax_18 = &rax_18[1]
                                
                                if (rax_18 s>= count)
                                    goto label_142b55baa
                            
                            goto label_142b55a72
                    else
                        char* rsi_1 = var_148_1
                        int64_t var_110
                        uint128_t zmm0_1
                        int64_t i
                        
                        do
                            if (*rsi_1 == 0)
                                int64_t* rax_4 = sub_142ae72d0(*(arg1 + 0x50), r12_2)
                                rbx_1 = rax_4
                                int64_t rdx_2 = *rax_4
                                
                                if ((*(rdx_2 + 0x40))(rbx_1, rdx_2, zx.q(rdi_2), zx.q(var_118), 0, 
                                        &var_110, var_148_1) != 0)
                                    Concurrency::details::SchedulerBase::GetPolicy(rbx_1, &var_b8)
                                    
                                    if ((*(*rbx_1 + 0x18))(rbx_1, r15_1) != 0)
                                        rbx_1 = var_140
                                    else
                                        bool cond:1_1
                                        
                                        if ((var_b0_1.b & 1) == 0)
                                            int32_t r8_3
                                            int32_t var_ac
                                            
                                            if (var_b0_1 s< 0)
                                                r8_3 = var_ac
                                            else
                                                r8_3 = sx.d(var_b0_1) s>> 5
                                            int32_t rax_12
                                            int32_t var_ec
                                            
                                            if (var_f0_1 s< 0)
                                                rax_12 = var_ec
                                            else
                                                rax_12 = sx.d(var_f0_1) s>> 5
                                            
                                            if ((var_f0_1.b & 1) != 0 || r8_3 != rax_12)
                                                goto label_142b55a0a
                                            
                                            cond:1_1 = sub_142a490e0(&var_b8, &var_f8, r8_3) == 0
                                        else
                                            cond:1_1 = (var_f0_1.b & 1) == 0
                                        
                                        if (cond:1_1)
                                        label_142b55a0a:
                                            zmm0_1 = zx.o(var_110)
                                            
                                            if (zmm6.q f<= zmm0_1.q)
                                                rbx_1 = var_140
                                            else
                                                zmm6 = zmm0_1
                                                var_140 = rbx_1
                                        else
                                            if (sub_1405f8de0(rbx_1) != sub_1405f8de0(r15_1))
                                                goto label_142b55a0a
                                            
                                            if (sub_141b60020(rbx_1) != sub_141b60020(r15_1))
                                                goto label_142b55a0a
                                            
                                            rbx_1 = var_140
                                else
                                    *rsi_1 = 1
                                    rbx_1 = var_140
                            
                            r12_2 += 1
                            rsi_1 = &rsi_1[1]
                            i = count
                            count -= 1
                            rdi_2 = rax_2
                        while (i != 1)
                        count = count_1
                        
                        if (rbx_1 == 0)
                            goto label_142b55a43
                        
                        r12_1 = var_148_1
                    label_142b55a72:
                        
                        if (*(arg1 + 0x58) != 0)
                            int32_t i_1 = 0
                            int32_t r13_1 = var_118
                            
                            do
                                int64_t* rax_19 = sub_142ae72d0(*(arg1 + 0x58), i_1)
                                
                                if ((*(*rax_19 + 0x18))(rax_19, r15_1) == 0)
                                    int64_t* rax_21 = sub_142ae72d0(*(arg1 + 0x58), i_1)
                                    
                                    if ((*(*rax_21 + 0x40))(rax_21, zmm7.q, zx.q(rax_2), 
                                            zx.q(r13_1), 0, &var_110, var_148_1) != 0)
                                        zmm0_1 = zx.o(var_110)
                                        
                                        if (not(zmm6.q f<= zmm0_1.q))
                                            zmm6 = zmm0_1
                                            var_140 = rax_21
                                
                                i_1 += 1
                            while (i_1 s< 2)
                            
                            rbx_1 = var_140
                            count = count_1
                        
                        if (rbx_1 != 0)
                            int32_t* rsi_3
                            
                            if (*(arg1 + 0x60) != 0)
                                rsi_3 = arg2
                            label_142b55b40:
                                uint64_t* rax_24 = sub_142a7dd00(0x18)
                                
                                if (rax_24 == 0)
                                    *rsi_3 = 7
                                else
                                    *rax_24 = zmm6.q
                                    rax_24[1] = r15_1
                                    rax_24[2] = rbx_1
                                    sub_142ae7110(*(arg1 + 0x60), rax_24, rsi_3)
                                    
                                    if (*rsi_3 s<= 0)
                                        zmm7 = zmm6
                                        r15_1 = rbx_1
                                        sub_142a47ff0(&var_b8)
                                        sub_142a47ff0(&var_f8)
                                        continue
                            else
                                struct icu_64::UObject::icu_64::UVector::VTable** rax_23 =
                                    j_sub_142a7dd00(0x28)
                                struct icu_64::UObject::icu_64::UVector::VTable** var_108_1 = rax_23
                                rsi_3 = arg2
                                
                                if (rax_23 != 0)
                                    rax_23 = sub_142ae6d20(rax_23, rsi_3)
                                
                                *(arg1 + 0x60) = rax_23
                                
                                if (*rsi_3 s<= 0)
                                    goto label_142b55b40
                            sub_142a47ff0(&var_b8)
                            sub_142a47ff0(&var_f8)
                            goto label_142b55dd0
                    
                label_142b55baa:
                    sub_142a47ff0(&var_b8)
                    result = sub_142a47ff0(&var_f8)
                    break
                
                goto label_142b55bb9
            
            *arg2 = 7
        label_142b55dd0:
            result = *(arg1 + 0x60)
            
            if (result != 0)
                while (*(result + 8) != 0)
                    sub_142a7dcd0(sub_142ae7500(*(arg1 + 0x60), 0))
                    result = *(arg1 + 0x60)
                
                int64_t* rcx_47 = *(arg1 + 0x60)
                
                if (rcx_47 != 0)
                    result = (**rcx_47)(rcx_47, 1)
            
            *(arg1 + 0x60) = 0
            
            if (r12_1 != 0)
                result = sub_142a7dcd0(r12_1)
            
            *(arg1 + 0x68) = 0
        else
        label_142b55e2c:
            *(arg1 + 0x68) = 1
            
            if (var_148_1 != 0)
                result = sub_142a7dcd0(var_148_1)
    else
        *arg2 = 0x1b

__security_check_cookie(result_1 ^ &var_178)
return result
