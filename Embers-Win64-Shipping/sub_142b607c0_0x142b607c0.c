// 函数: sub_142b607c0
// 地址: 0x142b607c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_78 = -2
void var_98
int64_t rax_1 = __security_cookie ^ &var_98
struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_68 =
    &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
int16_t var_60 = 2
sub_142aa8370(arg2, arg3, &var_68, arg4)

if (*arg4 s<= 0)
    char rax_4 = var_60.b
    void* rdx_1
    
    if ((rax_4 & 0x11) == 0)
        void var_5e
        rdx_1 = &var_5e
        void* var_50
        
        if ((rax_4 & 2) == 0)
            rdx_1 = var_50
    else
        rdx_1 = nullptr
    
    int64_t* rcx_1 = *arg1
    (*(*rcx_1 + 0x20))(rcx_1, rdx_1)
    int32_t rax_8
    int32_t var_5c
    
    if (var_60 s< 0)
        rax_8 = var_5c
    else
        rax_8 = sx.d(var_60) s>> 5
    arg1[1].d += rax_8

sub_142a47ff0(&var_68)
__security_check_cookie(rax_1 ^ &var_98)
return &icu_64::UObject::`vftable'
