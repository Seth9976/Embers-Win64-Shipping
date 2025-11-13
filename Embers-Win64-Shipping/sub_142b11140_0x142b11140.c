// 函数: sub_142b11140
// 地址: 0x142b11140
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_90 = -2
void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
char rdi = 0
int32_t var_98 = 0
struct icu_64::StringTrieBuilder::LinearMatchNode::icu_64::UCharsTrieBuilder::UCTLinearMatchNode::VTable
    ** result_1 = j_sub_142a7dd00(0x30)
struct icu_64::StringTrieBuilder::LinearMatchNode::icu_64::UCharsTrieBuilder::UCTLinearMatchNode::VTable
    ** result = result_1
var_98.q = result_1
struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_88

if (result_1 == 0)
    result = nullptr
else
    struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rax_3 =
        sub_142b114e0(*(arg1 + 0x50) + (sx.q(arg2) << 3), &var_88, arg1 + 0x10)
    rdi = 1
    char rcx_1 = (rax_3[1].w).b
    void* rcx_2
    
    if ((rcx_1 & 0x11) == 0)
        rcx_2 = rax_3 + 0xa
        
        if ((rcx_1 & 2) == 0)
            rcx_2 = rax_3[3]
    else
        rcx_2 = nullptr
    
    void* r9 = rcx_2 + (sx.q(arg3) << 1)
    int32_t rdx_1
    
    if (arg5 != 0)
        rdx_1 = *(arg5 + 8)
    else
        rdx_1 = 0
    
    result[1].d = arg4 * 0x25 + 0x11cccbbb + rdx_1
    *(result + 0xc) = 0
    result[2].b = 0
    *(result + 0x14) = 0
    result[3].d = arg4
    result[4] = arg5
    *result = &icu_64::UCharsTrieBuilder::UCTLinearMatchNode::`vftable'{for `icu_64::StringTrieBuilder::LinearMatchNode'}
    result[5] = r9
    result[1].d = sub_142a8cab0(r9, arg4) + result[1].d * 0x25

if ((rdi & 1) != 0)
    sub_142a47ff0(&var_88)

__security_check_cookie(rax_1 ^ &var_b8)
return result
