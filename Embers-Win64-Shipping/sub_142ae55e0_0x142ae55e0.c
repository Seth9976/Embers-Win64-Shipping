// 函数: sub_142ae55e0
// 地址: 0x142ae55e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_120 = -2
void var_188
uint64_t result = __security_cookie ^ &var_188
uint64_t result_1 = result
void* r10 = arg2
int32_t rsi = *(arg4 + 8)
int64_t var_168
int32_t var_160
int64_t* rcx_26

if ((*(arg1 + 0x170) & 0xffe0) == 0)
    int64_t* rcx = *(arg1 + 0x160)
    (*(*rcx + 0xf8))(rcx, arg1 + 0x1a8)
    rcx_26 = *(arg1 + 0x160)
    result = (*(*rcx_26 + 0x48))(rcx_26, arg2, arg3, arg4, var_168, var_160)
else
    int32_t var_158
    
    if ((*(arg1 + 0x1b0) & 0xffe0) == 0 || *(arg1 + 0x1e8) == 0)
        int64_t r12
        r12.b = 0
        int32_t i = 0
        
        if (*(arg1 + 0x2d8) s> 0)
            int64_t rdi_4 = 0
            
            do
                if (r12.b != 0)
                    goto label_142ae5a66
                
                result = *(arg1 + 0x2e0)
                int64_t r9_6 = *(result + rdi_4 + 8)
                
                if (r9_6 != 0)
                    int32_t r8_9 = *(result + rdi_4 + 4)
                    var_160 = r8_9
                    var_168.d = 0
                    result = sub_142a48fb0(r10, rsi, r8_9, r9_6, var_168.d, var_160)
                    
                    if (result.b != 0)
                        r10 = arg2
                    else
                        var_158 = 0
                        r12.b = 1
                        sub_142a6c1a0(arg3, j_sub_142a4bbc0(), &var_158)
                        result =
                            (*(*arg3 + 0x28))(arg3, 5, zx.q(*(*(arg1 + 0x2e0) + rdi_4)), &var_158)
                        r10 = arg2
                        
                        if (var_158 s<= 0)
                            result = zx.q(*(*(arg1 + 0x2e0) + rdi_4 + 4) + rsi)
                            *(arg4 + 8) = result.d
                        else
                            *(arg4 + 0xc) = rsi
                
                i += 1
                rdi_4 += 0x10
            while (i s< *(arg1 + 0x2d8))
        
        if (*(arg1 + 0x2d8) s<= 0 || r12.b == 0)
            int64_t* rcx_25 = *(arg1 + 0x160)
            (*(*rcx_25 + 0xf8))(rcx_25, arg1 + 0x168)
            rcx_26 = *(arg1 + 0x160)
            result = (*(*rcx_26 + 0x48))(rcx_26, arg2, arg3, arg4, var_168, var_160)
    else
        struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_d8
        sub_142a479b0(&var_d8, arg2)
        struct icu_64::UObject::icu_64::FieldPosition::VTable* var_138 =
            &icu_64::FieldPosition::`vftable'{for `icu_64::UObject'}
        int32_t var_130_1 = 0xffffffff
        int64_t var_12c_1 = 0
        int32_t r12_1 = 0
        int32_t rdi_1 = 0
        int32_t var_154_1 = 0
        int32_t var_150 = 0
        int32_t r14_1 = 0
        struct icu_64::Replaceable::icu_64::UnicodeString::VTable* const* rcx_9
        int32_t rsi_1
        
        if (*(arg1 + 0x2d8) s<= 0)
            rsi_1 = 0
        label_142ae589b:
            struct icu_64::Replaceable::icu_64::UnicodeString::VTable* const var_98 =
                &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
            int16_t var_90_1 = 2
            sub_142b62a90(*(arg1 + 0x1e8), arg1 + 0x1a8, arg1 + 0x168, &var_98, &var_150)
            int64_t* rcx_17 = *(arg1 + 0x160)
            (*(*rcx_17 + 0xf8))(rcx_17, &var_98)
            int64_t* rcx_18 = *(arg1 + 0x160)
            (*(*rcx_18 + 0x48))(rcx_18, &var_d8, arg3, arg4)
            int32_t rcx_19 = *(arg4 + 0xc)
            uint8_t rdx_13 = (rcx_19 u>> 0x1f).b
            
            if (rdx_13 != 0)
                rcx_19 = *(arg4 + 8)
            
            if (rcx_19 s>= rdi_1 + r12_1)
                rcx_19 += rsi_1 - rdi_1
            else if (rcx_19 s>= r12_1)
                rcx_19 = r12_1
            
            if (rdx_13 == 0)
                *(arg4 + 0xc) = rcx_19
            else
                *(arg4 + 8) = rcx_19
            
            rcx_9 = &var_98
        else
            int64_t rdi_2 = 0
            int32_t rax_6
            
            while (true)
                int64_t rax_2 = *(arg1 + 0x2e0)
                int64_t r10_1 = *(rdi_2 + rax_2 + 8)
                
                if (r10_1 != 0)
                    int32_t rdx_1 = rsi
                    int32_t var_cc
                    int32_t rax_3 = var_cc
                    int16_t var_d0
                    
                    if (rsi s>= 0)
                        int32_t r8_2
                        
                        if (var_d0 s< 0)
                            r8_2 = rax_3
                        else
                            r8_2 = sx.d(var_d0) s>> 5
                        
                        if (rsi s> r8_2)
                            if (var_d0 s< 0)
                                rdx_1 = rax_3
                            else
                                rdx_1 = sx.d(var_d0) s>> 5
                    else
                        rdx_1 = 0
                    
                    if (var_d0 s>= 0)
                        rax_3 = sx.d(var_d0) s>> 5
                    
                    var_168.d = rdx_1
                    rax_6 = sub_142a4a330(&var_d8, r10_1, 0, zx.q(*(rdi_2 + rax_2 + 4)), var_168.d, 
                        rax_3 - rdx_1)
                    
                    if (rax_6 s>= rsi)
                        break
                
                r14_1 += 1
                rdi_2 += 0x10
                
                if (r14_1 s>= *(arg1 + 0x2d8))
                    rdi_1 = var_154_1
                    rsi_1 = rdi_1
                    r12_1 = rdi_1
                    goto label_142ae589b
            
            struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_118 =
                &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
            int16_t var_110_1 = 2
            int64_t* rax_8 = (*(*arg3 + 0x10))(arg3)
            sub_142a6c1a0(rax_8, j_sub_142a4bbc0(), &var_150)
            int64_t r14_3 = sx.q(r14_1) * 2
            (*(*rax_8 + 0x28))(rax_8, 5, zx.q(*(*(arg1 + 0x2e0) + (r14_3 << 3))), &var_150)
            
            if (var_150 s<= 0)
                int64_t* rcx_10 = *(arg1 + 0x160)
                (*(*rcx_10 + 0xf8))(rcx_10, arg1 + 0x168)
                int64_t* rcx_11 = *(arg1 + 0x160)
                (*(*rcx_11 + 0x40))(rcx_11, rax_8, &var_118, &var_138)
                var_158 = rax_6
                rsi_1 = *(*(arg1 + 0x2e0) + (r14_3 << 3) + 4)
                int32_t var_10c
                int32_t rax_13 = var_10c
                int32_t var_154_2
                
                if (var_110_1 s< 0)
                    var_154_2 = rax_13
                else
                    var_154_2 = sx.d(var_110_1) s>> 5
                
                if (var_110_1 s>= 0)
                    rax_13 = sx.d(var_110_1) s>> 5
                
                var_168.d = 0
                sub_142a49310(&var_d8, rax_6, rsi_1, &var_118, var_168.d, rax_13)
                (**rax_8)(rax_8, 1)
                sub_142a47ff0(&var_118)
                rdi_1 = var_154_2
                r12_1 = var_158
                goto label_142ae589b
            
            *(arg4 + 0xc) = rsi
            (**rax_8)(rax_8, 1)
            rcx_9 = &var_118
        sub_142a47ff0(rcx_9)
        sub_142aa8290(&var_138)
        result = sub_142a47ff0(&var_d8)
label_142ae5a66:
__security_check_cookie(result_1 ^ &var_188)
return result
