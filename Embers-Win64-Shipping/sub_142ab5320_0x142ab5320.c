// 函数: sub_142ab5320
// 地址: 0x142ab5320
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

struct icu_64::Replaceable::icu_64::UnicodeString::VTable** arg_10 = arg2
int64_t var_20 = -2
struct icu_64::Replaceable::icu_64::UnicodeString::VTable** result = arg2
int32_t var_28 = 0
*arg2 = &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
arg2[1].w = 2
int32_t var_28_1 = 1
int16_t arg_8

if ((data_143ccaf50 & *(arg1 + 0x14)) != 0)
    arg_8 = 0x2d
    sub_142a48d70(result, &arg_8, 0, 1)

int32_t rcx_1 = *(arg1 + 0x10)

if (rcx_1 != 0)
    *(arg1 + 0xc)

if (rcx_1 == 0 || rcx_1 - 1 + *(arg1 + 0xc) s< 0)
    arg_8 = 0x30
    sub_142a48d70(result, &arg_8, 0, 1)

int32_t rcx_6 = *(arg1 + 0x10) + *(arg1 + 0xc)

if (*(arg1 + 0x24) s> rcx_6)
    rcx_6 = *(arg1 + 0x24)

int32_t rdi = rcx_6 - 1

while (true)
    int32_t rcx_7 = *(arg1 + 0xc)
    
    if (*(arg1 + 0x28) s< rcx_7)
        rcx_7 = *(arg1 + 0x28)
    
    if (rdi s< rcx_7)
        break
    
    if (rdi == 0xffffffff)
        arg_8 = 0x2e
        sub_142a48d70(result, &arg_8, 0, rdi + 2)
    
    uint64_t rcx_10 = zx.q(rdi - *(arg1 + 0xc))
    
    if (*(arg1 + 0x40) == 0)
        if (rcx_10.d u> 0xf)
            arg2.b = 0
        else
            arg2.b = (*(arg1 + 0x30) u>> (rcx_10 << 2).b).b & 0xf
    else if (rcx_10.d s< 0 || rcx_10.d s>= *(arg1 + 0x10))
        arg2.b = 0
    else
        arg2 = zx.q(*(sx.q(rcx_10.d) + *(arg1 + 0x30)))
    
    sub_142a48580(result, sx.d(arg2.b) + 0x30)
    rdi -= 1

return result
