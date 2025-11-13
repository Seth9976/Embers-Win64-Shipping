// 函数: sub_142a68720
// 地址: 0x142a68720
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_2d8 = -2
void var_2f8
int64_t rax_1 = __security_cookie ^ &var_2f8
struct icu_64::UObject::icu_64::Locale::VTable* var_1a8
sub_142a459c0(&var_1a8)
struct icu_64::UObject::icu_64::Locale::VTable* var_288
sub_142a459c0(&var_288)
(*(*arg2 + 0x58))(arg2, &var_1a8)
(*(*arg2 + 0x50))(arg2, &var_288)
struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_2c8 =
    &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
int16_t var_2c0 = 2
(*(*arg2 + 0x20))(arg2, &var_2c8)
char var_c8[0xa0]
sub_142a69be0(&var_2c8, &var_c8, 0x9d)
uint64_t result = 0

if (*arg4 s<= 0)
    int32_t rsi_1 = 0
    int64_t rdi_1 = 0
    char const (** const rax_5)[0xa] = &data_14363ee70
    
    while (sub_142a862b0(&var_c8, *rax_5, rax_5.d) != 0)
        rsi_1 += 1
        rdi_1 += 1
        rax_5 = &(&data_14363ee70)[rdi_1]
        
        if (*rax_5 == 0)
            rsi_1 = -1
            break
    
    if (rsi_1 != 0xffffffff)
        int64_t rdi_2 = 0
        char const (** const rax_7)[0xa] = &data_14363ee70
        
        while (sub_142a862b0(&var_c8, *rax_7, rax_7.d) != 0)
            result = zx.q(result.d + 1)
            rdi_2 += 1
            rax_7 = &(&data_14363ee70)[rdi_2]
            
            if (*rax_7 == 0)
                result = 0xffffffff
                break
        
        result = sub_142a68c00(result.d, &var_288, arg4)

sub_142a47ff0(&var_2c8)
sub_142a45a20(&var_288)
sub_142a45a20(&var_1a8)
__security_check_cookie(rax_1 ^ &var_2f8)
return result
