// 函数: sub_142ae68f0
// 地址: 0x142ae68f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_48 = -2
char* rax_1 = (*(*arg2 + 0xb0))(arg2)
char** rax_3 = sub_142a641c0(nullptr, sub_141a50850(arg3), arg4)
char** rax_4 = sub_142a625a0(rax_3, "calendar", nullptr, arg4)
char** rax_5 = sub_142a62230(rax_4, rax_1, nullptr, arg4)
char** r14 = rax_5
char** rbp = sub_142a62230(rax_5, "DateTimePatterns", nullptr, arg4)
struct icu_64::Replaceable::icu_64::UnicodeString::VTable** result = nullptr

if (*arg4 == 2)
    *arg4 = 0
    char** rax_7 = sub_142a62230(rax_4, "gregorian", r14, arg4)
    r14 = rax_7
    rbp = sub_142a62230(rax_7, "DateTimePatterns", rbp, arg4)

struct icu_64::Replaceable::icu_64::UnicodeString::VTable** arg_20

if (*arg4 s<= 0)
    int32_t arg_10 = 0
    int32_t rbx_1 = 8
    
    if (sub_142a63b10(rbp) s>= 0xd)
        rbx_1 = *(arg1 + 0x16c) + 5
    
    void* rax_12 = sub_142a63b20(rbp, rbx_1, &arg_10, arg4)
    struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rax_13 = j_sub_142a7dd00(0x40)
    arg_20 = rax_13
    
    if (rax_13 != 0)
        result = sub_142a47a60(rax_13, 1, rax_12, arg_10)
    
    sub_142a5f860(rbp)
    sub_142a5f860(r14)
    sub_142a5f860(rax_4)
    sub_142a5f860(rax_3)
else
    struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rax_9 = j_sub_142a7dd00(0x40)
    arg_20 = rax_9
    
    if (rax_9 != 0)
        return sub_142a47f60(rax_9, u"{1} {0}", 8)
return result
