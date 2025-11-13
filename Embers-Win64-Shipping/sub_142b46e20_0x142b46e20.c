// 函数: sub_142b46e20
// 地址: 0x142b46e20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r14
int64_t var_38 = r14
int64_t var_128 = -2
void var_1c8
int64_t rax_1 = __security_cookie ^ &var_1c8
char result

if (sub_142ab9920(arg3) == 0 || arg4 != 0)
    int32_t rax_2 = sub_1408e52c0(arg2)
    struct icu_64::IFixedDecimal::icu_64::number::impl::DecimalQuantity::VTable* var_178
    sub_142ab2be0(&var_178)
    char var_170_1 = 1
    int32_t rsi_1 = 0
    int32_t var_188_1 = 0
    struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_d8 =
        &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
    int16_t var_d0_1 = 2
    struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_118 =
        &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
    int16_t var_110_1 = 2
    sub_142a4ab40(&var_d8)
    sub_142a4ab40(&var_118)
    int32_t var_194_1 = 0
    int32_t var_198_1 = 0
    int32_t r12_1 = 0
    int32_t var_1a8_1 = 0
    int32_t rbx_1 = -1
    int32_t var_190_1 = 0xffffffff
    int32_t var_19c_1 = 0xffffffff
    int32_t var_1a4_1 = 0xffffffff
    int32_t rax_5
    struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rcx_8
    uint64_t rbx_8
    int32_t rsi_3
    int32_t rdi_2
    int32_t r8_1
    int32_t r9_1
    int32_t r10_1
    
    if (sub_142b467c0(arg2) s> 0)
        while (true)
            r14.b = 0
            int32_t rax_4 = sub_142b465f0(arg2)
            rax_5, rcx_8 = sub_142a54580(rax_4)
            int32_t rdi_1
            
            if (rax_5.b != 0)
                int32_t rdx
                rdx.b = rax_4 u> 0xffff
                sub_142b464f0(arg2, rdx + 1)
                int32_t rdx_1
                rdx_1.b = 0xa
                rax_5, rcx_8 = sub_142a53ea0(rax_4, rdx_1.b)
                rdi_1 = rax_5
                
                if (rax_5.b == 0xff)
                    goto label_142b46f40
                
            label_142b46fb6:
                
                if (rdi_1.b s< 0)
                    goto label_142b47006
                
                if (var_170_1 != 0)
                    var_170_1 = 0
                    sub_142ab3230(&var_178)
                
                sub_142ab3100(&var_178, rdi_1.b, 0, 1)
                r12_1 += 1
                var_1a8_1 = r12_1
                rdi_2 = var_198_1
                
                if ((var_110_1.b & 1) == 0)
                    var_188_1 = rsi_1 + 1
                
                goto label_142b4730b
            
        label_142b46f40:
            
            if (*(arg1 + 0xc0) != 0)
                rdi_1 = 0
                
                while (true)
                    void* rbx_5 = (sx.q(rdi_1) << 6) + *(arg1 + 0xc0)
                    
                    if ((*(rbx_5 + 8) & 0xffe0) != 0)
                        rsi_1 = sub_142b46670(arg2, rbx_5)
                        int16_t rcx_12 = *(rbx_5 + 8)
                        
                        if (rcx_12 s< 0)
                            rcx_8 = zx.q(*(rbx_5 + 0xc))
                        else
                            rcx_8 = zx.q(sx.d(rcx_12) s>> 5)
                        
                        if (rsi_1 == rcx_8.d)
                            sub_142b464f0(arg2, rsi_1)
                            rsi_1 = var_188_1
                            break
                        
                        if (r14.b == 0)
                            rax_5 = sub_142b467c0(arg2)
                        
                        if (r14.b != 0 || rsi_1 == rax_5)
                            r14.b = 1
                    
                    rdi_1 += 1
                    
                    if (rdi_1 s>= 0xa)
                        goto label_142b47006
                
                goto label_142b46fb6
            
        label_142b47006:
            r12_1.b = 0
            rsi_1.b = 0
            
            if ((var_110_1.b & 1) != 0 && (*(arg1 + 0x58) & 0xffe0) != 0)
                int32_t rax_6
                rax_6, rcx_8 = sub_142b46670(arg2, arg1 + 0x50)
                int32_t rax_7
                
                if (r14.b == 0)
                    rax_7 = sub_142b467c0(arg2)
                
                if (r14.b != 0 || rax_6 == rax_7)
                    r14.b = 1
                
                int16_t rax_8 = *(arg1 + 0x58)
                
                if (rax_8 s< 0)
                    rax_5 = *(arg1 + 0x5c)
                else
                    rax_5 = sx.d(rax_8) s>> 5
                
                if (rax_6 == rax_5)
                    r12_1.b = 1
                    rax_5, rcx_8 = sub_142a48100(&var_118, arg1 + 0x50)
            
            int32_t var_cc
            
            if ((var_d0_1.b & 1) == 0)
                int32_t rax_10 = sub_142b46670(arg2, &var_d8)
                int32_t rax_11
                
                if (r14.b == 0)
                    rax_11 = sub_142b467c0(arg2)
                
                if (r14.b != 0 || rax_10 == rax_11)
                    r14.b = 1
                
                if (var_d0_1 s< 0)
                    rcx_8 = zx.q(var_cc)
                else
                    rcx_8 = zx.q(sx.d(var_d0_1) s>> 5)
                
                rsi_1 = 0
                
                if (rax_10 == rcx_8.d)
                    rsi_1 = 1
            
            struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_98
            int32_t rbx_7
            
            if (*(arg1 + 9) != 0 || (var_d0_1.b & 1) == 0 || (var_110_1.b & 1) == 0
                || (*(arg1 + 0x18) & 0xffe0) == 0)
            label_142b47117:
                
                if (rsi_1.b != 0)
                    rbx_7 = rax_4
                else
                    rbx_7 = rax_4
                    
                    if ((var_110_1.b & 1) != 0)
                        rax_5, rcx_8 = sub_142a9f280(*(arg1 + 0x98), zx.q(rbx_7))
                        
                        if (rax_5.b != 0)
                            r12_1.b = 1
                            sub_142a48050(&var_118, sub_142a47b70(&var_98, rbx_7))
                            sub_142a47ff0(&var_98)
            else
                int32_t rax_13
                rax_13, rcx_8 = sub_142b46670(arg2, arg1 + 0x10)
                int32_t rax_14
                
                if (r14.b == 0)
                    rax_14 = sub_142b467c0(arg2)
                
                if (r14.b != 0 || rax_13 == rax_14)
                    r14.b = 1
                
                int16_t rax_15 = *(arg1 + 0x18)
                
                if (rax_15 s< 0)
                    rax_5 = *(arg1 + 0x1c)
                else
                    rax_5 = sx.d(rax_15) s>> 5
                
                if (rax_13 != rax_5)
                    goto label_142b47117
                
                rsi_1.b = 1
                rax_5, rcx_8 = sub_142a48100(&var_d8, arg1 + 0x10)
                rbx_7 = rax_4
            
            if (*(arg1 + 9) == 0 && (var_d0_1.b & 1) != 0 && (var_110_1.b & 1) != 0)
                rax_5, rcx_8 = sub_142a9f280(*(arg1 + 0x90), zx.q(rbx_7))
                
                if (rax_5.b != 0)
                    rsi_1.b = 1
                    sub_142a48050(&var_d8, sub_142a47b70(&var_98, rbx_7))
                    sub_142a47ff0(&var_98)
            
            if (r12_1.b == 0)
                if (rsi_1.b == 0)
                    goto label_142b47345
                
                goto label_142b471c4
            
            if (*(arg1 + 0xa) != 0)
            label_142b47345:
                rdi_2 = var_198_1
            label_142b47349:
                rbx_8 = zx.q(var_1a8_1)
                
                if (rdi_2 != 2 && rbx_8.d == 0)
                    rbx_1 = var_190_1
                    break
            else
            label_142b471c4:
                rdi_2 = var_198_1
                
                if (rdi_2 != 2 || rsi_1.b == 0)
                    char rdx_16 = *(arg1 + 8)
                    
                    if (rdx_16 == 0)
                        if (var_19c_1 != 1)
                            rcx_8.b = 1
                        else
                            rcx_8.b = var_1a4_1 != 1
                    else if (var_19c_1 == 0xffffffff)
                        rcx_8.b = 1
                    else if (var_19c_1 == 0)
                        rcx_8 = zx.q(var_1a4_1)
                        
                        if (rcx_8.d == 0 || rcx_8.d s> sx.d(*(arg1 + 0xe)))
                            rcx_8.b = 0
                        else
                            rcx_8.b = 1
                    else if (var_19c_1 != 1)
                        rcx_8.b = 1
                    else
                        rcx_8.b = var_1a4_1 == sx.d(*(arg1 + 0xe))
                    
                    int32_t r8
                    
                    if (rdx_16 == 0)
                        if (rdi_2 != 1)
                            r8 = var_1a8_1
                            rax_5.b = 1
                        else
                            r8 = var_1a8_1
                            rax_5.b = r8 != rdi_2
                    else if (rdi_2 == 0xffffffff || rdi_2 == 0)
                        r8 = var_1a8_1
                        rax_5.b = 1
                    else
                        r8 = var_1a8_1
                        
                        if (rdi_2 != 1)
                            rax_5.b = 1
                        else
                            rax_5.b = r8 == sx.d(*(arg1 + 0xc))
                    
                    if (rcx_8.b == 0 || (r12_1.b != 0 && rax_5.b == 0))
                        if (rsi_1.b == 0)
                            if (*(arg1 + 8) == 0)
                                goto label_142b47349
                        else if (r8 == 0 || *(arg1 + 8) == 0)
                            goto label_142b47349
                        
                        rax_5, rcx_8 = sub_142ab3230(&var_178)
                        var_170_1 = 1
                        goto label_142b47349
                    
                    if (rdx_16 != 0 && r8 == 0 && rdi_2 == 1)
                        rbx_1 = var_190_1
                        break
                    
                    var_190_1 = var_194_1
                    var_1a4_1 = r8
                    int32_t rax_20 = rdi_2
                    
                    if (r12_1.b != 0)
                        rax_20 = -1
                    
                    var_19c_1 = rax_20
                    
                    if (r8 != 0)
                        var_194_1 = sub_1408e52c0(arg2)
                    
                    rdi_2 = sbb.d(rdi_2, rdi_2, rsi_1.b != 0) + 2
                    var_198_1 = rdi_2
                    r12_1 = 0
                    var_1a8_1 = 0
                    int32_t rdx_18
                    
                    if (rsi_1.b == 0)
                        int32_t var_10c
                        
                        if (var_110_1 s< 0)
                            rdx_18 = var_10c
                        else
                            rdx_18 = sx.d(var_110_1) s>> 5
                    else if (var_d0_1 s< 0)
                        rdx_18 = var_cc
                    else
                        rdx_18 = sx.d(var_d0_1) s>> 5
                    
                    sub_142b464f0(arg2, rdx_18)
                label_142b4730b:
                    
                    if (sub_142b467c0(arg2) s<= 0)
                        goto label_142b47349
                    
                    rsi_1 = var_188_1
                    continue
                
                rbx_8 = zx.q(var_1a8_1)
            
            r8_1 = var_19c_1
            rsi_3 = var_1a4_1
            r9_1 = var_194_1
            r10_1 = var_190_1
            goto label_142b47397
    
    r14.b = 1
    sub_14266cbe0(arg2, var_194_1)
    r9_1 = rbx_1
    rdi_2 = var_19c_1
    rbx_8 = zx.q(var_1a4_1)
    r10_1 = -1
    r8_1 = 0
    rsi_3 = 1
