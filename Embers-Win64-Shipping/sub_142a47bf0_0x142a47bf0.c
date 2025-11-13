// 函数: sub_142a47bf0
// 地址: 0x142a47bf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = sx.q(arg4)
*arg1 = &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
arg1[1].w = 0

if (arg4 s<= 0 || arg3 u> 0x10ffff)
    sub_142a48460(arg1, arg2)
    return arg1

struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rax_3

if (arg3 s> 0xffff)
    if (rsi.d s> 0x3fffffff)
        sub_142a48460(arg1, arg2)
        return arg1
    
    rsi = zx.q(rsi.d * 2)
    
    if (arg2 s< rsi.d)
        arg2 = rsi.d
    
    if (sub_142a48460(arg1, arg2) == 0)
        return arg1
    
    void* rcx_2 = arg1 + 0xa
    
    if ((arg1[1].b & 2) == 0)
        rcx_2 = arg1[3]
    
    int32_t rdi
    rdi.w = arg3.w & 0x3ff
    rdi.w |= 0xdc00
    
    if (rsi.d s> 0)
        uint64_t i_1 = zx.q(((rsi - 1).d u>> 1) + 1)
        uint64_t i
        
        do
            *rcx_2 = (arg3 s>> 0xa).w - 0x2840
            *(rcx_2 + 2) = rdi.w
            rcx_2 += 4
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    rax_3 = arg1
    
    if (rsi.d s> 0x3ff)
        goto label_142a47c77
else
    if (arg2 s< rsi.d)
        arg2 = rsi.d
    
    if (sub_142a48460(arg1, arg2) == 0)
        return arg1
    
    void* rdx = arg1 + 0xa
    
    if ((arg1[1].b & 2) == 0)
        rdx = arg1[3]
    
    int64_t rcx_1
    int64_t rdi_2
    
    if (rsi.d s> 0)
        rdi_2, rcx_1 = __memfill_u16(rdx, arg3.w, rsi)
    rax_3 = arg1
    
    if (rsi.d s> 0x3ff)
    label_142a47c77:
        arg1[1].w |= 0xffe0
        *(arg1 + 0xc) = rsi.d
        return rax_3

arg1[1].w &= 0x1f
rsi.w <<= 5
arg1[1].w |= rsi.w
return rax_3
