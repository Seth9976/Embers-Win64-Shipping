// 函数: sub_140a7e360
// 地址: 0x140a7e360
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_18 = 0
struct icu_64::StringEnumeration::icu_64::PluralKeywordEnumeration::VTable** rax_1 =
    sub_142a6fdf0(arg2, &arg_18)
*arg1 = 0
arg1[1] = 0

if (rax_1 != 0)
    struct icu_64::StringEnumeration::icu_64::PluralKeywordEnumeration::VTable* r8_1 = *rax_1
    
    for (void* i = r8_1->__offset(0x30).q(rax_1, &arg_18, r8_1); i != 0; 
            i = (*rax_1)->__offset(0x30).q(rax_1, &arg_18))
        char rax_2 = sub_140a7de60(i)
        int64_t rdi_1 = sx.q(arg1[1].d)
        int32_t rcx_3 = (rdi_1 + 1).d
        arg1[1].d = rcx_3
        
        if (rcx_3 s> *(arg1 + 0xc))
            sub_140a892e0(arg1)
        
        *(rdi_1 + *arg1) = rax_2
    
    (*rax_1)->__offset(0x0).q(rax_1, 1)

sub_140a5f3a0(*arg1, arg1[1].d, arg3)
return arg1
