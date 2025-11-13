// 函数: sub_142a5d390
// 地址: 0x142a5d390
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*arg2 s<= 0)
    struct icu_64::numparse::impl::MutableMatcherCollection::icu_64::numparse::impl::NumberParserImpl::VTable
        ** rax_3 = *(*(arg1 + 0x170) + 0x18)
    
    if (rax_3 != 0)
        return rax_3
    
    int64_t* rax_4 = *(arg1 + 0x170)
    struct icu_64::numparse::impl::MutableMatcherCollection::icu_64::numparse::impl::NumberParserImpl::VTable
        ** rax_5 = sub_142abd9a0(*rax_4, rax_4[1], 0, arg2)
    
    if (*arg2 s<= 0)
        int64_t rax_6 = 0
        
        if (rax_5 == 0)
            *arg2 = 7
            return 0
        
        void* rcx_1 = *(arg1 + 0x170)
        bool z_1
        
        if (0 == *(rcx_1 + 0x18))
            *(rcx_1 + 0x18) = rax_5
            z_1 = true
        else
            rax_6 = *(rcx_1 + 0x18)
            z_1 = false
        
        if (z_1)
            return rax_5
        
        struct icu_64::numparse::impl::MutableMatcherCollection::icu_64::numparse::impl::NumberParserImpl::VTable
            * r8 = *rax_5
        r8->vFunc_0(rax_5, 1, r8)
        return rax_6

return 0
