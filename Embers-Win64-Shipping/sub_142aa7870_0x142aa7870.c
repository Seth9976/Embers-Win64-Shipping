// 函数: sub_142aa7870
// 地址: 0x142aa7870
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18 = -2

if (arg1 != arg2)
    sub_142aa7c90(arg1)
    int64_t rax_1 = sx.q(*(arg2 + 0x28))
    *(arg1 + 0x28) = rax_1.d
    struct icu_64::IFixedDecimal::icu_64::number::impl::DecimalQuantity::VTable** arg_10
    
    if (rax_1.d u<= 6)
        struct icu_64::IFixedDecimal::icu_64::number::impl::DecimalQuantity::VTable** rax_3
        
        switch (rax_1)
            case 0, 1, 2, 5
                rax_3 = *(arg2 + 8)
            case 3
                rax_3 = j_sub_142a7dd00(0x40)
                arg_10 = rax_3
                
                if (rax_3 != 0)
                    rax_3 = sub_142a479b0(rax_3, *(arg2 + 8))
            case 4
                *(arg1 + 0x10) = *(arg2 + 0x10)
                rax_3 = sub_142aa7bc0(*(arg2 + 8), *(arg2 + 0x10))
            case 6
                int64_t* rcx_4 = *(arg2 + 8)
                rax_3 = (*(*rcx_4 + 0x10))(rcx_4, &__dos_header)
        
        *(arg1 + 8) = rax_3
    
    int32_t arg_8 = 0
    
    if (*(arg2 + 0x20) != 0)
        struct icu_64::IFixedDecimal::icu_64::number::impl::DecimalQuantity::VTable** rax_5 =
            j_sub_142a7dd00(0x48)
        arg_10 = rax_5
        
        if (rax_5 != 0)
            rax_5 = sub_142ab2b60(rax_5, *(arg2 + 0x20))
        
        *(arg1 + 0x20) = rax_5
    
    if (*(arg2 + 0x18) != 0)
        struct icu_64::IFixedDecimal::icu_64::number::impl::DecimalQuantity::VTable** rax_6 =
            j_sub_142a7dd00(0x40)
        void** rsi_1 = rax_6
        arg_10 = rax_6
        
        if (rax_6 == 0)
            rsi_1 = nullptr
        else
            int64_t* rdx_3 = *(arg2 + 0x18)
            *rsi_1 = rax_6 + 0xd
            rsi_1[1].d = 0x28
            *(rsi_1 + 0xc) = 0
            rsi_1[7].d = 0
            *(rax_6 + 0xd) = 0
            sub_142a8cbd0(rsi_1, *rdx_3, rdx_3[7].d, &arg_8)
        
        *(arg1 + 0x18) = rsi_1
        
        if (arg_8 s> 0)
            if (rsi_1 != 0)
                if (*(rsi_1 + 0xc) != 0)
                    sub_142a7dcd0(*rsi_1)
                
                sub_142a47920(rsi_1)
            
            *(arg1 + 0x18) = 0

return arg1
