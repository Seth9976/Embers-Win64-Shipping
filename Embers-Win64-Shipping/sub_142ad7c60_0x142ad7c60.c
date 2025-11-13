// 函数: sub_142ad7c60
// 地址: 0x142ad7c60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_78 = -2
void var_a8
void* result = __security_cookie ^ &var_a8
void* result_1 = result
int64_t rbx = sx.q(arg2)

if (rbx.d s>= 0 && rbx.d s< arg4)
    if (arg5 != 0)
        void** var_68 = &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
        int16_t var_60_1 = 2
        sub_142b62570(&var_68, arg5, 1, 1, arg6)
        sub_142b62c00(&var_68, (rbx << 6) + arg3, arg1, arg6)
        result = j_sub_142a47ff0(&var_68)
    else
        void* rdx_3 = (rbx << 6) + arg3
        int16_t rax_1 = *(rdx_3 + 8)
        int32_t r9_1
        
        if (rax_1 s< 0)
            r9_1 = *(rdx_3 + 0xc)
        else
            r9_1 = sx.d(rax_1) s>> 5
        
        result = sub_142a48d00(arg1, rdx_3, 0, r9_1)

__security_check_cookie(result_1 ^ &var_a8)
return result