label_142b47397:
    char rdx_21 = *(arg1 + 8)
    
    if (rdx_21 == 0)
        if (r8_1 != 1)
            rcx_8.b = 1
        else
            rcx_8.b = rsi_3 != r8_1
    else if (r8_1 == 0xffffffff)
        rcx_8.b = 1
    else if (r8_1 != 0)
        if (r8_1 != 1)
            rcx_8.b = 1
        else
            rcx_8.b = rsi_3 == sx.d(*(arg1 + 0xe))
    else if (rsi_3 == 0 || rsi_3 s> sx.d(*(arg1 + 0xe)))
        rcx_8.b = 0
    else
        rcx_8.b = 1
    
    if (rdx_21 == 0)
        if (rdi_2 != 1)
            rax_5.b = 1
        else
            rax_5.b = rbx_8.d != rdi_2
    else if (rdi_2 == 0xffffffff || rdi_2 == 0 || rdi_2 != 1)
        rax_5.b = 1
    else
        rax_5.b = rbx_8.d == sx.d(*(arg1 + 0xc))
    
    if (rdx_21 == 0)
        if (rcx_8.b == 0)
            sub_14266cbe0(arg2, r10_1)
            rbx_8 = zx.q(rbx_8.d + rsi_3)
        label_142b4743c:
            
            if (rbx_8.d != 0)
                sub_142ab3060(&var_178, neg.d(rbx_8.d))
                sub_142ab5740(&var_178)
        else if (rax_5.b == 0 && (r8_1 != 0 || rsi_3 != 0))
            r14.b = 1
            sub_14266cbe0(arg2, r9_1)
            goto label_142b4743c
        
        rcx_8.b = 1
        rax_5 = 1
    
    if (rdi_2 == 2 || (rcx_8.b != 0 && rax_5.b != 0))
        if (var_170_1 != 0)
            goto label_142b4747b
        
        sub_142ab3060(&var_178, neg.d(var_188_1))
        int32_t rax_25
        
        if (arg4 != 0)
            rax_25 = sub_1408e52c0(arg2)
        
        if (arg4 == 0 || rax_25 == rax_2)
            rbx_8 = arg3
            sub_142ab2ce0(rbx_8, &var_178)
        else if (sub_142ab36d0(&var_178, 0) == 0)
            rbx_8 = arg3
        label_142b4750b:
            
            if (arg4 != 0xff)
                *(rbx_8 + 8) = 1
                *(rbx_8 + 0x4c) |= 0x80
            else
                sub_142ab3230(rbx_8)
        else
            int64_t rax_27 = sub_142ab5250(&var_178, 0)
            rbx_8 = arg3
            
            if (rax_27 s> 0x7fffffff)
                goto label_142b4750b
            
            if (sub_142ab3060(rbx_8, sx.d(arg4) * rax_27.d) != 0)
                goto label_142b4750b
        
        if ((var_110_1.b & 1) == 0)
            *(rbx_8 + 0x4c) |= 0x20
        
        sub_142ab9940(rbx_8, arg2)
        
        if (sub_142b467c0(arg2) == 0 || r14.b != 0)
            rbx_8.b = 1
        else
            rbx_8.b = 0
    else
        char var_170_2 = 1
    label_142b4747b:
        int32_t rax_24
        
        if (r14.b == 0)
            rax_24 = sub_142b467c0(arg2)
        
        if (r14.b != 0 || rax_24 == 0)
            rbx_8.b = 1
        else
            rbx_8.b = 0
        
        sub_14266cbe0(arg2, rax_2)
    
    sub_142a47ff0(&var_118)
    sub_142a47ff0(&var_d8)
    sub_142ab2c10(&var_178)
    result = rbx_8.b
else
    result = 0

__security_check_cookie(rax_1 ^ &var_1c8)
return result
