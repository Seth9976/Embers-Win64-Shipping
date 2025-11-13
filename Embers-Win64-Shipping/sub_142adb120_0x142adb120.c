// 函数: sub_142adb120
// 地址: 0x142adb120
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_c8 = -2
void var_108
int64_t rax_1 = __security_cookie ^ &var_108
int64_t* inptr = arg7
struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_b8 =
    &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
int16_t var_b0 = 2
int64_t* inptr_3 = nullptr
int32_t isReference = 0
int64_t* rax_2 = __RTDynamicCast(inptr, 0, &class icu_64::NumberFormat `RTTI Type Descriptor', 
    &class icu_64::DecimalFormat `RTTI Type Descriptor', isReference)
int64_t var_d8 = 0

if (arg6 != 0 || rax_2 == 0)
    goto label_142adb227

int64_t rdx = *rax_2
isReference = 0
int64_t* inptr_1 = __RTDynamicCast((*(rdx + 0x18))(rax_2, rdx), 0, 
    &class icu_64::Format `RTTI Type Descriptor', 
    &class icu_64::DecimalFormat `RTTI Type Descriptor', isReference)
inptr = inptr_1
inptr_3 = inptr_1
int64_t* inptr_2 = inptr_1

if (inptr_1 != 0)
    struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_78
    struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rax_4 =
        sub_142a47a60(&var_78, 1, &data_143659928, 0xffffffff)
    int64_t r8 = *inptr_3
    (*(r8 + 0x168))(inptr_3, rax_4, r8)
    sub_142a47ff0(&var_78)
label_142adb227:
    int32_t r14_1 = *(arg5 + 8)
    (*(*inptr + 0xa0))(inptr, arg2, arg3, arg5, isReference)
    
    if (arg4 s> 0)
        int32_t r9_2 = *(arg5 + 8) - r14_1
        
        if (r9_2 s> arg4)
            int32_t r8_2 = *(arg3 + 8)
            
            for (int32_t i = r9_2 - arg4; i s> 0; i -= 1)
                r8_2 s/= 0xa
            
            *(arg5 + 8) = r14_1 + arg4
            sub_142aa8170(arg3, r8_2)

if (inptr_3 != 0)
    (**inptr_3)(inptr_3, 1)

sub_142a47ff0(&var_b8)
__security_check_cookie(rax_1 ^ &var_108)
return &icu_64::UObject::`vftable'
