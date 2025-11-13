// 函数: sub_142ab8f10
// 地址: 0x142ab8f10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

struct icu_64::number::impl::ModifierStore::icu_64::number::impl::AdoptingModifierStore::VTable** 
    rax = j_sub_142a7dd00(0x98)

if (rax == 0)
    *arg3 = 7
    return 0

memset(rax, 0, 0x98)
*rax = &icu_64::number::impl::AdoptingModifierStore::`vftable'{for `icu_64::number::impl::ModifierStore'}
memset(&rax[1], 0, 0x90)
int64_t* rcx_2 = *(arg1 + 0x20)
int32_t arg_20 = 0

if ((*(*rcx_2 + 0x40))(rcx_2, 0xfffffff9, &arg_20) == 0)
    *(arg1 + 0x58) = 1
    *(arg1 + 0x5c) = 6
    rax[0x12] = sub_142ab8cf0(arg1, arg3)
    *(arg1 + 0x58) = 0
    *(arg1 + 0x5c) = 6
    rax[0x11] = sub_142ab8cf0(arg1, arg3)
    *(arg1 + 0x58) = 0xff
    *(arg1 + 0x5c) = 6
    rax[0x10] = sub_142ab8cf0(arg1, arg3)
    
    if (*arg3 s<= 0)
        struct icu_64::number::impl::MicroPropsGenerator::icu_64::number::impl::ImmutablePatternModifier::VTable
            ** rax_9 = j_sub_142a7dd00(0x20)
        arg_20.q = rax_9
        
        if (rax_9 == 0)
            return nullptr
        
        *rax_9 = &icu_64::number::impl::ImmutablePatternModifier::`vftable'{for `icu_64::number::impl::MicroPropsGenerator'}
        rax_9[1] = rax
        rax_9[2] = 0
        rax_9[3] = arg2
        return rax_9
else
    void* const r12_1 = &data_143654ec0
    
    for (int64_t i = 0; i != 6; )
        uint64_t rbx_1 = zx.q(*r12_1)
        *(arg1 + 0x58) = 1
        *(arg1 + 0x5c) = rbx_1.d
        uint32_t rdi_1 = (rbx_1 * 3).d
        rax[sx.q(rdi_1 + 2) + 1] = sub_142ab8cf0(arg1, arg3)
        *(arg1 + 0x58) = 0
        *(arg1 + 0x5c) = rbx_1.d
        rax[sx.q(rdi_1 + 1) + 1] = sub_142ab8cf0(arg1, arg3)
        *(arg1 + 0x58) = 0xff
        *(arg1 + 0x5c) = rbx_1.d
        r12_1 += 4
        i += 1
        rax[sx.q(rdi_1) + 1] = sub_142ab8cf0(arg1, arg3)
    
    if (*arg3 s<= 0)
        struct icu_64::number::impl::MicroPropsGenerator::icu_64::number::impl::ImmutablePatternModifier::VTable
            ** rax_6 = j_sub_142a7dd00(0x20)
        arg_20.q = rax_6
        
        if (rax_6 == 0)
            return nullptr
        
        int64_t rax_7 = *(arg1 + 0x50)
        *rax_6 = &icu_64::number::impl::ImmutablePatternModifier::`vftable'{for `icu_64::number::impl::MicroPropsGenerator'}
        rax_6[1] = rax
        rax_6[2] = rax_7
        rax_6[3] = arg2
        return rax_6

(*rax)->__offset(0x0).q(rax, 1)
return nullptr
