// 函数: sub_142ae34b0
// 地址: 0x142ae34b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_f8 = -2
void var_158
int64_t rax_1 = __security_cookie ^ &var_158
int64_t r14 = arg1
char* _Str1_1 = arg2
void var_b0
char result = (*(*arg3 + 0x50))(arg3, &var_b0, arg4)

if (*arg4 s<= 0)
    int32_t var_124_1 = 0
    int32_t rdx_1 = 0
    
    while (true)
        result = sub_142ac2da0(&var_b0, rdx_1, &_Str1_1, arg3)
        
        if (result == 0)
            break
        
        char* _Str1_2 = _Str1_1
        void var_d8
        result = (*(*arg3 + 0x50))(arg3, &var_d8, arg4)
        
        if (*arg4 s> 0)
            break
        
        int64_t* rbx_1 = nullptr
        int64_t var_110_1 = 0
        int32_t r15_1 = 0
        int32_t r12_1 = -1
        int32_t var_138_1 = 0xffffffff
        int32_t var_128_1 = 0
        
        if (sub_142ac2da0(&var_d8, 0, &_Str1_1, arg3) == 0)
        label_142ae378d:
            r15_1 = 2
            int64_t* rax_21 = sub_142a7dd00(0xc)
            
            if (rax_21 == 0)
            label_142ae3804:
                *arg4 = 7
            else
                *rax_21 = 0
                rax_21[1].d = 0
                sub_142a7dcd0(rbx_1)
                rbx_1 = rax_21
                int32_t rcx_25 = 1
                
                if (r12_1 != 0xffffffff)
                    rcx_25 = r12_1
                
                *rax_21 = rcx_25
                *(rax_21 + 4) = rcx_25
            label_142ae37c6:
                *(rbx_1 + (sx.q(r15_1) << 2)) = 0xffffffff
                int64_t* r8_11 = rbx_1
                rbx_1 = nullptr
                sub_142a86f50(data_144016838, _Str1_2, r8_11, arg4)
                
                if (*arg4 s<= 0)
                    sub_142a7dcd0(0)
                    int32_t rbx_4 = var_124_1 + 1
                    var_124_1 = rbx_4
                    rdx_1 = rbx_4
                    continue
            
            result = sub_142a7dcd0(rbx_1)
            break
        
        char i
        
        do
            int64_t rax_5 = 0
            char* _Str1 = _Str1_1
            struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_88
            
            while (true)
                char rcx_4 = _Str1[rax_5]
                rax_5 += 1
                
                if (rcx_4 != *(rax_5 + &icu_64::x10b9e246::AllowedHourFormatsSink::operator[]::AllowedHourFormatsSink::`vftable'{for `icu_64::ResourceSink'}
                        .__offset(0x17)))
                    break
                
                if (rax_5 == 8)
                    int32_t rax_7 = (*(*arg3 + 0x10))(arg3)
                    
                    if (rax_7 == 0)
                        r15_1 = rax_7 + 2
                        int64_t* rax_8 = sub_142a7dd00(zx.q(rax_7 + 0xc))
                        
                        if (rax_8 == 0)
                            goto label_142ae3804
                        
                        *rax_8 = 0
                        rax_8[1].d = 0
                        sub_142a7dcd0(rbx_1)
                        rbx_1 = rax_8
                        int64_t* var_110_2 = rbx_1
                        *(rax_8 + 4) = sub_142ae22c0(r14, sub_142a9c7e0(arg3, &var_88))
                        sub_142a47ff0(&var_88)
                        goto label_142ae3752
                    
                    void var_f0
                    (*(*arg3 + 0x48))(arg3, &var_f0, arg4)
                    int32_t var_e0
                    r15_1 = var_e0 + 1
                    
                    if (r15_1 + 1 s<= 0)
                        goto label_142ae3804
                    
                    uint64_t count = sx.q(r15_1 + 1) << 2
                    int64_t* rax_13 = sub_142a7dd00(count)
                    
                    if (rax_13 == 0)
                        goto label_142ae3804
                    
                    memset(rax_13, 0, count)
                    sub_142a7dcd0(rbx_1)
                    rbx_1 = rax_13
                    int64_t* var_110_3 = rbx_1
                    int64_t rsi_3 = 1
                    int64_t r12_2 = sx.q(r15_1)
                    
                    if (1 s< r12_2)
                        int32_t r15_3 = 0
                        
                        do
                            sub_142ac33b0(&var_f0, r15_3, arg3)
                            *(rax_13 + (rsi_3 << 2)) =
                                sub_142ae22c0(arg1, sub_142a9c7e0(arg3, &var_88))
                            sub_142a47ff0(&var_88)
                            r15_3 += 1
                            rsi_3 += 1
                        while (rsi_3 s< r12_2)
                    
                    r12_1 = var_138_1
                    r14 = arg1
                    goto label_142ae3752
            
            if (strcmp(_Str1, "preferred") == 0)
                int32_t rax_18 = sub_142ae22c0(r14, sub_142a9c7e0(arg3, &var_88))
                r12_1 = rax_18
                var_138_1 = rax_18
                sub_142a47ff0(&var_88)
            
        label_142ae3752:
            int32_t rax_20 = var_128_1 + 1
            var_128_1 = rax_20
            i = sub_142ac2da0(&var_d8, rax_20, &_Str1_1, arg3)
        while (i != 0)
        
        if (r15_1 s<= 1)
            goto label_142ae378d
        
        if (r12_1 == 0xffffffff)
            r12_1 = *(rbx_1 + 4)
        
        *rbx_1 = r12_1
        goto label_142ae37c6

__security_check_cookie(rax_1 ^ &var_158)
return result
