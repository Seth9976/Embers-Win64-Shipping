// 函数: sub_140a79a30
// 地址: 0x140a79a30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_78
int64_t rax_1 = __security_cookie ^ &var_78
struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_58 =
    &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
int16_t var_50 = 2
sub_142a508a0(arg1 + 8, &var_58)
*arg2 = 0
arg2[1] = 0
int32_t rbx_1
int32_t var_4c

if (var_50 s< 0)
    rbx_1 = var_4c
else
    rbx_1 = sx.d(var_50) s>> 5

if (rbx_1 s> 0)
    if (rbx_1 + 1 s> 0)
        arg2[1].d = rbx_1 + 1
        sub_140594770(arg2)
    else if (rbx_1 + 1 s< 0 && rbx_1 != 0xffffffff)
        arg2[1].d = rbx_1 + 1
        sub_1405a50a0(arg2)
    
    char rax_4 = var_50.b
    void* rdx_2
    
    if ((rax_4 & 0x11) == 0)
        void var_4e
        rdx_2 = &var_4e
        void* var_40
        
        if ((rax_4 & 2) == 0)
            rdx_2 = var_40
    else
        rdx_2 = nullptr
    
    int64_t rbx_2 = sx.q(rbx_1) * 2
    memcpy(*arg2, rdx_2, rbx_2.d)
    *(rbx_2 + *arg2) = 0

sub_142a47ff0(&var_58)
__security_check_cookie(rax_1 ^ &var_78)
return arg2
