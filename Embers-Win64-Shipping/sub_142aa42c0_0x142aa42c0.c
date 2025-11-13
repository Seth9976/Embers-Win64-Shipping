// 函数: sub_142aa42c0
// 地址: 0x142aa42c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_68 = -2
int32_t rax = sub_142b27220(arg1[2])
int32_t rdi = rax

if (*(arg1[1] + 0x20) == 0)
    return rax

int32_t rbp_1 = 0
int32_t arg_8 = 0
struct icu_64::UnicodeFilter::icu_64::UnicodeSet::VTable** rax_2 = (*(*arg1 + 0xf0))(arg1, &arg_8)
struct icu_64::UnicodeFilter::icu_64::UnicodeSet::VTable** arg_10 = rax_2

if (arg_8 s<= 0)
    void var_58
    sub_142b18760(&var_58, rax_2)
    int32_t i
    
    if (sub_142b18960(&var_58) != 0)
        while (i != 0xffffffff)
            rdi ^= sub_142aa3ce0(arg1[1], i)
            
            if (sub_142b18960(&var_58) == 0)
                break
    rbp_1 = rdi
    sub_142b187a0(&var_58)

if (rax_2 != 0)
    sub_142a9dbc0(rax_2)
    sub_142a47920(rax_2)

return rbp_1
