// 函数: sub_142b33da0
// 地址: 0x142b33da0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_150 = -2
void var_198
int64_t rax_1 = __security_cookie ^ &var_198
uint64_t result

if (*(arg1 + 0x68) == 0)
    int64_t* rcx_23 = *(arg1 + 0x60)
    
    if ((*(*rcx_23 + 0xc0))(rcx_23) != 0)
        result = sub_142b34180(arg1, arg2, arg3, arg4, arg5)
    else
        int16_t rax_22 = *(arg3 + 8)
        int32_t rax_24
        
        if (rax_22 s< 0)
            rax_24 = *(arg3 + 0xc)
        else
            rax_24 = sx.d(rax_22) s>> 5
        
        *arg5 = rax_24
        result = sub_142b2e4e0(arg2, arg3, arg4)
else
    struct icu_64::UObject::icu_64::Formattable::VTable* var_c8
    sub_142aa7770(&var_c8)
    struct icu_64::UObject::icu_64::FieldPosition::VTable* var_168 =
        &icu_64::FieldPosition::`vftable'{for `icu_64::UObject'}
    int32_t var_160_1 = 0
    int32_t var_158_1 = 0
    sub_142b2e5c0(*(arg1 + 0x68), arg2, arg1, &var_c8, &var_168)
    int32_t result_1
    
    if (arg4 s< 0)
        *arg5 = 0
        result_1 = -1
    else
        int32_t rcx_2 = 0
        int16_t rax_2 = *(arg1 + 0x18)
        int32_t rdx_2
        
        if (rax_2 s< 0)
            rdx_2 = *(arg1 + 0x1c)
        else
            rdx_2 = sx.d(rax_2) s>> 5
        
        if (rdx_2 s< 0)
            if (rax_2 s< 0)
                rcx_2 = *(arg1 + 0x1c)
            else
                rcx_2 = sx.d(rax_2) s>> 5
        
        int32_t rdx_4
        
        if (rax_2 s< 0)
            rdx_4 = *(arg1 + 0x1c)
        else
            rdx_4 = sx.d(rax_2) s>> 5
        
        struct icu_64::UObject::icu_64::FieldPosition::VTable** var_178_1
        var_178_1.d = rcx_2
        int32_t rax_3 =
            sub_142a4a330(arg1 + 0x10, &data_14366bff8, 0, 0xffffffff, var_178_1.d, rdx_4 - rcx_2)
        int32_t rcx_5 = rax_3
        
        if (rax_3 s>= 0)
            int16_t rax_4 = *(arg1 + 0x18)
            int32_t rdx_7
            
            if (rax_4 s< 0)
                rdx_7 = *(arg1 + 0x1c)
            else
                rdx_7 = sx.d(rax_4) s>> 5
            
            if (rax_3 s> rdx_7)
                if (rax_4 s< 0)
                    rcx_5 = *(arg1 + 0x1c)
                else
                    rcx_5 = sx.d(rax_4) s>> 5
        else
            rcx_5 = 0
        
        int16_t rax_5 = *(arg1 + 0x18)
        int32_t rax_7
        
        if (rax_5 s< 0)
            rax_7 = *(arg1 + 0x1c)
        else
            rax_7 = sx.d(rax_5) s>> 5
        
        var_178_1.d = rcx_5
        int32_t rax_9 =
            sub_142a4a330(arg1 + 0x10, &data_14366c000, 0, 0xffffffff, var_178_1.d, rax_7 - rcx_5)
        int32_t r13_2 = var_158_1 - arg4
        struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_148
        sub_142a4ad20(arg1 + 0x10, &var_148, 0, rax_3)
        struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_108
        sub_142a4ad20(arg1 + 0x10, &var_108, rax_9 + 2, 0x7fffffff)
        int32_t var_13c
        int32_t rcx_10 = var_13c
        int16_t var_140
        int16_t rdx_10 = var_140
        int32_t rax_11
        
        if (rdx_10 s< 0)
            rax_11 = rcx_10
        else
            rax_11 = sx.d(rdx_10) s>> 5
        
        int32_t r10_2
        
        if (rdx_10 s< 0)
            r10_2 = rcx_10
        else
            r10_2 = sx.d(rdx_10) s>> 5
        
        int32_t r8_3
        
        if (rdx_10 s< 0)
            r8_3 = rcx_10
        else
            r8_3 = sx.d(rdx_10) s>> 5
        
        char rax_12
        
        if ((rdx_10.b & 1) == 0)
            if (rdx_10 s>= 0)
                rcx_10 = sx.d(rdx_10) s>> 5
            
            int32_t r11_1 = 0
            
            if (rcx_10 s< 0)
                r11_1 = rcx_10
            
            if (rax_11 s>= 0)
                int32_t rcx_12 = rcx_10 - r11_1
                
                if (rax_11 s> rcx_12)
                    rax_11 = rcx_12
            else
                rax_11 = 0
            
            void var_13e
            void* r9_2 = &var_13e
            void* var_130
            
            if ((rdx_10.b & 2) == 0)
                r9_2 = var_130
            var_178_1.d = r11_1
            rax_12 = sub_142a48fb0(arg2, arg4 - r8_3, r10_2, r9_2, var_178_1.d, rax_11)
            rcx_10 = var_13c
            rdx_10 = var_140
        else
            rax_12 = not.b(*(arg2 + 8)) & 1
        
        int32_t rax_13
        int16_t r8_5
        char r9_3
        
        if (rax_12 == 0)
            int32_t var_fc
            rax_13 = var_fc
            int16_t var_100
            r8_5 = var_100
            int32_t r10_4
            
            if (r8_5 s< 0)
                r10_4 = rax_13
            else
                r10_4 = sx.d(r8_5) s>> 5
            
            int32_t r11_3
            
            if (r8_5 s< 0)
                r11_3 = rax_13
            else
                r11_3 = sx.d(r8_5) s>> 5
            
            if ((r8_5.b & 1) == 0)
                if (r8_5 s>= 0)
                    rax_13 = sx.d(r8_5) s>> 5
                
                int32_t rcx_14 = 0
                
                if (rax_13 s< 0)
                    rcx_14 = rax_13
                
                if (r10_4 s>= 0)
                    int32_t rax_15 = rax_13 - rcx_14
                    
                    if (r10_4 s> rax_15)
                        r10_4 = rax_15
                else
                    r10_4 = 0
                
                void var_fe
                void* r9_4 = &var_fe
                void* var_f0
                
                if ((r8_5.b & 2) == 0)
                    r9_4 = var_f0
                var_178_1.d = rcx_14
                r9_3 = sub_142a48fb0(arg2, arg4 + r13_2, r11_3, r9_4, var_178_1.d, r10_4)
                rcx_10 = var_13c
                rdx_10 = var_140
                rax_13 = var_fc
                r8_5 = var_100
            else
                r9_3 = not.b(*(arg2 + 8)) & 1
        
        if (rax_12 != 0 || r9_3 != 0)
            sub_142a47ff0(&var_108)
            sub_142a47ff0(&var_148)
            *arg5 = 0
            result_1 = -1
        else
            int32_t r9_6
            
            if (rdx_10 s< 0)
                r9_6 = rcx_10
            else
                r9_6 = sx.d(rdx_10) s>> 5
            
            if (r8_5 s>= 0)
                rax_13 = sx.d(r8_5) s>> 5
            
            *arg5 = rax_13 + r9_6 + r13_2
            
            if (rdx_10 s>= 0)
                rcx_10 = sx.d(rdx_10) s>> 5
            
            result_1 = arg4 - rcx_10
            sub_142a47ff0(&var_108)
            sub_142a47ff0(&var_148)
    
    sub_142aa8290(&var_168)
    sub_142aa7840(&var_c8)
    result = zx.q(result_1)

__security_check_cookie(rax_1 ^ &var_198)
return result
