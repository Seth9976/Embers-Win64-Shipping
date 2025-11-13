// 函数: sub_142ada050
// 地址: 0x142ada050
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_90 = -2
void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
void* rdi = arg5
int32_t rbp = 0
uint64_t r14 = 0xffffffff
struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_88 =
    &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
int16_t var_80 = 2
int32_t rbx = 0
int32_t rsi_1

if (arg6 s<= 0)
    rsi_1 = neg.d(arg3)
else
    do
        int32_t rax_3 = sub_142ada3a0(arg2, arg3, rdi)
        
        if (rax_3 s> rbp)
            rbp = rax_3
            r14 = zx.q(rbx)
        
        rbx += 1
        rdi += 0x40
    while (rbx s< arg6)
    
    if (r14.d s< 0)
        rsi_1 = neg.d(arg3)
    else
        sub_142a6c030(arg7, arg4, (r14 * 3).d)
        rsi_1 = arg3 + rbp

sub_142a47ff0(&var_88)
__security_check_cookie(rax_1 ^ &var_b8)
return zx.q(rsi_1)
