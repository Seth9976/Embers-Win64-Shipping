// 函数: sub_142b300a0
// 地址: 0x142b300a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_310 = -2
void var_348
int64_t rax_1 = __security_cookie ^ &var_348
int32_t* r15 = arg2
arg2.b = 1
struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_248
struct icu_64::UnicodeFilter::icu_64::UnicodeSet::VTable* var_208
sub_142b661f0(&var_208, sub_142a47a60(&var_248, arg2.b, u"[:NFD_QC=N:]", 0xffffffff), r15)
sub_142a47ff0(&var_248)

if (*r15 s<= 0)
    sub_142aa0040(&var_208, 0xac00, 0xd7a3)
    struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_288 =
        &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
    int16_t var_280_1 = 2
    struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_2c8 =
        &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
    int16_t var_2c0_1 = 2
    void var_308
    sub_142b18760(&var_308, &var_208)
    
    if (sub_142b18960(&var_308) != 0)
        char i
        
        do
            int64_t* rcx_6 = *(arg1 + 8)
            int32_t var_300
            (*(*rcx_6 + 0x30))(rcx_6, zx.q(var_300), &var_2c8)
            int32_t rax_5 = sub_142b7fa60(*(arg1 + 0x48), &var_2c8, arg1 + 0x128, 0)
            *(arg1 + 0x220) = rax_5
            
            if (rax_5 s<= 0x1f)
                void* rax_6 = sub_142b18860(&var_308)
                int64_t rdi_1 = sx.q(*(arg1 + 0x220))
                int64_t var_138[0x20]
                
                if (*r15 s<= 0)
                    if (rdi_1.d != sub_142b7f9b0(*(arg1 + 0x48), &var_288, rax_6, &var_138, 0))
                    label_142b30220:
                        int64_t* rcx_11 = *(arg1 + 0x48)
                        int32_t rax_10 =
                            (*(*rcx_11 + 0x18))(rcx_11, arg1 + 0x128, zx.q(rdi_1.d), r15)
                        int32_t var_328_1
                        var_328_1.q = r15
                        sub_142b7ced0(*(arg1 + 0x48), &var_288, rax_6, rax_10, var_328_1)
                    else
                        int64_t rax_8 = 0
                        
                        if (rdi_1.d s> 0)
                            while (*(&var_138 + arg1 + 0x128 - &var_138 + (rax_8 << 3))
                                    == var_138[rax_8])
                                rax_8 += 1
                                
                                if (rax_8 s>= rdi_1)
                                    goto label_142b30254
                            
                            goto label_142b30220
            
        label_142b30254:
            i = sub_142b18960(&var_308)
        while (i != 0)
    
    sub_142b187a0(&var_308)
    sub_142a47ff0(&var_2c8)
    sub_142a47ff0(&var_288)

sub_142a9dbc0(&var_208)
__security_check_cookie(rax_1 ^ &var_348)
return &icu_64::UObject::`vftable'
