// 函数: sub_142ae4070
// 地址: 0x142ae4070
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_98
int64_t rax_1 = __security_cookie ^ &var_98
int32_t rsi = 0
int32_t var_78 = 0
arg1[0x191].d = 0
int32_t result

do
    result = (*(*arg1 + 8))(arg1, arg2, zx.q(rsi), &var_78)
    
    if (result != 1)
        break
    
    int64_t rdx_1 = sx.q(arg1[0x191].d)
    arg1[0x191].d = (rdx_1 + 1).d
    struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_68
    sub_142a48050(&arg1[1 + rdx_1 * 8], 
        Concurrency::details::_SyncOriginator<uint64_t>::_SyncOriginator<uint64_t>(&var_68, arg2, 
            rsi, var_78))
    result = sub_142a47ff0(&var_68)
    rsi += var_78
while (arg1[0x191].d s< 0x32)

__security_check_cookie(rax_1 ^ &var_98)
return result
