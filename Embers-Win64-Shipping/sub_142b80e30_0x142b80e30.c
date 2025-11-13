// 函数: sub_142b80e30
// 地址: 0x142b80e30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

struct icu_64::UObject::icu_64::NFSubstitution::VTable** arg_8 = arg1
int64_t var_18 = -2
struct icu_64::NFSubstitution::icu_64::FractionalPartSubstitution::VTable** result = arg1
sub_142b810d0(arg1, arg2, arg3, arg4, arg5)
*result = &icu_64::FractionalPartSubstitution::`vftable'{for `icu_64::NFSubstitution'}
result[4].w = 0x100
int16_t rax_1 = *(arg4 + 8)
int32_t r8_1

if (rax_1 s< 0)
    r8_1 = *(arg4 + 0xc)
else
    r8_1 = sx.d(rax_1) s>> 5

if (sub_142a48fb0(arg4, 0, r8_1, &data_14367daf0, 0, 2) == 0)
label_142b80f0a:
    result[4].b = 1
    int16_t rax_6 = *(arg4 + 8)
    int32_t r8_5
    
    if (rax_6 s< 0)
        r8_5 = *(arg4 + 0xc)
    else
        r8_5 = sx.d(rax_6) s>> 5
    
    char rax_7 = sub_142a48fb0(arg4, 0, r8_5, &data_14367dae8, 0, 3)
    
    if (rax_7 == 0)
        *(result + 0x21) = rax_7
else
    int16_t rax_3 = *(arg4 + 8)
    int32_t r8_3
    
    if (rax_3 s< 0)
        r8_3 = *(arg4 + 0xc)
    else
        r8_3 = sx.d(rax_3) s>> 5
    
    if (sub_142a48fb0(arg4, 0, r8_3, &data_14367dae8, 0, 3) == 0)
        goto label_142b80f0a
    
    void* rax_5 = result[2]
    
    if (arg3 == rax_5)
        goto label_142b80f0a
    
    *(rax_5 + 0x98) = 1

return result
