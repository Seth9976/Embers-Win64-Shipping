// 函数: sub_142b154e0
// 地址: 0x142b154e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

struct icu_64::UnicodeFilter::icu_64::UnicodeSet::VTable** arg_8 = arg1
int64_t var_28 = -2
sub_142a9d8c0(arg1, arg2)
arg1[0x19] = 0
arg1[0x1a] = arg3
__builtin_memset(&arg1[0x1b], 0, 0x18)
arg1[0x1e].d = *(arg2 + 0xf0)
*(arg1 + 0xf4) = *(arg2 + 0xf4)
arg1[0x1f].d = *(arg2 + 0xf8)
*(arg1 + 0xfc) = 1
void* rcx = *(arg2 + 0xc8)

if (rcx != arg2)
    arg1[0x19] = sub_142a9ee00(rcx)
else
    arg1[0x19] = arg1

int64_t rsi = sx.q(arg1[0x1a]->__offset(0x8).q.d)
uint32_t count = arg1[0x1e].d + (rsi << 3).d

if (count s> 0x80)
    int64_t rax_7 = sub_142a7dd00(sx.q(count))
    arg1[0x1b] = rax_7
    
    if (rax_7 != 0)
        goto label_142b155ca
    
    *(arg1 + 0xf4) = 0
else
    arg1[0x1b] = &arg1[0x20]
label_142b155ca:
    int64_t rcx_2 = arg1[0x1b]
    int64_t r8 = rcx_2 + (rsi << 2)
    arg1[0x1c] = r8
    arg1[0x1d] = sx.q((rsi << 2).d) + r8
    memcpy(rcx_2, *(arg2 + 0xd8), count)

return arg1
