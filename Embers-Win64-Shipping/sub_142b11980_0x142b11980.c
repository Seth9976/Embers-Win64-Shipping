// 函数: sub_142b11980
// 地址: 0x142b11980
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_98
int64_t rax_1 = __security_cookie ^ &var_98
struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_78
struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rax_3 =
    sub_142b114e0(*(arg1 + 0x50) + (sx.q(arg2) << 3), &var_78, arg1 + 0x10)
char rcx_1 = (rax_3[1].w).b
void* rdi

if ((rcx_1 & 0x11) == 0)
    rdi = rax_3 + 0xa
    
    if ((rcx_1 & 2) == 0)
        rdi = rax_3[3]
else
    rdi = nullptr

int32_t rsi_1 = *(arg1 + 0x6c) + arg4

if (sub_142b11270(arg1, rsi_1) != 0)
    int32_t rax_6 = *(arg1 + 0x68) - rsi_1
    *(arg1 + 0x6c) = rsi_1
    sub_142a8bca0(*(arg1 + 0x60) + (sx.q(rax_6) << 1), rdi + (sx.q(arg3) << 1), arg4)

int32_t rbx_1 = *(arg1 + 0x6c)
sub_142a47ff0(&var_78)
__security_check_cookie(rax_1 ^ &var_98)
return zx.q(rbx_1)
