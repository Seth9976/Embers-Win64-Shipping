// 函数: sub_142b82b30
// 地址: 0x142b82b30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_98
int64_t rax_1 = __security_cookie ^ &var_98
int16_t rax_2 = *(arg2 + 8)
int32_t var_68 = 0
int32_t rdx_1

if (rax_2 s< 0)
    rdx_1 = *(arg2 + 0xc)
else
    rdx_1 = sx.d(rax_2) s>> 5

if (sub_142a48fb0(arg2, rdx_1 - 2, 2, &data_14367daf8, 0, 2) != 0)
    sub_142a479b0(arg1, arg2)
else
    int16_t rax_4 = *(arg2 + 8)
    int32_t r9_2
    
    if (rax_4 s< 0)
        r9_2 = *(arg2 + 0xc)
    else
        r9_2 = sx.d(rax_4) s>> 5
    
    struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_58
    Concurrency::details::_SyncOriginator<uint64_t>::_SyncOriginator<uint64_t>(&var_58, arg2, 0, 
        r9_2 - 1)
    sub_142a47930(arg1, &var_58)
    sub_142a47ff0(&var_58)

__security_check_cookie(rax_1 ^ &var_98)
return arg1
