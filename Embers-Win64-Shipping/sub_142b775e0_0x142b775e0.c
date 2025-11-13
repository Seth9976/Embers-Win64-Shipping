// 函数: sub_142b775e0
// 地址: 0x142b775e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

struct icu_64::UObject::icu_64::CanonicalIterator::VTable** arg_8 = arg1
int64_t var_18 = -2
int32_t* rdi = arg3
*arg1 = &icu_64::CanonicalIterator::`vftable'{for `icu_64::UObject'}
arg1[1] = &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
arg1[2].w = 2
arg1[0xa] = 0
arg1[0xb].d = 0
__builtin_memset(&arg1[0xc], 0, 0x14)
arg1[0xf] = &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
arg1[0x10].w = 2
arg1[0x17] = sub_142b68ce0(arg3)
int64_t* rax_1 = sub_142b68c10(rdi)
arg1[0x18] = rax_1

if (*rdi s<= 0)
    char rax_2
    int512_t zmm1_1
    rax_2, zmm1_1 = sub_142b1d3d0(rax_1, rdi)
    
    if (rax_2 != 0)
        sub_142b78970(arg1, arg2, rdi, zmm1_1)

return arg1
