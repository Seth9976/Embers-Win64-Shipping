// 函数: sub_142a9b030
// 地址: 0x142a9b030
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

struct icu_64::UObject::icu_64::StringEnumeration::VTable** arg_8 = arg1
int64_t var_38 = -2
struct icu_64::StringEnumeration::icu_64::ServiceEnumeration::VTable** result = arg1
sub_142a85450(arg1)
*result = &icu_64::ServiceEnumeration::`vftable'{for `icu_64::StringEnumeration'}
result[0xf] = *(arg2 + 0x78)
result[0x10].d = *(arg2 + 0x80)
sub_142ae6e40(&result[0x11], sub_140a4f210, 0, arg3)
int32_t rdi = 0
result[0x16].d = 0

if (*arg3 s<= 0)
    int32_t r14_1 = *(arg2 + 0x90)
    
    if (r14_1 s> 0)
        do
            int64_t* rax_2 = sub_142ae72d0(arg2 + 0x88, rdi)
            int64_t rdx_1 = *rax_2
            sub_142ae7110(&result[0x11], (*(rdx_1 + 0x30))(rax_2, rdx_1), arg3)
            rdi += 1
        while (rdi s< r14_1)
    
    if (*arg3 s<= 0)
        result[0x16].d = *(arg2 + 0xb0)

return result
