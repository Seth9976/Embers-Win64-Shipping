// 函数: sub_142b52a70
// 地址: 0x142b52a70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_90 = -2
void var_c8
int64_t rax_1 = __security_cookie ^ &var_c8
sub_142a4ab40(arg5)
struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_88

if (arg3 == 1)
    void* rax_7 = sub_142acf980(arg2)
    
    if (rax_7 != 0)
        sub_142b52e80(arg1, sub_142a47a60(&var_88, 1, rax_7, 0xffffffff), arg5)
        sub_142a47ff0(&var_88)
else if (arg3 == 2 || arg3 == 4)
    sub_142b52270(arg1, arg2, arg3, arg4, arg5)
    
    if ((*(arg5 + 8) & 0xffe0) == 0)
        void* rax_5 = sub_142acf980(arg2)
        
        if (rax_5 != 0)
            sub_142b52e80(arg1, sub_142a47a60(&var_88, 1, rax_5, 0xffffffff), arg5)
            sub_142a47ff0(&var_88)
__security_check_cookie(rax_1 ^ &var_c8)
return arg5
