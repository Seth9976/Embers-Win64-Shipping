// 函数: sub_142a97200
// 地址: 0x142a97200
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18 = -2
struct icu_64::RuleBasedBreakIterator::BreakCache::VTable** rdi = nullptr
*(arg1 + 0x210) = 0
__builtin_memset(arg1 + 0x1d8, 0, 0x34)
*(arg1 + 0x278) = 0
*(arg1 + 0x148) = data_14364e210
__builtin_memset(arg1 + 0x158, 0, 0x80)
int128_t result = data_14364e290

if (*arg2 s<= 0)
    sub_142aeaaf0(arg1 + 0x148, nullptr, 0, arg2)
    int64_t* rax_1 = j_sub_142a7dd00(0x40)
    int64_t* arg_8 = rax_1
    int64_t* rax_2
    
    if (rax_1 == 0)
        rax_2 = nullptr
    else
        rax_2 = sub_142b0ee50(rax_1, arg1, arg2)
    
    *(arg1 + 0x1f0) = rax_2
    int64_t* rax_3
    rax_3, result = j_sub_142a7dd00(0x340)
    arg_8 = rax_3
    
    if (rax_3 != 0)
        struct icu_64::RuleBasedBreakIterator::BreakCache::VTable** rax_4
        rax_4, result = sub_142b0ee00(rax_3, arg1, arg2)
        rdi = rax_4
    
    *(arg1 + 0x1e8) = rdi
    
    if (*arg2 s<= 0 && (*(arg1 + 0x1f0) == 0 || rdi == 0))
        *arg2 = 7

return result
