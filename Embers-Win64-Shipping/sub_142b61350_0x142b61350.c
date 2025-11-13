// 函数: sub_142b61350
// 地址: 0x142b61350
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

struct icu_64::Replaceable::icu_64::UnicodeString::VTable** arg_10 = arg2
int64_t var_20 = -2
int64_t r9 = sx.q(arg3)
int32_t var_28 = 0
void* rax_2 = (r9 << 4) + *(arg1 + 0x280)
int32_t r8_1 = zx.d(*(rax_2 + 8)) + *(rax_2 + 4)
*arg2 = &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
arg2[1].w = 2
int32_t var_28_1 = 1
int64_t rsi_1 = sx.q((r9 + 1).d) << 4
int32_t* rbx_1 = *(arg1 + 0x280) + rsi_1
int32_t i = *rbx_1
sub_142a48d00(arg2, arg1 + 0x238, r8_1, rbx_1[1] - r8_1)

if (i != 5)
    while (i != 1)
        int32_t r8_3 = zx.d(rbx_1[2].w) + rbx_1[1]
        rsi_1 += 0x10
        rbx_1 = *(arg1 + 0x280) + rsi_1
        i = *rbx_1
        sub_142a48d00(arg2, arg1 + 0x238, r8_3, rbx_1[1] - r8_3)
        
        if (i == 5)
            break

return arg2
