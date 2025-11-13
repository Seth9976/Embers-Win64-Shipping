// 函数: sub_142a455b0
// 地址: 0x142a455b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = sx.q(arg3)
struct icu_64::StringEnumeration::icu_64::KeywordEnumeration::VTable** result = arg1
sub_142a85450(arg1)
*result = &icu_64::KeywordEnumeration::`vftable'{for `icu_64::StringEnumeration'}
result[0xf] = &data_14360ec3a
result[0x10] = &data_14360ec3a
result[0x11].d = 0
result[0x12] = &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
result[0x13].w = 2

if (*arg5 s<= 0 && rsi.d != 0)
    if (arg2 == 0 || rsi.d s< 0)
        *arg5 = 1
    else
        int64_t rax_2 = sub_142a7dd00(sx.q((rsi + 1).d))
        result[0xf] = rax_2
        
        if (rax_2 != 0)
            memcpy(rax_2, arg2, rsi.d)
            *(rsi + result[0xf]) = 0
            result[0x10] = sx.q(arg4) + result[0xf]
            result[0x11].d = rsi.d
        else
            *arg5 = 7

return result
