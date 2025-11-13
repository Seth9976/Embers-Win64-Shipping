// 函数: sub_142ab5460
// 地址: 0x142ab5460
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_d0 = -2
void var_108
int64_t rax_1 = __security_cookie ^ &var_108
struct icu_64::Replaceable::icu_64::UnicodeString::VTable** result = arg2
int32_t var_e0 = 0
struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_c8 =
    &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
int16_t var_c0 = 2
int16_t var_e8

if ((data_143ccaf50 & *(arg1 + 0x14)) != 0)
    var_e8 = 0x2d
    sub_142a48d70(&var_c8, &var_e8, 0, 1)

int32_t rax_3 = *(arg1 + 0x10)

if (rax_3 != 0)
    uint64_t r12_1 = zx.q(rax_3 - 1)
    
    if (*(arg1 + 0x40) == 0)
        if (r12_1.d u> 0xf)
            arg2.b = 0
        else
            arg2.b = (*(arg1 + 0x30) u>> (r12_1 << 2).b).b & 0xf
    else if (r12_1.d s< 0 || r12_1.d s>= rax_3)
        arg2.b = 0
    else
        arg2 = zx.q(*(sx.q(r12_1.d) + *(arg1 + 0x30)))
    
    sub_142a48580(&var_c8, sx.d(arg2.b) + 0x30)
    uint64_t rdi_1 = zx.q((r12_1 - 1).d)
    
    if (rdi_1.d s>= 0)
        var_e8 = 0x2e
        sub_142a48d70(&var_c8, &var_e8, 0, 1)
        int64_t r14_1 = sx.q(rdi_1.d)
        
        if (rdi_1.d s>= 0)
            uint32_t r15_1 = (rdi_1 << 2).d
            int32_t rsi_1 = rdi_1.d
            int64_t temp0_1
            
            do
                uint8_t rdx_5
                
                if (*(arg1 + 0x40) == 0)
                    if (rsi_1 u> 0xf)
                        rdx_5 = 0
                    else
                        rdx_5 = (*(arg1 + 0x30) u>> r15_1.b).b & 0xf
                else if (rdi_1.d s< 0 || rdi_1.d s>= *(arg1 + 0x10))
                    rdx_5 = 0
                else
                    rdx_5 = *(r14_1 + *(arg1 + 0x30))
                
                sub_142a48580(&var_c8, sx.d(rdx_5) + 0x30)
                rdi_1 = zx.q(rdi_1.d - 1)
                rsi_1 -= 1
                r15_1 -= 4
                temp0_1 = r14_1
                r14_1 -= 1
            while (temp0_1 - 1 s>= 0)
    
    var_e8 = 0x45
    sub_142a48d70(&var_c8, &var_e8, 0, 1)
    int32_t quot = r12_1.d + *(arg1 + 0xc)
    
    if (quot != 0x80000000)
        if (quot s>= 0)
            var_e8 = 0x2b
        else
            quot = neg.d(quot)
            var_e8 = 0x2d
        
        sub_142a48d70(&var_c8, &var_e8, 0, 1)
        
        if (quot == 0)
            var_e8 = 0x30
            sub_142a48d70(&var_c8, &var_e8, 0, quot + 1)
        
        int32_t rdi_3
        int32_t var_bc
        
        if (var_c0 s< 0)
            rdi_3 = var_bc
        else
            rdi_3 = sx.d(var_c0) s>> 5
        
        while (quot s> 0)
            ldiv_t_1 rax_9 = div(quot, 0xa)
            quot = rax_9.quot
            ldiv_t_1 r9_4
            r9_4.quot = rax_9.quot
            r9_4.rem = rax_9.rem
            sub_142a4a6b0(&var_c8, rdi_3, 0, (r9_4 u>> 0x20).d + 0x30)
    else
        struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_88
        sub_142a47f60(&var_88, u"-2147483648", 0xffffffff)
        int16_t var_80
        int32_t r9_2
        int32_t var_7c
        
        if (var_80 s< 0)
            r9_2 = var_7c
        else
            r9_2 = sx.d(var_80) s>> 5
        sub_142a48d00(&var_c8, &var_88, 0, r9_2)
        sub_142a47ff0(&var_88)
else
    sub_142a48d70(&var_c8, u"0E+0", 0, 0xffffffff)

sub_142a47930(result, &var_c8)
sub_142a47ff0(&var_c8)
__security_check_cookie(rax_1 ^ &var_108)
return result
