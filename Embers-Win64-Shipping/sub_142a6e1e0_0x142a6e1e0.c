// 函数: sub_142a6e1e0
// 地址: 0x142a6e1e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18 = -2
*arg1 = &icu_64::AndConstraint::`vftable'
int64_t rdi = 0
arg1[1].d = 0
*(arg1 + 0xc) = -1
arg1[3] = 0
arg1[4].w = 0
*(arg1 + 0x24) = 0
arg1[5] = 0
arg1[6].d = 0
int32_t rax = *(arg2 + 0x30)
arg1[6].d = rax

if (rax s<= 0)
    arg1[1].d = *(arg2 + 8)
    *(arg1 + 0xc) = *(arg2 + 0xc)
    arg1[2].d = *(arg2 + 0x10)
    
    if (*(arg2 + 0x18) == 0)
        goto label_142a6e2bc
    
    struct icu_64::UObject::icu_64::UVector32::VTable** rax_4 = j_sub_142a7dd00(0x20)
    struct icu_64::UObject::icu_64::UVector32::VTable** arg_8 = rax_4
    struct icu_64::UObject::icu_64::UVector32::VTable** rcx_1
    
    if (rax_4 == 0)
        rcx_1 = nullptr
    else
        rcx_1 = sub_142ae7bc0(rax_4, &arg1[6])
    
    if (rcx_1 == 0 && arg1[6].d s<= rcx_1.d)
        arg1[6].d = 7
    
    if (arg1[6].d s<= 0)
        arg_8 = nullptr
        arg1[3] = rcx_1
        sub_142ae7d80(rcx_1, *(arg2 + 0x18), &arg1[6])
    label_142a6e2bc:
        *(arg1 + 0x21) = *(arg2 + 0x21)
        arg1[4].b = *(arg2 + 0x20)
        *(arg1 + 0x24) = *(arg2 + 0x24)
        
        if (*(arg2 + 0x28) != 0)
            struct icu_64::UObject::icu_64::UVector32::VTable** rax_10 = j_sub_142a7dd00(0x38)
            arg_8 = rax_10
            
            if (rax_10 != 0)
                rdi = sub_142a6e1e0(rax_10, *(arg2 + 0x28))
            
            arg1[5] = rdi
            
            if (rdi == 0)
                arg1[6].d = 7
    else if (rcx_1 != 0)
        (*rcx_1)->__offset(0x0).q(rcx_1, 1)

return arg1
