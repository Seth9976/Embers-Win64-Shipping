// 函数: sub_142ab1e20
// 地址: 0x142ab1e20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[2].d = 0xffffffff
arg1[1] = 0
*arg1 = &icu_64::UnifiedCache::`vftable'{for `icu_64::UnifiedCacheBase'}
*(arg1 + 0x14) = 0
arg1[5] = 0
arg1[6] = 0
*(arg1 + 0x1c) = 0x3e8
arg1[4].d = 0x64

if (*arg2 s<= 0)
    struct icu_64::UObject::icu_64::SharedObject::VTable** rax_1 = j_sub_142a7dd00(0x18)
    struct icu_64::UObject::icu_64::SharedObject::VTable** arg_8 = rax_1
    
    if (rax_1 == 0)
        rax_1 = nullptr
    else
        rax_1[1] = 0
        *rax_1 = &icu_64::SharedObject::`vftable'{for `icu_64::UObject'}
        rax_1[2] = 0
    
    arg1[6] = rax_1
    
    if (rax_1 == 0)
        *arg2 = 7
        return arg1
    
    rax_1[1].d = 1
    *(&arg1[6]->__offset(0x8).q + 4) = 1
    arg1[6]->__offset(0x10).q = arg1
    int64_t* rax_5 = sub_142a86f30(sub_142ab2b10, sub_142ab2b00, 0, arg2)
    arg1[1] = rax_5
    
    if (*arg2 s<= 0)
        std::ios_base::precision(rax_5, sub_140a4f210)

return arg1
