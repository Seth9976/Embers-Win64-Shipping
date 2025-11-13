// 函数: sub_142a641f0
// 地址: 0x142a641f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

struct icu_64::StringEnumeration::icu_64::TZEnumeration::VTable** result = arg1
sub_142a85450(arg1)
*result = &icu_64::TZEnumeration::`vftable'{for `icu_64::StringEnumeration'}
__builtin_memset(&result[0xf], 0, 0x18)

if (*(arg2 + 0x80) == 0)
    result[0xf] = *(arg2 + 0x78)
    result[0x10] = 0
    result[0x11].d = *(arg2 + 0x88)
    *(result + 0x8c) = *(arg2 + 0x8c)
    return result

int64_t rax = sub_142a7dd00(sx.q(*(arg2 + 0x88)) << 2)
result[0x10] = rax

if (rax == 0)
    result[0x11] = 0
    result[0xf] = 0
    return result

int64_t rcx_2 = sx.q(*(arg2 + 0x88))
result[0x11].d = rcx_2.d
memcpy(rax, *(arg2 + 0x80), (rcx_2 << 2).d)
*(result + 0x8c) = *(arg2 + 0x8c)
result[0xf] = result[0x10]
return result
